#include<iostream>
#include <string>
using namespace std;
class Human {
private:
	string name="���� ��������";
public:
	string GetName() {
		return name;
	}
	void SetName(string name)
	{
		this->name = name;
	}
};
class Student : public Human
{
public:
	
	string group;
	void Learn()
	{
		cout << "� �����" << endl;
	}
};
class ExtramuralStudent : public Student
{
public:

	string group;
	void Learn()
	{
		cout << "� ����� � ������������ ���� �������� ��������!" << endl;
	}
};
class Teacher : public Human
{
public:
	
	string subject;
	void Learn()
	{
		cout << "� �������� �������" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	Student st;
	st.Learn();
	st.SetName("�������");
	cout << st.GetName() << endl;
	ExtramuralStudent extraSt;
	extraSt.Learn();
	extraSt.SetName("����");
	cout << extraSt.GetName() << endl;
	Teacher tr;
	tr.Learn();
	extraSt.SetName("���� ��������");
	cout << extraSt.GetName() << endl;

	return 0;
}