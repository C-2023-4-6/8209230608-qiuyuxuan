#include <iostream>
using namespace std; int b;
int indexOf(const char s1[], const char s2[]) {
	for (int i = 0; i <= 100; i++) {
		if (s1[0]==s2[i])
		{
			int a = i;
			for (int i_ = 1; s1[i_] == s2[a + 1]; i_++,a++) {
				 
				if (i_ == b) { return i; }
			}

		}
		
	}
	return -1;
}
int main() {
	char s1[100]{}; char s2[100]{}; char a = 'a';
	for ( int i = 0; a != '\n'; i++) {
		 s1[i]=getchar(), a = s1[i]; b = i - 2;

	}//i-2 ×Ö·û
	a = 'a';
	for ( int i = 0; a != '\n'; i++) {
		s2[i]=getchar(), a = s2[i];

	}
	cout << "Enter the first string: ";
	for (int i = 0; i <= b +1; i++) {
		cout << s1[i];
	}
	cout << endl;
	cout << "Enter the second string: ";
	 a = 'a';
	for (int i = 0; a != '\n'; i++) {
		cout << s2[i], a = s2[i];
	}
	cout << endl << "indexOf(¡°";
	for (int i = 0; i <= b-1; i++) {
		cout << s1[i];
	}
	cout << "¡±, ¡°";
	 a = 'a';
	for ( int i = 0; a != '\n'; i++) {
		cout << s2[i], a = s2[i];
	}
	cout << "¡±) is ";
	cout << indexOf(s1, s2);
}
