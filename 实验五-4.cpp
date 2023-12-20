#include <iostream>
using namespace std;
class student {
public:
	int id, grade;

	student(int id_, int grade_) {
		id = id_, grade = grade_;
	}
	
};
int max(student*students) {
	static int max = 0; int maxid = 0;
	for (int i = 1; i <= 5; i++) {
		if ((students[i-1].grade )>= max) {
			max = students[i-1].grade;
			maxid = i ;
		}

	}
	return maxid;
}


int main() {
	student st1{ 1,90 };
	student st2{ 2,100 };
	student st3{ 3,79 };
	student st4{ 4,80 };
	student st5{ 5,60 };
	student stud[5]{ st1,st2,st3,st4,st5 };
	cout<<"分数最高的人学号为:" << max(stud);


	return 0;
}