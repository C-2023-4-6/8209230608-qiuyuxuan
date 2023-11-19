#include <iostream>
using namespace std;
int main() {
	int a = 2, b = 0, c = 0;//a为每日苹果数，c为总苹果数
	while (a <= 100)
	{
		c += a;
		a = a * 2;
		b++;

	}
	cout << "平均每天花的钱是:" << (c * 0.8 )/ b;
}