#include "Animal.h"
#include "Dog.h"
#include <iostream>

int main() {
    Animal* animal = new Animal();
    animal->callOut();
    delete animal;

    Animal* dog = new Dog();
    dog->callOut();
    delete dog;

    return 0;
}
