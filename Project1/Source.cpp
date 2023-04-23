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

int main() {

    Vehicle nice("toyota", 2004);

    cout << "manufacturer: " << nice.getManufacturer();
    cout << endl << "year: " << nice.getYear();

    cout << endl << "hello world" << endl;

    system("pause");
    return 0;
}