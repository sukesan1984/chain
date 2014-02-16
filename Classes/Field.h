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
#include "FieldPanels.h"
#include "KTNode.h"
using namespace cocos2d;


class Field : public Node
{
    Node* parentNode;
    FieldPanels* panels;
public:
    void initialize();
    void onTouchBegan(const Point &tap);
    void onTouchMove(Touch* touch);
    void onTouchEnded(Touch* touch);
    Field();
    ~Field();
};

#endif /* defined(__Chain__PanelSprite__) */

