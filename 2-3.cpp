#include<iostream>
using namespace std;
int main(){
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c && a - b<c && a + c>b && b + c > a && a - c < b && b - c < a && b - a < c && c - a < b && c - b < a) {
		if (a == b || a == c || b == c) {
			cout << "���ǵ���������";
		}
		else {
			cout<<"�����ǵ���������;"
		}
	}
	else { cout << "���޷�����������"; }
}