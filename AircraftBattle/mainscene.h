#ifndef MAINSCENE_H
#define MAINSCENE_H
#include <QWidget>
#include <QTimer>
#include "map.h"
#include "heroplane.h"
#include "bullet.h"
#include "enemyplane.h"

class MainScene : public QWidget
{
  Q_OBJECT

public:
  MainScene(QWidget *parent = 0);
  ~MainScene();
  //初始化场景
  void initScene(); 
  //启动游戏
  void playGame();
  //更新所有游戏元素的坐标
  void updatePosition();
  //绘制到屏幕中 函数名称不可改
  void paintEvent(QPaintEvent *);
  //重新鼠标移动事件 函数名称不可改
  void mouseMoveEvent(QMouseEvent *);
  //敌机出场
  void enemyToScene();
  //敌机数组
  Enemyplane m_enemys[ENEMY_MUN];
  //敌机出场间隔记录
  int m_recorder;

  //地图对象
  Map m_map;
  //飞机对象
  HeroPlane m_hero;
  //子弹对象
  bullet temp_Bullet;

  void collisonDetection();


  //定时器
  QTimer m_Timer;

};

#endif // MAINSCENE_H
