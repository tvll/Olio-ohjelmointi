#include "Chef.h"
#include "ItalianChef.h"
#include <iostream>

int main() {
    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();

    ItalianChef italianChef("Anthony Bourdain");
    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();
    std::cout << italianChef.getName() << std::endl;

    return 0;
}
