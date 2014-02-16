//
//  Field.cpp
//  Chain
//
//  Created by Kosuke Takami on 2014/02/16.
//
//

#include "Field.h"

Field::Field(){
}

Field::~Field(){
}

void Field::initialize(){
    panels = FieldPanels::create();
    panels->retain();
    panels->initialize(this);
}

void Field::onTouchBegan(const Point &tap){
    //if(this->panels->isMoving()){
    //return;
    //}
    log("Field:onTouchBegan");
    PanelSprite* panel;
    Object* targetObject;
    CCARRAY_FOREACH(this->panels, targetObject){
        panel = (PanelSprite*) targetObject;
        if(panel && panel->getBoundingBox().containsPoint(tap)){
            panel->onTap();
        }
    }
}

void Field::onTouchMove(Touch* touch){
    log("Field:onTouchMove");
    if(this->panels->isMoving()){
        return;
    }
}

void Field::onTouchEnded(Touch* touch){
    log("Field:onTouchEnded");
    if(this->panels->isMoving()){
        return;
    }
}

void Field::update(){
    panels->update();
}