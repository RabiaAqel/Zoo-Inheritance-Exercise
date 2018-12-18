//
// Created by Rabia on 29/10/2018.
//

#ifndef ZOO_GOOSE_H
#define ZOO_GOOSE_H

#include "Bird.h"


class Goose : public Bird{

public:

    Goose(const std::string& name);
    ~Goose() {};

    void print();

private:

    static std::vector<std::string> initContinents();
    static std::vector<std::string> initFood();

    static const std::string SPECIES_STR;
    static const unsigned char LIFE_EXPECTANCY;
    static const std::vector<std::string> CONTINENTS;
    static const std::vector<std::string> TYPES_OF_FOOD;
    static const float SPEED;
    static const unsigned int TYPICAL_HEIGHT;
    static const unsigned int WING_SPAN;

};


inline Goose::Goose(const std::string& name) :
        Bird(name, LIFE_EXPECTANCY, SPECIES_STR,
                CONTINENTS, SPEED, TYPES_OF_FOOD,
                TYPICAL_HEIGHT, WING_SPAN)
{}


inline void Goose::print()
{
    std::cout << *this;
}


inline std::vector<std::string> Goose::initContinents()
{
    std::vector<std::string> continents;

    continents.push_back("North America");
    continents.push_back("East Asia");

    return continents;
}


inline std::vector<std::string> Goose::initFood()
{
    std::vector<std::string> food;

    food.push_back("Fish");
    food.push_back("Apples");
    food.push_back("Pasta");
    food.push_back("Shrimp");

    return food;
}


const std::string Goose::SPECIES_STR = "Goose";
const unsigned char Goose::LIFE_EXPECTANCY = 24;
const std::vector<std::string> Goose::CONTINENTS = initContinents ();
const std::vector<std::string> Goose::TYPES_OF_FOOD = initFood ();
const float Goose::SPEED = 177;
const unsigned int Goose::TYPICAL_HEIGHT = 1600;
const unsigned int Goose::WING_SPAN = 5;


#endif //ZOO_GOOSE_H
