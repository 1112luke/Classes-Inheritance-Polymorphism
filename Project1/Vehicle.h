#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include<cstring>

using namespace std;

class Vehicle {
private:
    int year;
    string manufacturer;
public:
    Vehicle(string m, int y) {
        manufacturer = m;
        year = y;
    }

    int getYear();
    void setYear(int);

    string getManufacturer();
    void setManufacturer(string);
};
#endif