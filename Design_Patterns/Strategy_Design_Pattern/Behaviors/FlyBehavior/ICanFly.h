//
//  ICanFly.h
//  Design_Patterns
//
//  Created by Harold Serrano on 8/1/14.
//  Copyright (c) 2014 Roldie.com. All rights reserved.
//

#ifndef __Design_Patterns__ICanFly__
#define __Design_Patterns__ICanFly__

#include <iostream>
#include "FlyBehavior.h"    //include your interface header

using namespace std;

class ICanFly:public FlyBehavior{ //notice how ICanFly is a subclass of the interface FlyBehavior
    
private:
    
public:
    
    ICanFly(){};
    ~ICanFly(){};
    
    void fly(); //fly() is one of the method which needs to be implemented by ICanFly since ICanFly has agreed to implement all of FlyBehavior methods.
};

#endif /* defined(__Design_Patterns__ICanFly__) */
