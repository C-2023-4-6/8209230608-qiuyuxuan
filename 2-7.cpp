#include<iostream>
using namespace std;
int main() {
	int i = 0;
	int a = 1;
	for (; a <= 5; a++) {
		i = 0;
		for (; i < a; i++) {
			cout << "*";
		}
		cout << endl;
	}
	
	}
