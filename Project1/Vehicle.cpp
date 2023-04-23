#include "./Vehicle.h";

int Vehicle::getYear() {
    return year;
}

void Vehicle::setYear(int y) {
    year = y;
}

string Vehicle::getManufacturer() {
    return manufacturer;
}

void Vehicle::setManufacturer(string m) {
    manufacturer = m;
}

void Vehicle::displayInfo() {
    cout << "Vehicle Information: " << endl;
    cout << "Manufacturer: " << manufacturer;
    cout << endl << "Year Built: " << year;
}