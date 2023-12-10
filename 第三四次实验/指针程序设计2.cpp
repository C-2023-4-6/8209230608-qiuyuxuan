#include <iostream>
#include<cmath>
#include<cstring>
using namespace std;

int parseHex(const char* const hexString) {
	int len = strlen(hexString);
	int sum(0);
	for (int i = 0;i<len; i++) {
		if ((int)hexString[i] >= 65) {
			sum = ((int)hexString[i] - 55) * pow(16, len - i - 1) + sum;
		}
		else{ sum = ((int)hexString[i]-'0') * pow(16, len - i - 1) + sum; }
	}
	return sum;

}
int main() {

	cout<< parseHex("A5");
}
