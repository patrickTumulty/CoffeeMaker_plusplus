//
//  CoffeeMaker.hpp
//  CoffeeMaker
//
//  Created by Patrick Tumulty on 12/4/19.
//  Copyright © 2019 Patrick Tumulty. All rights reserved.
//

#ifndef CoffeeMaker_hpp
#define CoffeeMaker_hpp

#include <iostream>
#include "Hopper.hpp"
#include "Reservoir.hpp"
#include "HeatingElement.hpp"

class CoffeeMaker
{
public:
    CoffeeMaker();
    ~CoffeeMaker();
    
    void makeCoffee();
    void combineIngredients(int hotWater, int groundCoffee);
    
private:
    Hopper * hopper;
    Reservoir * reservoir;
    HeatingElement * heatingElement;
    int targetCupsOfCoffee;
    
    
};

#endif /* CoffeeMaker_hpp */
