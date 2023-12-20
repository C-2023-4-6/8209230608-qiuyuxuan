#include <iostream>
class cube {
private:
	int length; int width; int height;
public:
	void calculate() {
		std::cout << "该长方柱"<<"的体积为： " << length * width * height <<std:: endl;
	}
	cube(int l, int w, int h) { length = l, width = w, height = h; }

};
using namespace std;
int main() {
	int l1, w1, h1, l2, w2, h2, l3, w3, h3;
	cin >> l1 >> w1 >> h1 >> l2 >> w2 >> h2 >> l3 >> w3 >> h3;
	cube cube1{ l1,w1,h1 };
	cube cube2{ l2,w2,h2 };
	cube cube3{ l3,w3,h3 };
	cube1.calculate();
	cube2.calculate();
	cube3.calculate();
	return 0;
}