#include <iostream>
using namespace std;
int main() {
	char a='a'; int letter(0), space(0), number(0), other(0);
	while (a!='\n')
	{
		a = getchar();
		if (a < 57 && a >= 49) { number++; }
		else if((a>=65&&a<=90)||(a>=97&&a<=122)){letter++;}
		else if (a == 32) { space++; }
		else { other++; }
	}
	cout << "���ֵĸ�����" << number<<endl;
	cout << "��ĸ�ĸ�����" << letter << endl;
	cout << "�ո�ĸ�����" << space << endl;
	cout << "�����ַ��ĸ�����" <<other-1  << endl;
}