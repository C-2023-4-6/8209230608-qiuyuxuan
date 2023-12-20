#include <iostream>
using namespace std;
class Point
{
public:
	void display(){
		cout << "修改后的坐标为： (" << x << "," << y << ")" << endl;
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
