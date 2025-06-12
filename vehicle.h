#pragma once
#include <string>
#include <iostream>

class Vehicle {
protected:
    std::string brand;
    std::string model;
    int year;
    double price;

public:
    Vehicle(const std::string& brand, const std::string& model, int year, double price);
    virtual ~Vehicle() = default;

    // Віртуальний метод для виведення інформації (поліморфізм)
    virtual void printDetails() const;

    // Гетери
    std::string getBrand() const;
    std::string getModel() const;
    int getYear() const;
    double getPrice() const;
};