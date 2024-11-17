#include <iostream>
#include <memory>
#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    void setBrand(const std::string& b) { brand = b; }
    void setModel(const std::string& m) { model = m; }
    void setYearModel(int y) { yearModel = y; }
    void printData() const {
        std::cout << "Brand: " << brand << ", Model: " << model << ", Year: " << yearModel << std::endl;
    }
};

class Rectangle {
private:
    double width;
    double height;

public:
    void setWidth(double w) { width = w; }
    void setHeight(double h) { height = h; }
    double getArea() const { return width * height; }
    double getCircum() const { return 2 * (width + height); }
};

class Student {
private:
    std::string name;
    int studentNumber;
    double average;

public:
    void setName(const std::string& n) { name = n; }
    void setStudentNumber(int s) { studentNumber = s; }
    void setAverage(double a) { average = a; }
    std::string getName() const { return name; }
    int getStudentNumber() const { return studentNumber; }
    double getAverage() const { return average; }
};

int main() {
    Car car;
    car.setBrand("Toyota");
    car.setModel("Corolla");
    car.setYearModel(2020);
    car.printData();

    Rectangle* rect = new Rectangle();
    rect->setWidth(5.0);
    rect->setHeight(3.0);
    std::cout << "Area: " << rect->getArea() << ", Circumference: " << rect->getCircum() << std::endl;
    delete rect;

    std::shared_ptr<Student> student = std::make_shared<Student>();
    student->setName("John Doe");
    student->setStudentNumber(12345);
    student->setAverage(4.0);
    std::cout << "Name: " << student->getName() << ", Student Number: " << student->getStudentNumber()
              << ", Average: " << student->getAverage() << std::endl;

    return 0;
}
