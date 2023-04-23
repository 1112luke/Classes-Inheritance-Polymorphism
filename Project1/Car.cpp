#include "./Car.h";

void Car::setDoors(int d) {
	doors = d;
}

int Car::getDoors() {
	return doors;
}

void Car::displayInfo() {
	Vehicle::displayInfo();
	cout << endl << "Doors: " << doors;
}