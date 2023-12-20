#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:             
	int hour;
	int minute;
	int sec;
public:
	void CIN(int H, int M, int S) {
		hour=H;      //输入设定的时间 
		minute=M;
		sec=S;
	};
	void COUT(){ cout <<"The time is" << hour << ":" << minute << ":" << sec << endl; }
};
int main()
{
	int h, m, s;
	cin >> h >> m >> s;
	Time t1;           //定义t1为Time类对象
	t1.CIN(h,m,s);
	t1.COUT();
	
	return 0;
}
