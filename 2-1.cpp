#include<iostream>
using namespace std;
int main() {

	cout << "������һ���ַ�";
	char a;
	cin >> a;
	if (a <= 90 && a >= 65) {
		a += 1; cout << "ת����ĺ���ַ�ASCII��ΪΪ��" << (int)a;
	}//��aΪ��д
	else {//��aΪСд
		a = a - 32;  cout << "ת������ַ�Ϊ��" << a; 
	}
	

	}
