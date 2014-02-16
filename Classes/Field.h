//
//  Field.h
//  Chain
//
//  Created by Kosuke Takami on 2014/02/16.
//
//

#ifndef __Chain__Field__
#define __Chain__Field__

#include <iostream>
#include "cocos2d.h"
#include "PanelSprite.h"
#include "KTNode.h"
using namespace cocos2d;


class Field : public KTNode
{
    const int WIDTH = 9;
    const int HEIGHT = 9;
    const int FIELD_SIZE = 315;
    Node* parentNode;
public:
    void initialize();
    void onTouchBegan(const Point &point);
    void onTouchMove(const Point &point);
    void onTouchEnded(const Point &point);
    Field(Node* parentNode);
    ~Field();
};

#endif /* defined(__Chain__PanelSprite__) */

