# Robel tutorial

## ハマったポイント
### 第22章
未だ動作せず

### 第23章
ここでは日本語一文字を2byteとして扱っているがUTF-8においては3byteになるので振られるインデックスが変わる。
ロベールはおそらく、シフトJISで符号化されたひらがなを想定している。


### 第31章
警告が出てしまう

[参照ページ](https://ja.stackoverflow.com/questions/38728/utf-8%E3%81%A7%E6%97%A5%E6%9C%AC%E8%AA%9E1%E6%96%87%E5%AD%97%E3%81%8C3%E3%83%90%E3%82%A4%E3%83%88%E3%81%AA%E3%81%AE%E3%81%AF%E3%81%AA%E3%81%9C)

### 第32章
ポインタのキャストについて

[参照ページ](https://www.jpcert.or.jp/sc-rules/c-int36-c.html)

### 第37章
アドレスを表示するときのキャスト

unsigned int -> unsigned long

### 第38章
動作せず


### 第55章
gets関数はC11で消えた

### 第69章
動作せず