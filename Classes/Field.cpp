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
    panels = FieldPanels::create();
    panels->retain();
    panels->initialize(this->getNode());
}

void Field::onTouchBegan(Touch* touch){
    log("Field:onTouchBegan");
}

void Field::onTouchMove(Touch* touch){
    log("Field:onTouchMove");
}

void Field::onTouchEnded(Touch* touch){
    log("Field:onTouchEnded");
}