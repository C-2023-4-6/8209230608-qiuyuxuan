
//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
class Student              //������
{

public:                   //���ó�Ա����ԭ������
	void display();
	void set_value(int num_,const char name_[20], char sex_) {
		num = num_, sex = sex_; strcpy_s(name,sizeof(name), name_);
	
	}
private:
	int num;
	char name[20];
	char sex;
};