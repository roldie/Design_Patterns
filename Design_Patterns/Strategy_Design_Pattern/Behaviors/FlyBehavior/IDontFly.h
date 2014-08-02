//
//  IDontFly.h
//  Design_Patterns
//
//  Created by Harold Serrano on 8/1/14.
//  Copyright (c) 2014 Roldie.com. All rights reserved.
//

#ifndef __Design_Patterns__IDontFly__
#define __Design_Patterns__IDontFly__

#include <iostream>
#include "FlyBehavior.h"

using namespace std;
class IDontFly:public FlyBehavior{
    
private:
    
public:
    IDontFly(){};
    ~IDontFly(){};
    
    void fly();
};

#endif /* defined(__Design_Patterns__IDontFly__) */
