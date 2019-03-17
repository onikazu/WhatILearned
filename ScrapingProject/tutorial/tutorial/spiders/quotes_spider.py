import scrapy


# $ scrapy crawl quotes
class QuotesSpider(scrapy.Spider):
    name = "quotes"

    def start_requests(self):
        urls = [
            'http://quotes.toscrape.com/page/1/',
            'http://quotes.toscrape.com/page/2/',
        ]
        for url in urls:
            yield scrapy.Request(url=url, callback=self.parse)

    def parse(self, response):
        print("this is ", type(response))
        page = response.url.split("/")[-2]
        filename = 'quotes-{}.html'.format(page)
        with open(filename, 'wb') as f:
            f.write(response.body)
        self.log('Saved file {}'.format(filename))


# $ scrapy crawl quotes_json -o result.json
class QuotesJsonSpider(scrapy.Spider):
    name = "quotes_json"

    start_urls = [
        'http://quotes.toscrape.com/page/1/',
        'http://quotes.toscrape.com/page/2/',
    ]

    def parse(self, response):
        for quote in response.css("div.quote"):
            yield {
                'text': quote.css('span.text::text').extract_first(),
                'author': quote.css('small.author::text').extract_first(),
                'tags': quote.css('div.tags a.tag::text').extract()
            }


class QuotesReccurentSpider(scrapy.Spider):
    name = "quotes_reccurent"

    start_urls = [
        'http://quotes.toscrape.com/page/1/',
    ]

    def parse(self, response):
        for quote in response.css("div.quote"):
            yield {
                'text': quote.css('span.text::text').extract_first(),
                'author': quote.css('small.author::text').extract_first(),
                'tags': quote.css('div.tags a.tag::text').extract(),
            }

        next_page = response.css('li.next a::attr(href)').extract_first()
        if next_page is not None:
            next_page = response.urljoin(next_page)
            yield scrapy.Request(next_page, callback=self.parse)
