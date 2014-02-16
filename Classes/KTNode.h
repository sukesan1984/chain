//
//  KTNode.h
//  Chain
//
//  Created by Kosuke Takami on 2014/02/16.
//
//

#ifndef __Chain__KTNode__
#define __Chain__KTNode__

#include <iostream>
#include "cocos2d.h"
using namespace cocos2d;

class KTNode : public Object{
protected:
    Node* node;
public:
    bool append(Node* node);//addChildの変わりに。
    void setPosition(const Point &position);
    void setScale(float scale);
    void setAnchorPoint(const Point& anchorPoint);
    Node* getNode();
    KTNode();
    ~KTNode();
};

#endif /* defined(__Chain__KTNode__) */
