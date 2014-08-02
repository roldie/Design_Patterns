//
//  ICanQuack.h
//  Design_Patterns
//
//  Created by Harold Serrano on 8/1/14.
//  Copyright (c) 2014 Roldie.com. All rights reserved.
//

#ifndef __Design_Patterns__ICanQuack__
#define __Design_Patterns__ICanQuack__

#include <iostream>
#include "QuackBehavior.h"

using namespace std;
class ICanQuack:public QuackBehavior{
    
private:
    
    
public:
    
    ICanQuack(){};
    ~ICanQuack(){};
    
    void quack();
};

#endif /* defined(__Design_Patterns__ICanQuack__) */
