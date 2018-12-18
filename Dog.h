//
// Created by Rabia on 29/10/2018.
//

#ifndef ZOO_DOG_H
#define ZOO_DOG_H

#include "Mammal.h"


class Dog : public Mammal
{

public:

    Dog(const std::string& name);
    ~Dog() {};

    void print();

private:

    static std::vector<std::string> initContinents ();
    static std::vector<std::string> initFood ();

    static const std::string SPECIES_STR;
    static const unsigned char LIFE_EXPECTANCY;
    static const std::vector<std::string> CONTINENTS;
    static const std::vector<std::string> TYPES_OF_FOOD;
    static const float SPEED;
    static const unsigned int PREGNANCY_DURATION;
    static const unsigned int LITTER;
};


inline Dog::Dog(const std::string& name) :
    Mammal(name, LIFE_EXPECTANCY, SPECIES_STR, CONTINENTS,
            SPEED, TYPES_OF_FOOD, PREGNANCY_DURATION, LITTER)
{}


inline void Dog::print()
{
    std::cout << *this;
}


inline std::vector<std::string> Dog::initContinents()
{
    std::vector<std::string> continents;

    continents.push_back("World");

    return continents;
}


inline std::vector<std::string> Dog::initFood()
{
    std::vector<std::string> food;

    food.push_back("Cat");
    food.push_back("Bones");

    return food;
}


const std::string Dog::SPECIES_STR = "Dog";
const unsigned char Dog::LIFE_EXPECTANCY = 13;
const std::vector<std::string> Dog::CONTINENTS = initContinents ();
const std::vector<std::string> Dog::TYPES_OF_FOOD = initFood ();
const float Dog::SPEED = 55;
const unsigned int Dog::PREGNANCY_DURATION = 3;
const unsigned int Dog::LITTER = 6;


#endif //ZOO_DOG_H
