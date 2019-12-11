//
//  HeatingElement.hpp
//  CoffeeMaker
//
//  Created by Patrick Tumulty on 12/4/19.
//  Copyright © 2019 Patrick Tumulty. All rights reserved.
//

#ifndef HeatingElement_hpp
#define HeatingElement_hpp

#include <stdio.h>

class HeatingElement
{
public:
    HeatingElement();
    ~HeatingElement();
    
    void heatWater(int water);
    int getHotWater();
private:
    int mRoomTempWater;
    int mHotWater;
    
};

#endif /* HeatingElement_hpp */
