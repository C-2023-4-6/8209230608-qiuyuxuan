#include <iostream>
using namespace std;
int main() {
	bool arr[100]{};
	{
	

			for (int i = 1; i <= 100; i++)//student number&gap
			{
				for (int a = i; a <= 99; a = a + i ) {
					arr[a - 1] = !arr[a - 1];
				}
			}
			for (int i = 0; i <= 99; i++)
			{
				if (arr[i]) {
					cout << i + 1 << ' ';

				}

			}

		}
		return 0;
	}
