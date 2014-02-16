//
//  Field.cpp
//  Chain
//
//  Created by Kosuke Takami on 2014/02/16.
//
//

#include "Field.h"

Field::Field(Node* parentNode){
    this->parentNode = parentNode;
}

Field::~Field(){
}

void Field::initialize(){
    for(int i = 0; i < WIDTH; i++){
        for(int j = 0; j < HEIGHT; j++){
            int panelType = rand() % 6 + 1;
            PanelSprite* panel = PanelSprite::createWithPanelType(panelType);
            int x = i * FIELD_SIZE / WIDTH;
            int y = j * FIELD_SIZE / HEIGHT;
            panel->setSize(FIELD_SIZE / WIDTH);
            panel->setPosition(Point(x, y));
            panel->setAnchorPoint(ccp(0, 0));
            panel->append(this->node);
         }
    }
}