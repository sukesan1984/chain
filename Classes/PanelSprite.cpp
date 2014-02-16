//
//  PanelSprite.cpp
//  Chain
//
//  Created by Kosuke Takami on 2014/02/15.
//
//

#include "PanelSprite.h"

PanelSprite::PanelSprite(Sprite* sprite){
    this->sprite = sprite;
    this->node->addChild(this->sprite);
}

PanelSprite::~PanelSprite(){
}

PanelSprite* PanelSprite::createWithPanelType(int panelType){
    std::string panelName;
    switch (panelType) {
        case 0:
            panelName = "black";
            break;
        case 1:
            panelName = "blue";
            break;
        case 2:
            panelName = "green";
            break;
        case 3:
            panelName = "purple";
            break;
        case 4:
            panelName = "red";
            break;
        case 5:
            panelName = "sky";
            break;
        case 6:
            panelName = "yellow";
            break;
        case 7:
            panelName = "white";
            break;
        default:
            break;
    }
    
    Sprite* sprite = Sprite::createWithSpriteFrameName((panelName + ".png").c_str());
    sprite->setAnchorPoint(ccp(0, 0));
    PanelSprite* panelSprite = new PanelSprite(sprite);
    return panelSprite;
}

void PanelSprite::setSize(float size){
    this->setScale(size / SIZE);
}