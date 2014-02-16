//
//  PanelSprite.cpp
//  Chain
//
//  Created by Kosuke Takami on 2014/02/15.
//
//

#include "PanelSprite.h"

//PanelSprite::PanelSprite(Sprite* sprite){
//    this->sprite = sprite;
//    this->node->addChild(this->sprite);
//}

PanelSprite::PanelSprite(){
}

PanelSprite::~PanelSprite(){
}

PanelSprite* PanelSprite::createWithPanelType(int panelType){
    PanelSprite* sprite = new PanelSprite();
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
    
    if(sprite && sprite->initWithSpriteFrameName((panelName + ".png").c_str())){
        sprite->autorelease();
        return sprite;
    }
    CC_SAFE_DELETE(sprite);
    return NULL;
}

bool PanelSprite::initWithSpriteFrameName(const std::string &spriteFrameName){
    return Sprite::initWithSpriteFrameName(spriteFrameName);
}

void PanelSprite::setSize(float size){
    this->setScale(size / SIZE);
}

void PanelSprite::setWillRemoved(bool willRemoved){
    this->willRemoved = willRemoved;
}

bool PanelSprite::getWillRemoved(){
    return this->willRemoved;
}


void PanelSprite::onTap(){
    log("onTap");
    log("x: %f, y: %f", this->getPosition().x, this->getPosition().y);
    this->setWillRemoved(true);
}


//移動量に合わせて移動させて、deltaYを減らす。
bool PanelSprite::move(){
    if (deltaY >= -0.0001 && deltaY <= 0.0001 ){
        return false;
    }
    float currentY = this->getPositionY();
    this->setPositionY(currentY - velocity);
    deltaY -= velocity;
    return true;
}

void PanelSprite::setDeltaY(float deltaY){
    this->deltaY += deltaY;
    this->velocity = this->deltaY / 100 * 10;
}