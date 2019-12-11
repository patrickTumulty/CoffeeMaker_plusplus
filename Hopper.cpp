//
//  Hopper.cpp
//  CoffeeMaker
//
//  Created by Patrick Tumulty on 12/4/19.
//  Copyright © 2019 Patrick Tumulty. All rights reserved.
//

#include "Hopper.hpp"

Hopper::Hopper()
{
    
}

Hopper::~Hopper()
{
    
}

void Hopper::addBeans(int beans)
{
    mWholeBeans = beans;
}

void Hopper::grindBeans()
{
    std::cout<<"Grinding Beans"<<std::endl;
    mGroundBreans = ((int)mWholeBeans / 45) * 10;
}

int Hopper::getGrounds()
{
    return mGroundBreans;
}
