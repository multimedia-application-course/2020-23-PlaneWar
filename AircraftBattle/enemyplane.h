#ifndef ENEMYPLANE_H
#define ENEMYPLANE_H
#include"config.h"
#include"QPixmap"
#include"QRect"

class Enemyplane
{
public:
  Enemyplane();
  //更新坐标
  void updatePosition();
  //int randomIntEnemy();
  //敌机资源对象
  QPixmap m_enemy;
  //位置
  int m_X;
  int m_Y;
  //速度
  int m_Speed;
  //状态
  bool m_Free;//璁剧疆鏁屾満闂茬疆
  //敌机的矩形边框
  QRect m_Rect;//鏁屾満妗?
};

#endif // ENEMYPLANE_H
