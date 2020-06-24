#ifndef CONFIG_H
#define CONFIG_H

/*************游戏配置*************/
#define GAME_WIDTH 512//宽度
#define GAME_HEIGHT 768//高度
#define GAME_TITLE "飞机大战" //标题
#define GAME_RES_PATH "./fly.rcc"//rcc文件路径
#define GAME_RATE 10 //定时器刷新（单位：毫秒）

/*************地图配置*************/
#define MAP_PATH ":/res/img_bg_level_4.jpg"//地图路径
#define MAP_SCROLL_SPEED 2//滚动速度

/*************飞机配置数据*************/
#define HERO_PATH ":/res/hero.png" //英雄飞机图片

/*************子弹配置数据*************/
#define BULLET_PATH ":/res/bullet_8.png" //英雄飞机的子弹图片
#define BULLET_RATE 5 //子弹移动速度
#define BULLET_NUM 30 //弹匣中子弹总数
#define BULLET_INTERVAL 20 //发射子弹时间间隔

/*************敌机配置数据*************/
#define ENEMY_PATH ":/res/img-plane_7.png" //敌机资源照片
#define ENEMY_SPEED 5 //敌机移动速度
#define ENEMY_MUN 20  //敌机总数
#define ENEMY_INTERVAL 30 //敌机出场时间间隔

#endif // CONFIG_H
