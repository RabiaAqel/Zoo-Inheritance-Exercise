//
// Created by Rabia on 23/10/2018.
//

#ifndef ZOO_ZOO_H
#define ZOO_ZOO_H

#include "Lion.h"
#include "Dog.h"
#include "Monkey.h"
#include "Shark.h"
#include "ClownFish.h"
#include "Goose.h"
#include "SnowyOwl.h"

#include <iostream>
#include <vector>

class Zoo {

public:

    Zoo();
    ~Zoo();
    void add_animal(Animal* animal);
    void print_animals() const;
    void get_animals();

private:

    void init_zoo();
    std::vector<Animal*> animals;
};


inline Zoo::Zoo ()
{
init_zoo ();


}

inline Zoo::~Zoo()
{

}

inline void Zoo::init_zoo()
{

    add_animal (new Lion("Simba"));
    add_animal (new Lion("Mufasa"));
    add_animal (new Monkey("Rafiki"));
    add_animal (new Goose("Akka"));
    add_animal (new Goose("Morten"));
    add_animal (new SnowyOwl("Hedwig"));
    add_animal (new Dog("Toto"));
    add_animal (new Shark("Jaws"));
    add_animal (new ClownFish("Nemo"));


}

inline void Zoo::add_animal(Animal* animal)
{
    animals.push_back(animal);
}

inline void Zoo::print_animals () const
{
    for( std::vector<Animal*>::const_iterator i = animals.begin(); i != animals.end(); ++i) {
        (*i)->print ();
        std::cout << std::endl;
    }

}
#endif //ZOO_ZOO_H
