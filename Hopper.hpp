//
//  Hopper.hpp
//  CoffeeMaker
//
//  Created by Patrick Tumulty on 12/4/19.
//  Copyright © 2019 Patrick Tumulty. All rights reserved.
//

#ifndef Hopper_hpp
#define Hopper_hpp

#include <iostream>

class Hopper
{
public:
    Hopper();
    ~Hopper();
    
    void addBeans(int beans);
    void grindBeans();
    int getGrounds();
private:
    int mWholeBeans;
    int mGroundBreans;
    
    
};

#endif /* Hopper_hpp */
