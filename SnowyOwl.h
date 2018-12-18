//
// Created by Rabia on 29/10/2018.
//

#ifndef ZOO_SNOWYOWL_H
#define ZOO_SNOWYOWL_H

#include "Bird.h"


class SnowyOwl : public Bird {

public:
    SnowyOwl(const std::string& name);
    ~SnowyOwl () {};

    void print();

private:

    static std::vector<std::string> init_continents();
    static std::vector<std::string> init_food();

    static const std::string SPECIES_STR;
    static const unsigned char LIFE_EXPECTANCY;
    static const std::vector<std::string> CONTINENTS;
    static const std::vector<std::string> TYPES_OF_FOOD;
    static const float SPEED;
    static const unsigned int TYPICAL_HEIGHT;
    static const unsigned int WING_SPAN;

};

inline SnowyOwl::SnowyOwl (const std::string& name) :
        Bird(name, LIFE_EXPECTANCY, SPECIES_STR,
         CONTINENTS, SPEED, TYPES_OF_FOOD,
         TYPICAL_HEIGHT, WING_SPAN)
{
    // init continents
    // init types_of_food
}


inline void SnowyOwl::print()
{
    std::cout << *this;
}


inline std::vector<std::string> SnowyOwl::init_continents ()
{
    std::vector<std::string> continents;

    continents.push_back ("Antaractica");
    continents.push_back ("North Asia");

    return continents;
}


inline std::vector<std::string> SnowyOwl::init_food()
{
    std::vector<std::string> food;

    food.push_back ("Fish");
    food.push_back ("Forest worms");
    food.push_back ("Snow");

    return food;
}

const std::string SnowyOwl::SPECIES_STR = "Snowy Owl";
const unsigned char SnowyOwl::LIFE_EXPECTANCY = 28;
const std::vector<std::string> SnowyOwl::CONTINENTS = init_continents ();
const std::vector<std::string> SnowyOwl::TYPES_OF_FOOD = init_food ();
const float SnowyOwl::SPEED = 80;
const unsigned int SnowyOwl::TYPICAL_HEIGHT = 30;
const unsigned int SnowyOwl::WING_SPAN = 10;


#endif //ZOO_SNOWYOWL_H
