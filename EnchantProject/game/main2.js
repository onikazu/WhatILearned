enchant();

window.onload = function () {
    var core = new Core(320, 320);
    core.preload('chara1.png');
    core.fps = 15;
    core.onload = function () {

        var Bear = Class.create(Sprite, {
            initialize: function (x, y) {
                Sprite.call(this, 32, 32);
                this.x = x;
                this.y = y;
                this.image = core.assets['chara1.png'];
                this.on('enterframe', function () {
                    this.x += 5;
                });
                core.rootScene.addChild(this);
            }
        });

        // var gameOverScene = new Scene();
        // gameOverScene.backgroundColor = 'black';

        var enemy_bear = new Sprite(32, 32);
        enemy_bear.image = core.assets['chara1.png'];
        enemy_bear.x = 100;
        enemy_bear.y = 100;


        var label = new Label();
        label.x = 280;
        label.y = 5;
        label.color = 'red';
        label.font = '14px "Arial"';
        label.text = '0';
        label.on('enterframe', function () {
            label.text = (core.frame / core.fps).toFixed(2);
        });

        var bear = new Sprite(32, 32);
        bear.image = core.assets['chara1.png'];
        bear.x = 0;
        bear.y = 0;
        bear.on('enterframe', function () {
            if (core.input.left) this.x -= 5;
            if (core.input.right) this.x += 5;
            if (core.input.up) this.y -= 5;
            if (core.input.down) this.y += 5;
            if (this.intersect(enemy_bear)){
                label.text = 'hit!';
            }
            if (this.within(enemy_bear, 10)){
                label.text = 'HIT!';
                //core.pushScene(gameOverScene);
                //core.stop();
            }

        });
        bear.on('touchstart', function() {
            core.rootScene.removeChild(this);
        });

        core.rootScene.on('touchstart', function(e) {
            bear.x = e.x;
            bear.y = e.y;
        });

        core.rootScene.addChild(enemy_bear);
        core.rootScene.addChild(bear);
        core.rootScene.addChild(label);

    };
    core.start();
};