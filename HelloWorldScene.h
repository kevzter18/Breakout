#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

USING_NS_CC;

class HelloWorld : public cocos2d::Layer
{
public:

	Sprite* ball;
	Sprite* paddle;
	Sprite* edgeSp;

	PhysicsWorld* m_world;
	
	//LabelTTF *status_label;

	void setPhyWorld(PhysicsWorld* world){ m_world = world; };

	void onTouchMoved(Touch *touch, Event *event);
	void onTouchEnded(Touch *touch, Event *event);
	
	bool onTouchBegan(Touch *touch, Event *event);
	
	bool onContactBegin(PhysicsContact& contact);
	
	void tick(float dt);

    static cocos2d::Scene* createScene();

    virtual bool init();  
	
	//virtual void onEnter();
    
    CREATE_FUNC(HelloWorld);
};

#endif // __HELLOWORLD_SCENE_H__
