#include<iostream>
using namespace std;
int main() {
	int a, b,d; char c;
	cout << "�������һ������";
	cin >> a;
	cout << "�������������";
	cin >> c;
	cout << "������ڶ�������";
	cin >> b;
	switch (c)
		{
	case'+':d = a + b; cout << a << c << b << " =" << d; break;
	case'-':d = a - b; cout << a << c << b << " =" << d; break;
	case'*':d = a * b; cout << a << c << b << " =" << d; break;
	case'/':if (b == 0) { cout << "���㲻�Ϸ�"; }
		   else { d = a / b; cout << a << c << b << " =" << d;
	}break;
	case'%':if (b == 0) { cout << "���㲻�Ϸ�"; }
		   else { d = a % b; cout << a << c << b << " =" << d;
	} break;
	default:cout << "��������Ϸ�";
			break;
		}
	
}