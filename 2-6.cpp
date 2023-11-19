#include<iostream>
using namespace std;
int main() {
	int a, b,c;
	cin >> a;
	cin >> b;
	//求最大公因数
	if (a >= b) { c= b; }
	else { c= a; }
	for (; c > 0; c--) {
		if ((a % c == 0) && ((b % c) == 0))
		{ cout << "a，b的最大公约数为：" << c<<endl; break; }
	}
	//求最小公倍数
	if (a >= b) { c = a; }
	else { c = b;}
	for (;; c++) {
		if ((c % a == 0) && (c % b == 0)) 
		{ cout << "a，b的最小公倍数为：" << c<<endl; break; }
	}
}