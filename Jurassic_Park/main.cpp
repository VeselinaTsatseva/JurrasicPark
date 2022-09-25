//
//  main.cpp
//  Jurassic_Park
//
//  Created by Veselina Tsatseva on 7.05.20.
//  Copyright © 2020 Veselina Tsatseva. All rights reserved.
//

#include <iostream>
#include "Park.hpp"

int main()
{
    Park jurassicPark;
    vector<Cage> cages;
    vector<Dinosaur> dinos;

    cages.push_back(Cage ("Small", "water"));
    cages.push_back(Cage ("Medium","water"));
    cages.push_back(Cage ("Small", "air"));
    cages.push_back(Cage ("Medium","air"));
    cages.push_back(Cage ("Large", "air"));
    cages.push_back(Cage ("Small", "earth"));
    cages.push_back(Cage ("Large", "earth"));
    
    dinos.push_back( Dinosaur ("T-Rex",  "man",   "Trias", "aqua",       "Tylosaurus",   "fish",  7, 3, "water"));
    dinos.push_back( Dinosaur ("Jenny",  "woman", "Trias", "aqua",       "Tylosaurus",   "fish",  5, 3, "water"));
    dinos.push_back( Dinosaur ("Jasmine","woman", "Trias", "aqua",       "Henodus",      "fish",  4, 2, "earth"));
    dinos.push_back( Dinosaur ("Rayan",  "man",   "Trias", "aqua",       "Henodus",      "fish",  3, 2, "water"));
    dinos.push_back( Dinosaur ("Tracy",  "woman", "Kreda", "flying",     "Allosaurus",   "meat",  6, 3, "air"));
    dinos.push_back( Dinosaur ("Kate",   "woman", "Kreda", "carnivorous","Plesiosaurus", "meat",  8, 4, "air"));
    dinos.push_back( Dinosaur ("Lexi",   "woman", "Kreda", "carnivorous","Plesiosaurus", "meat",  9, 4, "air"));
    dinos.push_back( Dinosaur ("Tori",   "woman", "Kreda", "flying",     "Allosaurus",   "fish",  4, 3, "air"));
    dinos.push_back( Dinosaur ("Dino",   "man",   "Jura",  "grass-fed",  "Stegosaurus",  "grass", 2, 1, "earth"));
    dinos.push_back( Dinosaur ("Blue",   "man",   "Jura",  "grass-fed",  "Stegosaurus",  "grass", 4, 1, "earth"));
    dinos.push_back( Dinosaur ("Charlie","man",   "Jura",  "grass-fed",  "Brontosaurus", "grass", 4, 1, "earth"));
    dinos.push_back( Dinosaur ("Troy",   "man",   "Jura",  "grass-fed",  "Stegosaurus",  "grass", 1, 1, "earth"));
    dinos.push_back( Dinosaur ("Gordon", "man",   "Jura",  "carnivorous","Brontosaurus", "grass", 3, 1, "earth"));
    
    for (int i=0; i < cages.size(); i++)
    {
        jurassicPark.addCage(cages.at(i));
    }
    
    for (int i=0; i < dinos.size(); i++)
    {
        jurassicPark.addAnimal(dinos.at(i));
    }
    
    jurassicPark.removeAnimal(dinos.at(2));
   
    jurassicPark.printPark();
 
    return 0;
}
