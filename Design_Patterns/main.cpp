//
//  main.cpp
//  Design_Patterns
//
//  Created by Harold Serrano on 7/27/14.
//  Copyright (c) 2014 Roldie.com. All rights reserved.
//

#include <iostream>
#include "DuckClass.h"
#include "MallardDuckClass.h"
#include "QuackBehavior.h"
#include "FlyBehavior.h"
#include "IDontQuack.h"
#include "IDontFly.h"

using namespace::std;

int main(int argc, const char * argv[])
{

    //Notice how I code to the interface, not the implementation
    DuckClass *mallard=new MallardDuckClass();  //I create a mallard duck class
    
    mallard->performQuack(); //performQuack prints that the mallard duck does quack
    mallard->performFly(); //performFly prints that the mallard duck does fly
    
    //Now I'm going to create a new behaviors which takes away the quacking and flying from the mallard duck
    
    QuackBehavior *nowICantQuack=new IDontQuack();
    FlyBehavior *nowICantFly=new IDontFly();
    
    mallard->setFlyBehavior(nowICantFly); //I'm going to set the new quack behaviors to the mallard duck
    
    mallard->setQuackBehavior(nowICantQuack);//I'm going to set the new fly behaviors to the mallard duck
    
    mallard->performQuack(); //performQuack prints that the mallard duck does NOT quack
    mallard->performFly(); //performFly prints that the mallard duck does NOT fly
    
}

