#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//���϶� = (���϶�-32��F) �� 1.8
	cout << "�����뻪���¶�";
	float a;
	cin >> a;
	cout << "�����¶�Ϊ" << fixed<<setprecision(2)<<(a - 32) / 1.8;

}