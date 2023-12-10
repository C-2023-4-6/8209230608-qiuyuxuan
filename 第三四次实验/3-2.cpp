#include <iostream>
using namespace std;
bool is_prime(int num) {
	int t = 0;
	for (int i = num - 1; i > 1; i--) {
		if (num % i == 0) { t++; }
	}
	if (!t) { return true; }
	else { return false; }

}
int main() {
	for (int a = 0,shu=2;a<200;shu++) {
		if (is_prime(shu)) { cout << shu << ' '; a++; }
		if (a % 10 == 0) { cout << endl; }
	}
	return 0;
}