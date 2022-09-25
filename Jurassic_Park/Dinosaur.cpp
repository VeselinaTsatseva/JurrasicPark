//
//  Dinosaur.cpp
//  Jurassic_Park
//
//  Created by Veselina Tsatseva on 7.05.20.
//  Copyright © 2020 Veselina Tsatseva. All rights reserved.
//

#include "Dinosaur.hpp"

Dinosaur::Dinosaur ()
{
    setName("Default");
    setGender("Default");
    setEra("Default");
    setDinClass("Default");
    setKind("Default");
    setFood("Default");
    setQuantityFood(0);
    setQuantityWorkers(0);
    setClimate("Default");
}

Dinosaur::Dinosaur (string name, string gender, string era, string dinClass, string kind, string food, int quantityFood,
                    int quantityWorkers, string climate)
{
    setName(name);
    setGender(gender);
    setEra(era);
    setDinClass(dinClass);
    setKind(kind);
    setFood(food);
    setQuantityFood(quantityFood);
    setQuantityWorkers(quantityWorkers);
    setClimate(climate);
}

 Dinosaur& Dinosaur::operator= (const Dinosaur& other)
{
       if(this != &other)
       {
        setName(name);
        setGender(gender);
        setEra(era);
        setDinClass(dinClass);
        setKind(kind);
        setFood(food);
        setQuantityFood(quantityFood);
        setQuantityWorkers(quantityWorkers);
       }
       return *this;
   }

Dinosaur::Dinosaur (const Dinosaur& other)
{
    setName(other.getName());
    setGender(other.getGender());
    setEra(other.getEra());
    setDinClass(other.getDinClass());
    setKind(other.getKind());
    setFood(other.getFood());
    setQuantityFood(other.getQuantityFood());
    setQuantityWorkers(other.getQuantityWorkers());
    setClimate(other.getClimate());
}

void Dinosaur::printDinosaur()
{
    cout<<"  Dinosaur`s name is "<< name <<endl;
    cout<<"  "<< name <<"`s gender is "<< gender <<endl;
    cout<<"  "<< name <<"`s era is "<< era <<endl;
    cout<<"  "<< name <<"`s class is "<< dinClass <<endl;
    cout<<"  "<< name <<"`s kind is "<< kind <<endl;
    cout<<"  "<< name <<" lives in/on "<<climate<<endl;
    cout<<"  "<< name <<" eats "<< food <<" and needs "<< quantityFood <<"kg of it."<<endl;
    cout<<"  "<< name <<" needs "<< quantityWorkers <<" worker(s) to take care of him."<<endl;
}

void Dinosaur::setName(string name)
{
    this-> name = name;
}
void Dinosaur::setGender(string gender)
{
    this-> gender = gender;
}
void Dinosaur::setEra(string era)
{
    this-> era = era;
}
void Dinosaur::setDinClass(string dinClass)
{
    this-> dinClass = dinClass;
}
void Dinosaur::setKind(string kind)
{
    this-> kind = kind;
}
void Dinosaur::setFood(string food)
{
    this-> food = food;
}
void Dinosaur::setQuantityFood(int quantityFood)
{
    this-> quantityFood = quantityFood;
}
void Dinosaur::setQuantityWorkers(int quantityWorkers)
{
    this-> quantityWorkers = quantityWorkers;
}
void Dinosaur::setClimate(string climate)
{
    this->climate = climate;
}


 string Dinosaur::getName()const
{
    return name;
}
  string Dinosaur::getGender()const
{
    return gender;
}
  string Dinosaur::getEra()const
{
    return era;
}
  string Dinosaur::getDinClass()const
{
    return dinClass;
}
  string Dinosaur::getKind()const
{
    return kind;
}
  string Dinosaur::getFood()const
{
    return food;
}
  int Dinosaur::getQuantityFood()const
{
      return quantityFood;
}
  int Dinosaur::getQuantityWorkers()const
{
    return quantityWorkers;
}
  string Dinosaur::getClimate()const
{
    return climate;
}

