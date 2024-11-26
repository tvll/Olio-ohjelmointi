#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(const string& br, const string& mo) : brand(br), model(mo), wheels(4) {}

void Car::setEngine(int hp, double disp) {
    engine.setHorsepower(hp);
    engine.setDisplacement(disp);
}

void Car::setWheels(int size, const string& type) {
    for (auto& wheel : wheels) {
        wheel.setSize(size);
        wheel.setType(type);
    }
}

void Car::printDetails() const {
    cout << "Brand: " << brand << "\nModel: " << model << endl;
    cout << "Engine: " << engine.getHorsepower() << " HP, " << engine.getDisplacement() << " L" << endl;
    cout << "Wheels:" << endl;
    for (size_t i = 0; i < wheels.size(); ++i) {
        cout << "  Wheel " << i + 1 << ": Size " << wheels[i].getSize() 
             << ", Type " << wheels[i].getType() << endl;
    }
}
