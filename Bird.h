//
// Created by Rabia on 23/10/2018.
//

#ifndef ZOO_BIRD_H
#define ZOO_BIRD_H

#include "Animal.h"

class Bird : public Animal
{
public:
    Bird(const std::string& name,
         unsigned char lifeExpectancy, std::string speciesString,
         std::vector<std::string> continents,
         float speed, std::vector<std::string> typesOfFood,
            unsigned int typicalHeight, unsigned char wingSpan);
    ~Bird();

    friend std::ostream& operator<< (std::ostream &os, const Bird &bird);

    unsigned int getTypicalHeight() const;
    unsigned int getWingSpan() const;
    virtual void print() = 0;

private:
    unsigned int m_typicalHeight;
    unsigned char m_wingSpan;
};

inline Bird::Bird(const std::string& name,
      unsigned char lifeExpectancy, std::string speciesString,
      std::vector<std::string> continents,
      float speed, std::vector<std::string> typesOfFood,
      unsigned int typicalHeight, unsigned char wingSpan)
        : Animal (name, lifeExpectancy, speciesString,
                continents, speed, typesOfFood),
        m_typicalHeight(typicalHeight),
          m_wingSpan(wingSpan) {}

inline Bird::~Bird()
{}

inline std::ostream& operator<<(std::ostream &os, const Bird &bird)
{
    os << static_cast<const Animal &> (bird);
    os << "Typical Height: " << bird.getTypicalHeight() << std::endl;
    os << "Wing Span: " << bird.getWingSpan() << std::endl;
    return os;
}

inline unsigned int Bird::getTypicalHeight() const
{
    return m_typicalHeight;
}

inline unsigned int Bird::getWingSpan() const
{
    return m_wingSpan;
}

inline void Bird::print()
{
    std::cout << *this;
}


#endif //ZOO_BIRD_H
