#include <iostream>
using namespace std;
class Point
{
public:
	void display(){
		cout << "�޸ĺ������Ϊ�� (" << x << "," << y << ")" << endl;
	}
	void setPoint(int i, int j) {
		x = x + i, y = y + j;
	
	}
	Point(int x_,int y_){

		x = x_, y = y_;

	}

private:
	int x, y;
};
int main() {
	Point point{ 60,80 };
	int i, j;
	cin >> i >> j;
	point.setPoint( i,  j);
	point.display();
}
