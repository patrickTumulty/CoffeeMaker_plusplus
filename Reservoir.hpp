//
//  Reservoir.hpp
//  CoffeeMaker
//
//  Created by Patrick Tumulty on 12/4/19.
//  Copyright © 2019 Patrick Tumulty. All rights reserved.
//

#ifndef Reservoir_hpp
#define Reservoir_hpp

#include <stdio.h>

class Reservoir {
public:
    Reservoir();
    ~Reservoir();
    
    void addWater(int water);
    int getWater();
private:
    int mWater;
    
};

#endif /* Reservoir_hpp */
