#include <iostream>
using namespace std;
void bubble(int* arr, int len) {
	for (int i_ = 1; i_ <= len ; i_++) {
		for (int i = 0; i < len-1; i++)
			if (arr[i] > arr[i + 1]) {
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
	}
}
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 1; i <= size1; i++) { list3[i - 1] = list1[i - 1]; }
	for (int i = 1; i <= size2; i++) { list3[i - 1 + size1] = list2[i - 1]; }
	bubble(list3, size1 + size2);
	
}

int main() {
	cout << "输入两个排列好的数组,首个数字为数组元素数";
		int size1, size2;
		int list1[80], list2[80],list3[160];
		cin >> size1;
		for (int i = 1; i <= size1; i++) { cin >> list1[i - 1]; }
		cin >> size2;
		for (int i = 1; i <= size2; i++) { cin >> list2[i - 1]; }
		cout << "Enter list1:";
		for (int i = 0; i < size1; i++) { cout << list1[i] << ' '; }
		cout << endl;
		cout << "Enter list2:";
		for (int i = 0; i < size2; i++) { cout << list2[i] << ' '; }
		cout << endl;
		
		merge( list1, size1, list2, size2, list3);
		cout << "The merged list is ";
		for (int i = 1; i <= size1 + size2; i++) {
			cout << list3[i - 1]<<' ';
		}
}