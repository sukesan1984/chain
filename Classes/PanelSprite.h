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
#include "KTNode.h"
using namespace cocos2d;

class PanelSprite : public Sprite
{
    const int SIZE = 32;
    Sprite* sprite;
public:
    //PanelSprite(Sprite* sprite);
    PanelSprite();
    ~PanelSprite();
    static PanelSprite* createWithPanelType(int panelType);
    bool initWithSpriteFrameName(const std::string& spriteFrameName);
    
    void setSize(float size);
    void onTap();
    CREATE_FUNC(PanelSprite);
};

#endif /* defined(__Chain__PanelSprite__) */
