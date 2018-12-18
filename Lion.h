//
// Created by Rabia on 29/10/2018.
//

#ifndef ZOO_LION_H
#define ZOO_LION_H

#include "Mammal.h"


class Lion : public Mammal
{

public:

    Lion(const std::string& name);
    ~Lion() {};

    void print();

private:

    static std::vector<std::string> initContinents();
    static std::vector<std::string> initFood();

    static const std::string SPECIES_STR;
    static const unsigned char LIFE_EXPECTANCY;
    static const std::vector<std::string> CONTINENTS;
    static const std::vector<std::string> TYPES_OF_FOOD;
    static const float SPEED;
    static const unsigned int PREGNANCY_DURATION;
    static const unsigned int LITTER;

};


inline Lion::Lion(const std::string &name) :
        Mammal(name, LIFE_EXPECTANCY, SPECIES_STR, CONTINENTS,
               SPEED, TYPES_OF_FOOD, PREGNANCY_DURATION, LITTER)
        {}



inline void Lion::print()
{
        std::cout << *this;
}


inline std::vector<std::string> Lion::initContinents ()
{
        std::vector<std::string> continents;

        continents.push_back("Africa");

        return continents;
}


inline std::vector<std::string> Lion::initFood ()
{
        std::vector<std::string> food;

        food.push_back("Deer");
        food.push_back("Giraffe");
        food.push_back("Humans");

        return food;
}


const std::string Lion::SPECIES_STR = "Lion";
const unsigned char Lion::LIFE_EXPECTANCY = 14;
const std::vector<std::string> Lion::CONTINENTS = initContinents ();
const std::vector<std::string> Lion::TYPES_OF_FOOD = initFood ();
const float Lion::SPEED = 80;
const unsigned int Lion::PREGNANCY_DURATION = 9;
const unsigned int Lion::LITTER = 3;


#endif //ZOO_LION_H
