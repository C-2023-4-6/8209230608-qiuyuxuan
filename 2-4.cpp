#include<iostream>
using namespace std;
int main() {
	int a, b,d; char c;
	cout << "请输入第一个数字";
	cin >> a;
	cout << "请输入运算符号";
	cin >> c;
	cout << "请输入第二个数字";
	cin >> b;
	switch (c)
		{
	case'+':d = a + b; cout << a << c << b << " =" << d; break;
	case'-':d = a - b; cout << a << c << b << " =" << d; break;
	case'*':d = a * b; cout << a << c << b << " =" << d; break;
	case'/':if (b == 0) { cout << "运算不合法"; }
		   else { d = a / b; cout << a << c << b << " =" << d;
	}break;
	case'%':if (b == 0) { cout << "运算不合法"; }
		   else { d = a % b; cout << a << c << b << " =" << d;
	} break;
	default:cout << "运算符不合法";
			break;
		}
	
}