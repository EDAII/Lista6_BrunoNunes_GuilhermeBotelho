//
// Created by bruno on 12/1/19.
//

#ifndef ANIMALWEB_ANIMAL_H
#define ANIMALWEB_ANIMAL_H

#include <string>

using namespace std;

class Animal {

private:
    string name;
    string type_consumer;
    int biomass;

public:

    Animal();
    Animal(string name, string type_consumer, int biomass);
    ~Animal();
    string getName();

    void setName(const string &name);

    string getTypeConsumer();

    void setTypeConsumer(const string &typeConsumer);

    int getBiomass();

    void setBiomass(int biomass);



};


#endif //ANIMALWEB_ANIMAL_H
