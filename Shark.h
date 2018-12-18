//
// Created by Rabia on 29/10/2018.
//

#ifndef ZOO_SHARK_H
#define ZOO_SHARK_H

#include "SeaCreature.h"

class Shark : public SeaCreature{

public:
    Shark(const std::string& name);
    ~Shark () {};

    void print();

private:

    static std::vector<std::string> init_continents();
    static std::vector<std::string> init_food();

    static const std::string SPECIES_STR;
    static const unsigned char LIFE_EXPECTANCY;
    static const std::vector<std::string> CONTINENTS;
    static const std::vector<std::string> TYPES_OF_FOOD;
    static const float SPEED;
    static const unsigned int LOWEST_DEPTH;
};

inline Shark::Shark (const std::string &name) :
        SeaCreature(name, LIFE_EXPECTANCY, SPECIES_STR,
        CONTINENTS, SPEED, TYPES_OF_FOOD,
        LOWEST_DEPTH)
        {}


inline void Shark::print()
{
    std::cout << *this;
}


inline std::vector<std::string> Shark::init_continents ()
{
    std::vector<std::string> continents;

    continents.push_back ("North America");
    continents.push_back ("Antaractica");
    continents.push_back ("Africa");

    return continents;
}


inline std::vector<std::string> Shark::init_food()
{
    std::vector<std::string> food;

    food.push_back ("Meat");
    food.push_back ("Bananas");
    food.push_back ("Chocolate");

    return food;
}


const std::string Shark::SPECIES_STR = "Shark";
const unsigned char Shark::LIFE_EXPECTANCY = 30;
const std::vector<std::string> Shark::CONTINENTS = init_continents();
const std::vector<std::string> Shark::TYPES_OF_FOOD = init_food ();
const float Shark::SPEED = 50;
const unsigned int Shark::LOWEST_DEPTH = 900;



#endif //ZOO_SHARK_H
