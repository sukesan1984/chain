//
//  FieldPanels.cpp
//  Chain
//
//  Created by Kosuke Takami on 2014/02/16.
//
//

#include "FieldPanels.h"

FieldPanels::FieldPanels(){
}

FieldPanels::~FieldPanels(){
}

void FieldPanels::initialize(Node* parentNode){
    for(int i = 0; i < WIDTH; i++){
        for(int j = 0; j < HEIGHT; j++){
            int panelType = rand() % 6 + 1;
            PanelSprite* panel = PanelSprite::createWithPanelType(panelType);
            int x = i * FIELD_SIZE / WIDTH;
            int y = j * FIELD_SIZE / HEIGHT;
            panel->setSize(FIELD_SIZE / WIDTH);
            panel->setPosition(Point(x, y));
            panel->setAnchorPoint(Point(0, 0));
            parentNode->addChild(panel);
            this->add(panel);
        }
    }
}

void FieldPanels::add(PanelSprite* panel){
    this->addObject((Object*) panel);
}

void FieldPanels::remove(int index){
    this->removeObjectAtIndex(index);
}

FieldPanels* FieldPanels::create(){
    FieldPanels* pArray = new FieldPanels();
    if (pArray && pArray->init())
    {
        pArray->autorelease();
    }
    else
    {
        CC_SAFE_DELETE(pArray);
    }
    
    return pArray;
}