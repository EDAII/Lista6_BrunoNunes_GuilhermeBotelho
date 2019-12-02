#include "Animal.h"


Animal::Animal() {

    name = "Treta";
    type_consumer = "";
    biomass = 0;


}

Animal::Animal(string name, string type_consumer, int biomass) {
    this->name = name;
    this->type_consumer = type_consumer;
    this->biomass = biomass;
}

Animal::~Animal() {};

string Animal:: getName(){
    return name;
}

void Animal::setName(const string &name) {
    Animal::name = name;
}

string Animal::getTypeConsumer() {
    return type_consumer;
}

void Animal::setTypeConsumer(const string &typeConsumer) {
    type_consumer = typeConsumer;
}

int Animal::getBiomass(){
    return biomass;
}

void Animal::setBiomass(int biomass) {
    Animal::biomass = biomass;
}
