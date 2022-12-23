#ifndef __RANDOMIVENT_H__
#define __RANDOMIVENT_H__

#include "cocos2d.h"

USING_NS_CC;
class RandomIvent
{
public:

	RandomIvent(Layer* layer);
	void spawnRandomIvent();
	bool onContactBegin(cocos2d::PhysicsContact& contact);
	void deleteRI();
private:

	Sprite* randomIventSprite;
	PhysicsBody* randomIventBody;
	Vec2 origin;
	Size visibleSize;
	int randomDelay;
	Layer* gameLayer;
};

#endif // __RANDOMIVENT_H__
