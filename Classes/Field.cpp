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
    log("Field:onTouchBegan");
    PanelSprite* panel;
    Object* targetObject;
    //Point tap = CCDirector::sharedDirector()->convertToGL( touch->getLocationInView() );
    //Point tap = touch->getLocation();
    CCARRAY_FOREACH(this->panels, targetObject){
        panel = (PanelSprite*) targetObject;
        if(panel && panel->getBoundingBox().containsPoint(tap)){
            panel->onTap();
        }
    }
}

void Field::onTouchMove(Touch* touch){
    log("Field:onTouchMove");
}

void Field::onTouchEnded(Touch* touch){
    log("Field:onTouchEnded");
}