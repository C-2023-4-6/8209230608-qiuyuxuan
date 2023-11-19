#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//摄氏度 = (华氏度-32°F) ÷ 1.8
	cout << "请输入华氏温度";
	float a;
	cin >> a;
	cout << "摄氏温度为" << fixed<<setprecision(2)<<(a - 32) / 1.8;

}