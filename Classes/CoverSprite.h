//
//  CoverSprite.h
//  Chain
//
//  Created by Kosuke Takami on 2014/02/16.
//
//

#ifndef __Chain__CoverSprite__
#define __Chain__CoverSprite__

#include <iostream>
#include "cocos2d.h"
using namespace cocos2d;

class CoverSprite : public Sprite
{
    const int SIZE = 32;
    float scale = 0;
    float time = 2;
    float isMoving = false;
    float size;
    bool isFull = false;
public:
    CoverSprite();
    ~CoverSprite();
    static CoverSprite* createPanel();
    bool initWithSpriteFrameName(const std::string& spriteFrameName);
    bool isFullCovered();
    void start();
    
    void update();
    
    CREATE_FUNC(CoverSprite);
};

#endif /* defined(__Chain__CoverSprite__) */