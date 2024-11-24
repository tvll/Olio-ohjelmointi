#include "Chef.h"
#include <iostream>

Chef::Chef(const std::string& chefName) : name(chefName) {
    std::cout << "Chef constructor: " << name << std::endl;
}

Chef::~Chef() {
    std::cout << "Chef destructor: " << name << std::endl;
}

void Chef::makeSalad() const {
    std::cout << name << " is making salad." << std::endl;
}

void Chef::makeSoup() const {
    std::cout << name << " is making soup." << std::endl;
}
