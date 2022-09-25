//
//  Cage.cpp
//  Jurassic_Park
//
//  Created by Veselina Tsatseva on 7.05.20.
//  Copyright © 2020 Veselina Tsatseva. All rights reserved.
//

#include "Cage.hpp"

Cage::Cage(string type, string climate)
{
    this->type = type;
    this->climate = climate;
    
    if(type == "Small")
    {
        size = 1;
    }
    if(type == "Medium")
    {
        size = 3;
    }
    if(type == "Large")
    {
        size = 10;
    }
}

bool Cage::addAnimalBool(Dinosaur dino)
{
    if (dinos.empty())       //проверява дали клетката е празна
    {
        era = dino.getEra();           // задава ерата и разреда на динозаврите на клетката
        dinClass = dino.getDinClass();
        climate = dino.getClimate();
    }
    else
    {
        if (dinos.size() == size)     // проверява дали има място в клетката
        {
            return 0;
        }
        else if (climate != dino.getClimate() || era != dino.getEra() || dinClass != dino.getDinClass())
        {
            return 0;
        }
    }
    
    if (dino.getFood() == "grass") quantityGrass += dino.getQuantityFood();
    if (dino.getFood() == "fish") quantityFish += dino.getQuantityFood();
    if (dino.getFood() == "meat") quantityMeat += dino.getQuantityFood();
    neededWorkers += dino.getQuantityWorkers();
    
    dinos.push_back(dino);
    return 1;
}

bool Cage::removeAnimalBool(Dinosaur dino)
{
    for (int i=0; i < dinos.size(); i++)
    {
        if (dinos.at(i).getName() == dino.getName())
        {
            if (dinos.at(i).getFood() == "grass") quantityGrass -= dinos.at(i).getQuantityFood();
            if (dinos.at(i).getFood() == "fish") quantityFish -= dinos.at(i).getQuantityFood();
            if (dinos.at(i).getFood() == "meat") quantityMeat -= dinos.at(i).getQuantityFood();
            neededWorkers -= dino.getQuantityWorkers();
            
            swap(dinos.at(i), dinos.at(dinos.size() - 1));
            dinos.pop_back();
            return 1;
        }
    }
    return 0;
}

void Cage::printCage()       
{
    cout<< type <<" cage "<< era <<" with "<< climate <<" climate : "<<endl;
    for (int i=0; i < dinos.size(); i++)
    {
        dinos.at(i).printDinosaur();
        cout<<endl;
    }
    cout<<"Food needed for this cage : "<< quantityFish + quantityMeat + quantityGrass <<"kg.";
    cout<<endl;
    cout<<"Workers needed for this cage : "<< neededWorkers <<endl;
}

int Cage::getMeat()const
{
    return quantityMeat;
}
int Cage::getFish()const
{
    return quantityFish;
}
int Cage::getGrass()const
{
    return quantityGrass;
}

int Cage::getWorkers()const
{
    return neededWorkers;
}
