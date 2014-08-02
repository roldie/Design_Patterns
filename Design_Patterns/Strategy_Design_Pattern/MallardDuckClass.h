//
//  MallardDuckClass.h
//  Design_Patterns
//
//  Created by Harold Serrano on 8/1/14.
//  Copyright (c) 2014 Roldie.com. All rights reserved.
//

#ifndef __Design_Patterns__MallardDuckClass__
#define __Design_Patterns__MallardDuckClass__

#include <iostream>
#include "DuckClass.h"
#include "ICanQuack.h"
#include "ICanFly.h"

using namespace std;

//MallardDuck is a subclass of Duck

class MallardDuckClass:public DuckClass{
    
private:
    
public:
    
    MallardDuckClass(){
    
        //In the construct, I'm creating a new instance of ICanQuack class and setting it to
        //be pointed by quackBehavior. Same thing for the flyBehavior.
        //This means that if I call performFly() or performQuack(), the ICanFly() and
        //ICanQuack() methods (i.e. quack() and fly()) will be executed.
        //will be called.
        quackBehavior=new ICanQuack();
        flyBehavior=new ICanFly();
        
    };
    
    ~MallardDuckClass(){};
    
};

#endif /* defined(__Design_Patterns__MallardDuckClass__) */
