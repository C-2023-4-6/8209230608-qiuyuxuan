#include <iostream>
using namespace std;
int yingshu(int& m, int& n) {
	if (m < n)
	{
		int temp; temp = m; m = n; n = temp;
	}
	int i;
	for (i = n ;; i--) {
		if (n % i == 0 && m % i == 0) {

			break;
		}
		
	}return i ;
}
	int beishu(int& m, int& n) {
		if (m < n)
		{
			int temp; temp = m; m = n; n = temp;
		}
		int i;
		for (i = m;; i++) {
			if (i % m == 0 && i % n == 0) {
				break;
			}

		}return i;
	}
int main() {
	int m, n;
	cin >> m >> n;

	cout << "���Լ���ǣ�" << yingshu(m, n)<<endl;
	cout <<"��С�������ǣ�"<<beishu(m,n)<<endl;





	return 0;
}