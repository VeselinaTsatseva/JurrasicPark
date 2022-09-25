//
//  Cage.hpp
//  Jurassic_Park
//
//  Created by Veselina Tsatseva on 7.05.20.
//  Copyright © 2020 Veselina Tsatseva. All rights reserved.
//

#ifndef Cage_hpp
#define Cage_hpp

#include <stdio.h>
#include "Dinosaur.hpp"
#include <vector>

class Cage
{
public:
    Cage(string type, string climate);
    bool addAnimalBool (Dinosaur dino);
    bool removeAnimalBool(Dinosaur dino);
    void printCage();
    
    int getMeat()const;
    int getFish()const;
    int getGrass()const;
    int getWorkers()const;
    
private:
    vector<Dinosaur> dinos; //вектор от динозаври във всяка клетка
    int size = 0;       //начален размер
    string climate;     //климата на клетката
    string type;        // тип на клетката - малка, средна, голяма
    string era;         // ера
    string dinClass;    // разред
    int quantityMeat = 0;   // к-во месо нужно на дин.
    int quantityFish = 0;   // к-во риба нужно на дин.
    int quantityGrass = 0;  // к-во трева нужно на дин.
    int neededWorkers = 0;
};

#endif /* Cage_hpp */
