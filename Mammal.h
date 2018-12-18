//
// Created by Rabia on 23/10/2018.
//

#ifndef ZOO_MAMMAL_H
#define ZOO_MAMMAL_H

#include "Animal.h"


class Mammal : public Animal
{

public:

    Mammal(const std::string& name,
            unsigned char lifeExpectancy, std::string speciesString,
            std::vector<std::string> continents,
            float speed, std::vector<std::string> typesOfFood,
            unsigned char pregnancyDuration,
            unsigned char litter);
    ~Mammal();

    friend std::ostream& operator<<(std::ostream &os, const Mammal &t);

    unsigned int getPregnancyDuration() const ;
    unsigned int getLitter() const;
    virtual void print() = 0;

private:

    unsigned char m_pregnancyDuration;
    unsigned char m_litter;

    unsigned int getPregnancyDuration();
    unsigned int getLitter();

};


inline Mammal::Mammal(const std::string& name,
                      unsigned char lifeExpectancy, std::string speciesString,
                      std::vector<std::string> continents,
                      float speed, std::vector<std::string> typesOfFood,
                      unsigned char pregnancyDuration,
                      unsigned char litter)
        : Animal (name, lifeExpectancy, speciesString,
                continents, speed, typesOfFood),
          m_pregnancyDuration(pregnancyDuration), m_litter(litter)
{}

inline Mammal::~Mammal() {}


inline std::ostream& operator<<(std::ostream &os, const Mammal &t)
{
    os << (Animal&)t ;
    os << "Pregnancy Duration: " << t.getPregnancyDuration() << std::endl;
    os << "Litter: " << t.getLitter() << std::endl;
    return os;
}


inline unsigned int Mammal::getLitter() const
{
    return m_litter;
}


inline unsigned int Mammal::getPregnancyDuration() const
{
    return m_pregnancyDuration;
}


inline void Mammal::print()
{
    std::cout << *this;
}



#endif //ZOO_MAMMAL_H
