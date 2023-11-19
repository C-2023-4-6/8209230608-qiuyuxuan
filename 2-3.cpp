#include<iostream>
using namespace std;
int main(){
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c && a - b<c && a + c>b && b + c > a && a - c < b && b - c < a && b - a < c && c - a < b && c - b < a) {
		if (a == b || a == c || b == c) {
			cout << "它是等腰三角形";
		}
		else {
			cout<<"它不是等腰三角形;"
		}
	}
	else { cout << "这无法构成三角形"; }
}