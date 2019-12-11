//
//  HeatingElement.cpp
//  CoffeeMaker
//
//  Created by Patrick Tumulty on 12/4/19.
//  Copyright © 2019 Patrick Tumulty. All rights reserved.
//

#include "HeatingElement.hpp"

#include <iostream>
#include <unistd.h>

HeatingElement::HeatingElement()
{
    
}

HeatingElement::~HeatingElement()
{
    
}


void HeatingElement::heatWater(int water)
{
    mRoomTempWater = water;
    float time = 0.01 * 1000000;
    int temp = 75;
 
    for (int i = 0; i < 12; i++)
    {
        if (i == 11)
        {
            std::cout<<"Done Heating  ~[ ";
            std::cout<<temp + (i * 10);
            std::cout<<" F ]~"<<std::endl;
        }
        else
        {
            std::cout<<"Heating Water ~[ ";
            std::cout<<temp + (i * 10);
            std::cout<<" F ]~"<<std::endl;
        }
        usleep(time);
    }
    mHotWater = mRoomTempWater;
    
}

int HeatingElement::getHotWater()
{
    return mHotWater;
}
