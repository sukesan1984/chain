//
//  FieldPanels.h
//  Chain
//
//  Created by Kosuke Takami on 2014/02/16.
//
//

#ifndef __Chain__FieldPanels__
#define __Chain__FieldPanels__

#include <iostream>
#include "PanelSprite.h"
#include "cocos2d.h"
using namespace cocos2d;

class FieldPanels : public CCArray{
    const int WIDTH = 9;
    const int HEIGHT = 9;
    const int FIELD_SIZE = 315;
public:
    void initialize(CCNode* parentNode); //明示的に初期化処理を呼ぶ。
    void add(PanelSprite* panel); //パネルを追加する。
    void remove(int index); //inexのパネルを消す。
    
    static FieldPanels* create();
    FieldPanels();
    ~FieldPanels();
};


#endif /* defined(__Chain__FieldPanels__) */
