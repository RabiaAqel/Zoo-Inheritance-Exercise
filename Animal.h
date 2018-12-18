//
// Created by Rabia on 23/10/2018.
//

#ifndef ZOO_ANIMAL_H
#define ZOO_ANIMAL_H

#include <string>
#include <vector>
#include "iostream"


// TODO - activate the enums
//enum e_species
//{
//    LION,
//    MONKEY,
//    GOOSE,
//    SNOWY_OWL,
//    DOG,
//    SHARK,
//    CLOWNFISH,
//};
//
//enum e_continent
//{
//    ASIA,
//    AFRICA,
//    NORTH_AMERICA,
//    ANTARCTICA,
//    EUROPE,
//    AUSTRALIA,
//};

class Animal
{

public:

    Animal(const std::string& name,
            unsigned char lifeExpectancy, std::string speciesString,
            std::vector<std::string> continents,
            float speed, std::vector<std::string> typesOfFood);
    virtual ~Animal() {};

    friend std::ostream& operator<<(std::ostream &os, const Animal &t);

    std::string getName() const { return m_name; };
    std::string getSpecies() const { return m_speciesString; };
    unsigned int getLifeExpectancy() const{ return m_lifeExpectancy; };
    float getSpeed() const { return m_speed; };
    virtual void print() = 0;

private:

    const std::string m_name;

    const unsigned char m_lifeExpectancy;
    const std::string m_speciesString;
    const std::vector<std::string> m_continents;
    const float m_speed;
    const std::vector<std::string> m_typesOfFood;

    Animal(const Animal& animal);
    Animal& operator= (const Animal& animal);
    std::string& vectorToString(const std::vector<std::string>& vec) const;

};


inline Animal::Animal (const std::string& name,
        unsigned char lifeExpectancy, std::string speciesString,
        std::vector<std::string> continents,
        float speed, std::vector<std::string> typesOfFood)
        : m_name(name), m_lifeExpectancy(lifeExpectancy),
        m_speciesString(speciesString),
        m_continents(continents), m_speed(speed),
        m_typesOfFood(typesOfFood)
        {}


inline std::ostream& operator<<(std::ostream &os, const Animal &t)
{
    os << "Name: " << t.getName() << std::endl;
    os << "Species: " << t.getSpecies() << std::endl;
    os << "Life Expectancy: " << t.getLifeExpectancy() << std::endl;
    os << "Continents: " << t.vectorToString (t.m_continents) << std::endl;
    os << "Types Of Food: " << t.vectorToString (t.m_typesOfFood) << std::endl;
    os << "Speed: " << t.getSpeed() <<std::endl;
    return os;
}


inline void Animal::print()
{
    std::cout << *this;
}


inline std::string& Animal::
vectorToString(const std::vector<std::string>& vec) const
{

    std::string toString = "";

    for( std::vector<std::string>::const_iterator
    i = vec.begin(); i != vec.end(); ++i)
        toString = toString + *i + ", ";

    return toString;
}



#endif //ZOO_ANIMAL_H
