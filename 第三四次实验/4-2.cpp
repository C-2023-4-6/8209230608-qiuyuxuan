#include<iostream>
using namespace std;
void bubble(double* list, int listSize) {
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize-1; j++)
			if (list[j] > list[j + 1])
			{
				swap (list[j] , list[j + 1]);
				changed = true;
			}
	} while (changed);
}
int main() {
	double list[10]{0};
	for (int i = 0; i <= 9; i++) {
		cin >> list[i];
	}
	int len = sizeof(list) / sizeof(double);
	bubble(list, len);
	for (int i = 0; i<= len-1; i++) {
		cout << list[i] << ' ';
	}
	

}
