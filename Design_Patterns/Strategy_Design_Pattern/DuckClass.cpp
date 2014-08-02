//
//  DuckClass.cpp
//  Design_Patterns
//
//  Created by Harold Serrano on 8/1/14.
//  Copyright (c) 2014 Roldie.com. All rights reserved.
//

#include "DuckClass.h"


void DuckClass::performQuack(){
    
    quackBehavior->quack(); //QuackBehavior quack() method gets called. It prints if the duck can quack or not.
    
}

void DuckClass::performFly(){
    
    flyBehavior->fly(); //FlyBehavior fly() method gets called. It prints if the duck can fly or not.
    
}

void DuckClass::setFlyBehavior(FlyBehavior *uFlyBehavior){
    
    flyBehavior=uFlyBehavior; //set the fly behavior
}

void DuckClass::setQuackBehavior(QuackBehavior *uQuackBehavior){
    
    quackBehavior=uQuackBehavior; //sets the quack behavior
}