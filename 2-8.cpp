#include<iostream>
using namespace std;
int main() {
	double a, b,c,x,y ;
	cin >> a;
	if (a >= 0) {
		b = a;//此处b为xn
		x = b; y = 0.5 * (x + a / x);
		for (; ((x - y) < 0.00001 && (x - y) > -0.00001) == 0;) {
			x = y;  y = 0.5 * (x + a / x);
		}
		cout << y;
	}
	else { cout << "a值不能为负数"; }

}