//
//  KTNode.cpp
//  Chain
//
//  Created by Kosuke Takami on 2014/02/16.
//
//

#include "KTNode.h"

KTNode::KTNode(){
    this->node = Node::create();
}

KTNode::~KTNode(){
}

bool KTNode::append(Node* node){
    node->addChild(this->node);
    return true;
}

void KTNode::setPosition(const cocos2d::Point &position){
    this->node->setPosition(position);
}

void KTNode::setScale(float scale){
    this->node->setScale(scale);
}

void KTNode::setAnchorPoint(const Point& anchorPoint){
    this->node->setAnchorPoint(anchorPoint);
}
