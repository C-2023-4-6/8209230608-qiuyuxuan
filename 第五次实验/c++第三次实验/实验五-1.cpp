#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:             
	int hour;
	int minute;
	int sec;
public:
	void CIN(int H, int M, int S) {
		hour=H;      //�����趨��ʱ�� 
		minute=M;
		sec=S;
	};
	void COUT(){ cout <<"The time is" << hour << ":" << minute << ":" << sec << endl; }
};
int main()
{
	int h, m, s;
	cin >> h >> m >> s;
	Time t1;           //����t1ΪTime�����
	t1.CIN(h,m,s);
	t1.COUT();
	
	return 0;
}
