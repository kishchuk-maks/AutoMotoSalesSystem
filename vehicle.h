#pragma once
#include <string>
#include <iostream>

class Vehicle {
protected:
    static int nextId;
    int id;
    std::string brand;
    std::string model;
    int year;
    double price;
    bool sold;

public:
    Vehicle(std::string b, std::string m, int y, double p)
        : brand(b), model(m), year(y), price(p), sold(false), id(nextId++) {}

    virtual ~Vehicle() {}
    int getId() const { return id; }
    std::string getModel() const { return model; }
    void sell() { sold = true; }
    bool isSold() const { return sold; }

    virtual void display() const = 0;
};