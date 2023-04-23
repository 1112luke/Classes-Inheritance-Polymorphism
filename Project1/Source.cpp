//Luke Scholler
//CIS 1202
//April 2, 2023

#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include<cstring>

using namespace std;

#include "./Vehicle.h"
#include "./Car.h"
#include "./Truck.h"

int main() {

    cout << "Vehicle Program" << endl << endl;

    for (int i = 0; i < 3; i++) {
        string m;
        int y;
        int d;
        int c;

        switch (i) {
            case 0:
                cout << "Vehicle: ";
                break;
            case 1:
                cout << endl << endl << "Car: ";
                break;
            case 2:
                cout << endl << endl << "Truck";
                break;
        }
        
        cout << endl << "Enter the manufacturer: ";
        cin >> m;
        cout << "Enter the year built: ";
        cin >> y;

        if (i == 0) {
            Vehicle v(m, y);
            v.displayInfo();
        }
        else if (i == 1) {
            cout << "Enter the number of doors: ";
            cin >> d;

            Car c(m, y, d);
            c.displayInfo();
        }
        else {
            cout << "Enter the towing capacity: ";
            cin >> c;

            Truck t(m, y, c);
            t.displayInfo();
        }
    }
    
    cout << endl << endl;

    system("pause");
    return 0;
}