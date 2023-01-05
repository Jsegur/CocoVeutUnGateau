#ifndef __COLLISION_SCENE_H__
#define __COLLISION_SCENE_H__

#include "cocos2d.h"
#include "CCPhysicsWorld.h"

class Collision : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();

    // a selector callback
    bool TouchEventScene(cocos2d::Ref* pSender);

    // implement the "static create()" method manually
    CREATE_FUNC(Collision);

private:
    static coco2d::PhysicsWorld* sceneWorld;

    void SetPhysicsWorld(coco2d::PhysicsWorld* world) { sceneWorld = world; };

    bool onContactBegin(coco2d::PhysicsWorld &contact);
};

#endif // __HELLOWORLD_SCENE_H__
