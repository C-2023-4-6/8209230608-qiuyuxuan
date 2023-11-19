#include<iostream>
using namespace std;
int main() {
	float x,y;
	cin >> x;
	if (x < 1 && x>0) {
		y = (3 - 2*x);
		}
	else if(x<5&&x>=1)
	{
		y = (2 / (4 * x) + 1);
	}
	else if (x < 10 && x >= 5) { y = x * x; }
	cout << y;
}