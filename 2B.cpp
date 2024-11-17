#include <iostream>
#include <string>
#include <vector>

class Car {
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    Car(const std::string& b, const std::string& m, int y) : brand(b), model(m), yearModel(y) {}
    void printData() const {
        std::cout << "Brand: " << brand << ", Model: " << model << ", Year: " << yearModel << std::endl;
    }
};

int main() {
    std::vector<Car> carList;
    carList.emplace_back("BMW", "X5", 2022);
    carList.emplace_back("Mercedes", "C-Class", 2021);
    carList.emplace_back("Audi", "A4", 2023);

    carList[1].printData();

    for (const auto& car : carList) {
        car.printData();
    }

    return 0;
}
