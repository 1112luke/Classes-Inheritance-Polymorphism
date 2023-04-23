#include "./Truck.h";

void Truck::setCapacity(int c) {
	capacity = c;
}

int Truck::getCapacity() {
	return capacity;
}

void Truck::displayInfo() {
	Vehicle::displayInfo();
	cout << endl << "Towing Capacity: " << capacity;
}