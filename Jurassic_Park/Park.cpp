//
//  Park.cpp
//  Jurassic_Park
//
//  Created by Veselina Tsatseva on 7.05.20.
//  Copyright © 2020 Veselina Tsatseva. All rights reserved.
//

#include "Park.hpp"

Park::Park() {}

void Park::addCage(Cage cage)
{
    cages.push_back(cage);
    minGrass += cage.getGrass();
    minFish += cage.getFish();
    minMeat += cage.getMeat();
}

void Park::addAnimal(Dinosaur dino)
{
    bool flag = false;
    for (int i=0; i < cages.size(); i++)
    {
        if (cages.at(i).addAnimalBool(dino))  // ако е вярно се добавя животното
        {
            flag = true;
            break;
        }
    }
    if (!flag) cout <<"Dinosaur "<< dino.getName()<<" can't be added!"<<endl;
}

void Park::removeAnimal(Dinosaur dino)
{
    for (int i=0; i < cages.size(); i++)
    {
        if (cages.at(i).removeAnimalBool(dino))
        {
            cout <<"Dinosaur "<< dino.getName()<<" was removed!"<<endl;
        }
    }
}

void Park::printPark()
{
    cout<<"---Jurassic Park---"<<endl;
    for (int i=0; i < cages.size(); i++)
       {
           cages.at(i).printCage();
           cout<<endl;
       }
}


