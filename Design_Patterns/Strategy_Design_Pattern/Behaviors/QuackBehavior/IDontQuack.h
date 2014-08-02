//
//  IDontQuack.h
//  Design_Patterns
//
//  Created by Harold Serrano on 8/1/14.
//  Copyright (c) 2014 Roldie.com. All rights reserved.
//

#ifndef __Design_Patterns__IDontQuack__
#define __Design_Patterns__IDontQuack__

#include <iostream>
#include "QuackBehavior.h"

using namespace std;

class IDontQuack:public QuackBehavior{
    
private:
    
public:
    IDontQuack(){};
    ~IDontQuack(){};
    
    void quack();
};

#endif /* defined(__Design_Patterns__IDontQuack__) */
