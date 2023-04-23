#ifndef TRUCK_H
#define TRUCK_H

#include<string>

#include "./Vehicle.h"

class Truck : public Vehicle {
private:
	int capacity;
public:
	Truck(string m, int y, int c) : Vehicle(m, y) {
		capacity = c;
	}

	int getCapacity();
	void setCapacity(int);

	void displayInfo();
};

#endif