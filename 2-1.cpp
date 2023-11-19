#include<iostream>
using namespace std;
int main() {

	cout << "请输入一个字符";
	char a;
	cin >> a;
	if (a <= 90 && a >= 65) {
		a += 1; cout << "转化后的后继字符ASCII码为为：" << (int)a;
	}//若a为大写
	else {//若a为小写
		a = a - 32;  cout << "转化后的字符为：" << a; 
	}
	

	}
