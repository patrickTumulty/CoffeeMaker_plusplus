//
//  main.cpp
//  CoffeeMaker
//
//  Created by Patrick Tumulty on 12/4/19.
//  Copyright © 2019 Patrick Tumulty. All rights reserved.
//

#include <iostream>
#include "CoffeeMaker.hpp"

int main(int argc, const char * argv[]) {
    
    CoffeeMaker * coffeeMaker = new CoffeeMaker();
    coffeeMaker->makeCoffee();
    delete coffeeMaker;
    
    return 0;
}
