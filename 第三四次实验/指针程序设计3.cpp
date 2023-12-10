#include <iostream>
using namespace std;
void bubble(int* arr, int len) {
	for (int i_ = 0; i_ < len - 1; i_++) {
		for (int i = 0; i < len - i_ - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
}

int main() {
	int x;
	cout << "请输入元素个数";
	cin >> x;
	int* p = new int[x];
	cout << "请输入各元素数据";
	for (int i = 0; i < x; i++)
	{
		cin >> p[i];
	}
	/*观察指针及指针指向的内容*/
	cout << p << ' ' << *p << ' ' << p + 1 << ' ' << *(p + 1) << endl;

	bubble(p, x);
	for (int i = 0; i < x; i++) {
		cout << *(p + i) << ' ';


	}
	cout << endl;
	delete[] p;
	return 0;
}