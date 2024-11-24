#include "ItalianChef.h"
#include <iostream>

ItalianChef::ItalianChef(const std::string& chefName) : Chef(chefName) {
    std::cout << "ItalianChef constructor: " << name << std::endl;
}

ItalianChef::~ItalianChef() {
    std::cout << "ItalianChef destructor: " << name << std::endl;
}

void ItalianChef::makePasta() const {
    std::cout << name << " is making pasta." << std::endl;
}

std::string ItalianChef::getName() const {
    return name;
}
