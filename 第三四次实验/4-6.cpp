#include <iostream>
using namespace std;
void count(const char s[], int counts[]) {
	for (int i = 0;; i++) {
		if (s[i] > 96) { counts[s[i]-97]++; }
		else { counts[s[i] - 65]++; }
		if (s[i] == '\n') { break; }
	}
	for (int i = 0;i<=25; i++) {
		if (counts[i] != 0) { cout << char(i + 97) << ':' << counts[i] << ' ' << "times" << endl; }
	}
}
int main() {
	char s[200]; char a = 'a'; int ci(0); int arr[26]{};
	cout << "Enter a string: ";
	for (int i = 0; a != '\n'; i++)
	{
		s[i] = getchar(); a = s[i]; ci++;
	}
	a = 'a';
	for (int i = 0; a != '\n'; i++)
	{
		a = s[i]; cout << s[i];
	}
	cout << endl;
	ci--;
	 count( s, arr);
	 return 0;
}