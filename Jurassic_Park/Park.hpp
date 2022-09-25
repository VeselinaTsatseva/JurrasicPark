//
//  Park.hpp
//  Jurassic_Park
//
//  Created by Veselina Tsatseva on 7.05.20.
//  Copyright © 2020 Veselina Tsatseva. All rights reserved.
//

#ifndef Park_hpp
#define Park_hpp

#include <stdio.h>
#include "Cage.hpp"

class Park
{
public:
    Park();
    void addCage(Cage cage);
    void addAnimal(Dinosaur dino);
    void printPark();
    void removeAnimal(Dinosaur dino);
    
private:
    vector<Cage> cages;  // вектор от клетки в парка
    int minGrass;      // мин. к-во трева
    int minMeat;       // мин. к-во месо
    int minFish;       // мин. к-во риба
    int minWorkers;    // мин. брой работници
    
};

#endif /* Park_hpp */
