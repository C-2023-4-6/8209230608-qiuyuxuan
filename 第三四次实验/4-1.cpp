#include<iostream>
using namespace std;
int main() {
	int arr[10];
	for (int i = 1; i <= 10; i++) {
		cin >> arr[i - 1];
	}
	int xin[10]; int b = 0;
	for (int i = 0; i < 10; i++) {
		int t = 0;
		for (int a = 0; a < i; a++) {
			if (arr[i] != arr[a]) {
				t++;
			}
		}
		if (t == i) {
			xin[b] = arr[i];
			b++;
		}
	}
	cout << "Enter ten numbers:";
	for (int i = 0; i <= 9; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	cout << "The distinct numbers are:";
	for (int a = 0; a <= b - 1; a++) { cout << xin[a] << ' '; }
}