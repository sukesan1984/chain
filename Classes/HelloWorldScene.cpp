#include "HelloWorldScene.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();

    /////////////////////////////
    // 2. add a menu item with "X" image, which is clicked to quit the program
    //    you may modify it.

    // add a "close" icon to exit the progress. it's an autorelease object
    auto closeItem = MenuItemImage::create(
                                           "CloseNormal.png",
                                           "CloseSelected.png",
                                           CC_CALLBACK_1(HelloWorld::menuCloseCallback, this));
    
	closeItem->setPosition(Point(origin.x + visibleSize.width - closeItem->getContentSize().width/2 ,
                                origin.y + closeItem->getContentSize().height/2));
    
    SpriteFrameCache::sharedSpriteFrameCache()->addSpriteFramesWithFile("panels.plist");
    
    
    this->field = new Field();
    field->initialize();
    field->setPosition(FIELD_START_AT);
    field->setAnchorPoint(Point(0, 0));
    this->addChild(field);
    
    // create menu, it's an autorelease object
    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Point::ZERO);
    this->addChild(menu, 1);

    /////////////////////////////
    // 3. add your codes below...

    // add a label shows "Hello World"
    // create and initialize a label
    
    auto label = LabelTTF::create("Chain", "Arial", 24);
    
    // position the label on the center of the screen
    label->setPosition(Point(origin.x + visibleSize.width/2,
                            origin.y + visibleSize.height - label->getContentSize().height));

    // add the label as a child to this layer
    this->addChild(label, 1);
    
    
    setTouchEnabled(true);
    setTouchMode(Touch::DispatchMode::ONE_BY_ONE);
    
    return true;
}


void HelloWorld::menuCloseCallback(Object* pSender)
{
    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}

bool HelloWorld::onTouchBegan(Touch* touch, cocos2d::Event* event){
    log("onTouchBegan");
    Point loc;
    if(touch) {
        loc = touch->getLocation();
        this->field->onTouchBegan(loc - FIELD_START_AT);
        log("x: %f, y: %f", loc.x, loc.y);
        return true;
    }
    return false;
}

void HelloWorld::onTouchMoved(Touch* touch, cocos2d::Event* event){
    log("onTouchMoved");
    Point loc;
    if(touch) {
        loc = touch->getLocation();
        //this->field->onTouchBegan(loc - FIELD_START_AT);
        log("move x: %f, y: %f", loc.x, loc.y);
    }
}

void HelloWorld::onTouchEnded(Touch* touch, cocos2d::Event* event){
    log("onTouchEnded");
    Point loc;
    if(touch) {
        loc = touch->getLocation();
        //this->field->onTouchBegan(touch);
        log("move x: %f, y: %f", loc.x, loc.y);
    }
}

