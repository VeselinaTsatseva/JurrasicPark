//
//  Dinosaur.hpp
//  Jurassic_Park
//
//  Created by Veselina Tsatseva on 7.05.20.
//  Copyright © 2020 Veselina Tsatseva. All rights reserved.
//

#ifndef Dinosaur_hpp
#define Dinosaur_hpp

#include <stdio.h>

#include <iostream>
using namespace std;
#include <string>

class Dinosaur
{
public:
    Dinosaur ();
    Dinosaur (string name, string gender, string era, string dinClass, string kind, string food, int quantityFood,
              int quantityWorkers, string climate);
    Dinosaur& operator= (const Dinosaur& other);
    Dinosaur (const Dinosaur& other); 
    
    void printDinosaur();
    
    void setName(string name);
    void setGender(string gender);
    void setEra(string era);
    void setDinClass(string dinClass);
    void setKind(string kind);
    void setFood(string food);
    void setQuantityFood(int quantityFood);
    void setQuantityWorkers(int quantityWorkers);
    void setClimate(string climate);
    
    string getName()const;
    string getGender()const;
    string getEra()const;
    string getDinClass()const;
    string getKind()const;
    string getFood()const;
    int getQuantityFood()const;
    int getQuantityWorkers()const;
    string getClimate()const;
    
private:
    string name;   //име
    string gender;  //пол
    string era;     //ера
    string dinClass;   //разред
    string kind;   //вид
    string food;   //тип храна
    int quantityFood;   //к-во нужна храна
    int quantityWorkers;  //к-во нужни работници
    string climate;     //климат, в който живее
};


#endif /* Dinosaur_hpp */
