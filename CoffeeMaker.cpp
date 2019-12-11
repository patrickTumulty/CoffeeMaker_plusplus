//
//  CoffeeMaker.cpp
//  CoffeeMaker
//
//  Created by Patrick Tumulty on 12/4/19.
//  Copyright © 2019 Patrick Tumulty. All rights reserved.
//

#include "CoffeeMaker.hpp"

CoffeeMaker::CoffeeMaker()
{
    hopper = new Hopper();
    reservoir = new Reservoir();
    heatingElement = new HeatingElement();
}

CoffeeMaker::~CoffeeMaker()
{
    delete hopper;
    delete reservoir;
    delete heatingElement;
}

void CoffeeMaker::combineIngredients(int hotWater, int groundCoffee)
{
    int groundsPerCup = groundCoffee / 10;
    int numCupsPossible = 0;
    if (hotWater == groundsPerCup)
    {
        numCupsPossible = groundsPerCup;
    }
    else if (hotWater > groundsPerCup)
    {
        numCupsPossible = groundsPerCup;
    }
    else if (hotWater < groundsPerCup)
    {
        numCupsPossible = hotWater;
    }
  
    if (numCupsPossible == 0)
    {
        std::cout<<"Wow, you really messed this one up. There isn't enough\ningredients here to make even one cup of coffee."<<std::endl;
        std::cout<<"YOU DON'T DESERVE COFFEE."<<std::endl;
    }
    else if (hotWater == groundsPerCup)
    {
        if (targetCupsOfCoffee == numCupsPossible)
        {
            std::cout<<"You've made ";
            std::cout<<targetCupsOfCoffee;
            std::cout<<" cups of coffee."<<std::endl;
        }
        else if (targetCupsOfCoffee < numCupsPossible)
        {
            std::cout<<"Here's your ";
            std::cout<<targetCupsOfCoffee;
            std::cout<<" cups of coffee but... \nyou made enough for ";
            std::cout<<groundsPerCup;
            std::cout<<" cups."<<std::endl;
        }
        else if (targetCupsOfCoffee > numCupsPossible)
        {
            std::cout<<"Well... you wanted ";
            std::cout<<targetCupsOfCoffee;
            std::cout<<" cups of coffee but you only added \nenough water and grounds for ";
            std::cout<<numCupsPossible;
            std::cout<<" not sure what you are \nexpecting here..."<<std::endl;
            
        }
    }
    else if (targetCupsOfCoffee < numCupsPossible)
    {
        std::cout<<"Here's your ";
        std::cout<<targetCupsOfCoffee;
        std::cout<<" cups of coffee but... \nyou made enough for ";
        std::cout<<groundsPerCup;
        std::cout<<" cups."<<std::endl;
        
        std::cout<<"You waisted ";
        if (hotWater > groundsPerCup)
        {
            std::cout<<hotWater - groundsPerCup;
            std::cout<<" cups of water.\n\nTry harder next time.\n"<<std::endl;
        }
        else if (hotWater < groundsPerCup)
        {
            std::cout<<(groundsPerCup - hotWater) * 10;
            std::cout<<"oz of coffee grounds.\n\nShame on you.\n"<<std::endl;
        }
    }
    else if (targetCupsOfCoffee > numCupsPossible)
    {
        std::cout<<"Well... you wanted ";
        std::cout<<targetCupsOfCoffee;
        std::cout<<" cups of coffee but you only added \nenough water and grounds for ";
        std::cout<<numCupsPossible;
        std::cout<<" not sure what you are \nexpecting here..."<<std::endl;
        
        std::cout<<"You waisted ";
        if (hotWater > groundsPerCup)
        {
            std::cout<<hotWater - groundsPerCup;
            std::cout<<" cups of water.\n\nTry harder next time."<<std::endl;
        }
        else if (hotWater < groundsPerCup)
        {
            std::cout<<(groundsPerCup - hotWater) * 10;
            std::cout<<"oz of coffee grounds.\n\nYou basic math skills are astounding\n"<<std::endl;
        }
    }
    else if (numCupsPossible == targetCupsOfCoffee)
    {
        std::cout<<"You've made ";
        std::cout<<targetCupsOfCoffee;
        std::cout<<" cups of coffee."<<std::endl;
        
        std::cout<<"You waisted ";
        if (hotWater > groundsPerCup)
        {
            std::cout<<hotWater - groundsPerCup;
            std::cout<<" cups of water.\n\nTry harder next time."<<std::endl;
        }
        else if (hotWater < groundsPerCup)
        {
            std::cout<<(groundsPerCup - hotWater) * 10;
            std::cout<<"oz of coffee grounds.\n\nShame on you."<<std::endl;
        }
    }
    
}

void CoffeeMaker::makeCoffee()
{
    int userInput;
    std::cout<<"How many cups of sweet delicious\ncoffee do you want?"<<std::endl;
    std::cin>> userInput;
    targetCupsOfCoffee = userInput;
    std::cout<<"Enter Number of Beans"<<std::endl;
    std::cin>> userInput;
    hopper->addBeans(userInput);
    std::cout<<"Enter Cups of Water"<<std::endl;
    std::cin>> userInput;
    reservoir->addWater(userInput);
    heatingElement->heatWater(reservoir->getWater());
    hopper->grindBeans();
    combineIngredients(heatingElement->getHotWater(), hopper->getGrounds());
    
}
