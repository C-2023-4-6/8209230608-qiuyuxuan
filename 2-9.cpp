#include <iostream>
using namespace std;
int main() {
	int a = 2, b = 0, c = 0;//aΪÿ��ƻ������cΪ��ƻ����
	while (a <= 100)
	{
		c += a;
		a = a * 2;
		b++;

	}
	cout << "ƽ��ÿ�컨��Ǯ��:" << (c * 0.8 )/ b;
}