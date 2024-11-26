#ifndef CAR_H
#define CAR_H

#include "Engine.h"
#include "Wheel.h"
#include <string>
#include <vector>
using namespace std;

class Car {
private:
    Engine engine;
    vector<Wheel> wheels;
    string model;
    string brand;

public:
    Car(const string& br, const string& mo);
    void setEngine(int hp, double disp);
    void setWheels(int size, const string& type);
    void printDetails() const;
};

#endif
