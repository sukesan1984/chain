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

class PanelSprite : public KTNode
{
    const int SIZE = 32;
    Sprite* sprite;
public:
    PanelSprite(Sprite* sprite);
    ~PanelSprite();
    static PanelSprite* createWithPanelType(int panelType);
    void setSize(float size);
};

#endif /* defined(__Chain__PanelSprite__) */
