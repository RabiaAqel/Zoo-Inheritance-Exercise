//
// Created by Rabia on 23/10/2018.
//

#ifndef ZOO_FISH_H
#define ZOO_FISH_H

#include "Animal.h"


class SeaCreature : public Animal
{

public:

    SeaCreature(const std::string& name,
                unsigned char lifeExpectancy, std::string speciesString,
                std::vector<std::string> continents,
                float speed, std::vector<std::string> typesOfFood,
                unsigned int lowestDepth);
    ~SeaCreature() {};

    friend std::ostream& operator<<(std::ostream &os, const SeaCreature &t);

    unsigned int getLowestDepth() const;
    virtual void print() = 0;

private:

    unsigned int m_lowestDepth;
};


inline SeaCreature::SeaCreature (const std::string& name,
        unsigned char lifeExpectancy, std::string speciesString,
        std::vector<std::string> continents,
        float speed, std::vector<std::string> typesOfFood,
        unsigned int lowestDepth)
        : Animal (name, lifeExpectancy, speciesString,
                  continents, speed, typesOfFood),
                  m_lowestDepth(lowestDepth)
{}


inline std::ostream& operator<<(std::ostream &os, const SeaCreature &t)
{
    os << (Animal&)(t);
    os << "Lowest Depth: " << t.getLowestDepth() << std::endl;
    return os;
}


inline unsigned int SeaCreature::getLowestDepth() const
{
    return m_lowestDepth;
}


inline void SeaCreature::print()
{
    std::cout << *this;
}


#endif //ZOO_FISH_H
