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
    CCArray* removedPanels;
    bool moveState = false;
    PanelSprite* createPanel(int indexX, int indexY);
    Node* parentNode;
public:
    void initialize(CCNode* parentNode); //明示的に初期化処理を呼ぶ。
    void restockPanel(CCNode* parentNode);
    void add(PanelSprite* panel); //パネルを追加する。
    void remove(int index); //indexのパネルを消す。
    void pushRemovedPanel(PanelSprite* panel);
    CCArray* getRemovedPanels();
    void removePanels();
    void setMoves();
    void movePanels();
    
    static FieldPanels* create();
    bool isMoving();
    
    FieldPanels();
    ~FieldPanels();
    void update();
};


#endif /* defined(__Chain__FieldPanels__) */
