#pragma once
#include <string>
#include <iostream>

class Vehicle {
protected:
    int id;
    bool sold;
    std::string brand;
    std::string model;
    int year;
    double price;

public:
    Vehicle(int id, const std::string& brand, const std::string& model, int year, double price);
    virtual ~Vehicle() = default;

    virtual void display() const;

    int getId() const { return id; }
    std::string getBrand() const { return brand; }
    std::string getModel() const { return model; }
    int getYear() const { return year; }
    double getPrice() const { return price; }

    bool isSold() const { return sold; }
    void sell() { sold = true; }
};
