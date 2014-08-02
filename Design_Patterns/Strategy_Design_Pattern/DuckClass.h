//
//  DuckClass.h
//  Design_Patterns
//
//  Created by Harold Serrano on 8/1/14.
//  Copyright (c) 2014 Roldie.com. All rights reserved.
//

#ifndef __Design_Patterns__DuckClass__
#define __Design_Patterns__DuckClass__

#include <iostream>
#include "FlyBehavior.h"
#include "QuackBehavior.h"

class DuckClass{
    
protected:
    
    FlyBehavior *flyBehavior;   //Both behavior variables are declared as the behavior INTERFACE type
    QuackBehavior *quackBehavior;
    
public:
    
    DuckClass(){};
    ~DuckClass(){};
    
    void performQuack(); //Prints out if the duck can quack or not depending on the behavior set
    void performFly();  //Prints out if the duck can fly or not depending on the behavior set
    
    void setFlyBehavior(FlyBehavior *uFlyBehavior); //sets a fly behavior
    void setQuackBehavior(QuackBehavior *uQuackBehavior); //sets a quack behavior
    
};

#endif /* defined(__Design_Patterns__DuckClass__) */
