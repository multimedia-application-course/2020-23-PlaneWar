#ifndef HEROPLANE_H
#define HEROPLANE_H
#include<QPixmap>
#include<QRect>
#include"config.h"
#include"bullet.h"

class HeroPlane
{
public:
  HeroPlane();
  //射击子弹
  void shoot();
  //设置飞机位置
  void setPosition(int x,int y);
  //int randomIntPlane();
  //飞机资源 对象
  QPixmap m_Plane;
  //飞机坐标
  int m_X;
  int m_Y;
  //飞机的矩形边框
  QRect m_Rect;
  //弹匣
  bullet m_bullets[BULLET_NUM];
  //发射间隔记录
  int m_recorder;
};

#endif // HEROPLANE_H
