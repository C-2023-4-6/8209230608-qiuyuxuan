#include<iostream>
using namespace std;
int main() {
	int a, b,c;
	cin >> a;
	cin >> b;
	//���������
	if (a >= b) { c= b; }
	else { c= a; }
	for (; c > 0; c--) {
		if ((a % c == 0) && ((b % c) == 0))
		{ cout << "a��b�����Լ��Ϊ��" << c<<endl; break; }
	}
	//����С������
	if (a >= b) { c = a; }
	else { c = b;}
	for (;; c++) {
		if ((c % a == 0) && (c % b == 0)) 
		{ cout << "a��b����С������Ϊ��" << c<<endl; break; }
	}
}