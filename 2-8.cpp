#include<iostream>
using namespace std;
int main() {
	double a, b,c,x,y ;
	cin >> a;
	if (a >= 0) {
		b = a;//�˴�bΪxn
		x = b; y = 0.5 * (x + a / x);
		for (; ((x - y) < 0.00001 && (x - y) > -0.00001) == 0;) {
			x = y;  y = 0.5 * (x + a / x);
		}
		cout << y;
	}
	else { cout << "aֵ����Ϊ����"; }

}