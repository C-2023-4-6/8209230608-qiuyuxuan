#include <iostream>
#include<iomanip>
#include "mytemperature.h"
using namespace std;
int main() {
	double temp[20];
	for (int i = 1,d=0; i <20; i=i+2,d++)
	{
		temp[i-1] = 40.0 - d; temp[i] = 120 - 10 * d;
	}
	cout << "Celsius" <<' ' << ' ' << ' ' << "Fahrenheit" << ' ' << ' ' << ' ' << '|' << ' ' << ' ' << ' ' << "Fahrenheit" << ' ' << ' ' << ' ' << "Celsius" << endl;
	for (int i = 1; i < 20; i=i+2)
	{
		cout << setprecision(1)<<fixed<< temp[i-1] << ' ' << ' ' << ' ' << celsius_to_fah(temp[i-1]) << ' ' << ' ' << ' ' << '|' << ' ' << ' ' << ' ' << temp[i ] << ' ' << ' ' << ' ' << setprecision(2) << fixed<< fahrenheit_to_cels(temp[i]) << endl;
	}
}
