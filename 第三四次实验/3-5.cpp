#include <iostream>
using namespace std;

int tao(int day) {
	if (day == 1) { return 1; }
	return((tao(day-1)+1)*2);
}

int main() {
	int day;
	cin >> day;
	cout << "���ӹ�ժ��" << tao(day) << "��";
	return 0;
}