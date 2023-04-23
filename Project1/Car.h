#ifndef CAR_H
#define CAR_H

#include<string>

#include "./Vehicle.h"

class Car : public Vehicle {
	private:
		int doors;
	public:
		Car(string m, int y, int d) : Vehicle(m, y) {
			doors = d;
		}
		
		int getDoors();
		void setDoors(int);
};

#endif
