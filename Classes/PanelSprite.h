//
//  PanelSprite.h
//  Chain
//
//  Created by Kosuke Takami on 2014/02/15.
//
//

#ifndef __Chain__PanelSprite__
#define __Chain__PanelSprite__

#include <iostream>
#include "cocos2d.h"
#include "CoverSprite.h"
using namespace cocos2d;

class PanelSprite : public Sprite
{
    const int SIZE = 32;
    Sprite* sprite;
    CoverSprite* cover;
    bool willRemoved = false;
    float deltaY = 0;
    float velocity = 0;
    
public:
    PanelSprite();
    ~PanelSprite();
    static PanelSprite* createWithPanelType(int panelType);
    bool initWithSpriteFrameName(const std::string& spriteFrameName);
    
    void setWillRemoved(bool willRemoved);
    bool getWillRemoved();
    void remove();
    
    void setSize(float size);
    void onTap();
    
    bool move();
    void setDeltaY(float deltaY);
    void update();
    CREATE_FUNC(PanelSprite);
};

#endif /* defined(__Chain__PanelSprite__) */
