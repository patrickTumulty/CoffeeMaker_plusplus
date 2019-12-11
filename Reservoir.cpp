//
//  Reservoir.cpp
//  CoffeeMaker
//
//  Created by Patrick Tumulty on 12/4/19.
//  Copyright © 2019 Patrick Tumulty. All rights reserved.
//

#include "Reservoir.hpp"


Reservoir::Reservoir()
{
    
}

Reservoir::~Reservoir()
{
    
}

void Reservoir::addWater(int water)
{
    mWater = water;
}

int Reservoir::getWater()
{
    return mWater;
}


