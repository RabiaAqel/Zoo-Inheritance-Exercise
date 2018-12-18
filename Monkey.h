//
// Created by Rabia on 29/10/2018.
//

#ifndef ZOO_MONKEY_H
#define ZOO_MONKEY_H

#include "Mammal.h"


class Monkey : public Mammal{

public:

    Monkey(const std::string& name);
    ~Monkey() {};

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


inline Monkey::Monkey (const std::string &name) :
        Mammal(name, LIFE_EXPECTANCY, SPECIES_STR, CONTINENTS,
               SPEED, TYPES_OF_FOOD, PREGNANCY_DURATION, LITTER)
        {}


inline void Monkey::print()
{
        std::cout << *this;
}


inline std::vector<std::string> Monkey::initContinents()
{
        std::vector<std::string> continents;

        continents.push_back("Banana");
        continents.push_back("Sunflower Seeds");
        continents.push_back("Pretzels");

        return continents;
}


inline std::vector<std::string> Monkey::initFood()
{
        std::vector<std::string> food;

        food.push_back("South Asia");
        food.push_back("South America");

        return food;
}


const std::string Monkey::SPECIES_STR = "Monkey";
const unsigned char Monkey::LIFE_EXPECTANCY = 25;
const std::vector<std::string> Monkey::CONTINENTS = initContinents ();
const std::vector<std::string> Monkey::TYPES_OF_FOOD = initFood ();
const float Monkey::SPEED = 55;
const unsigned int Monkey::PREGNANCY_DURATION = 19;
const unsigned int Monkey::LITTER = 5;


#endif //ZOO_MONKEY_H
