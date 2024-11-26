#include "Car.h"

int main() {
    Car myCar("Toyota", "Corolla");
    myCar.setEngine(150, 2.0);
    myCar.setWheels(17, "kesärengas");
    myCar.printDetails();
    return 0;
}
