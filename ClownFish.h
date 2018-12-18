//
// Created by Rabia on 29/10/2018.
//

#ifndef ZOO_CLOWNFISH_H
#define ZOO_CLOWNFISH_H

#include "SeaCreature.h"


class ClownFish : public SeaCreature
{

public:

    ClownFish(const std::string& name);
    ~ClownFish() {};

    void print();

private:

    static std::vector<std::string> initContinents();
    static std::vector<std::string> initFood();

    static const std::string SPECIES_STR;
    static const unsigned char LIFE_EXPECTANCY;
    static const std::vector<std::string> CONTINENTS;
    static const std::vector<std::string> TYPES_OF_FOOD;
    static const float SPEED;
    static const unsigned int LOWEST_DEPTH;

};


inline ClownFish::ClownFish(const std::string &name) :
        SeaCreature(name, LIFE_EXPECTANCY, SPECIES_STR,
        CONTINENTS, SPEED, TYPES_OF_FOOD,
        LOWEST_DEPTH)
        {}


inline void ClownFish::print()
{
        std::cout << *this;
}


inline std::vector<std::string> ClownFish::initContinents()
{
    std::vector<std::string> continents;

    continents.push_back("Asia");
    continents.push_back("Middle East");

    return continents;
}


inline std::vector<std::string> ClownFish::initFood()
{
    std::vector<std::string> food;

    food.push_back("Worms");

    return food;
}


const std::string ClownFish::SPECIES_STR = "ClownFish";
const unsigned char ClownFish::LIFE_EXPECTANCY = 5;
const std::vector<std::string> ClownFish::CONTINENTS = initContinents ();
const std::vector<std::string> ClownFish::TYPES_OF_FOOD = initFood ();
const float ClownFish::SPEED = 56;
const unsigned int ClownFish::LOWEST_DEPTH = 250;


#endif //ZOO_CLOWNFISH_H
