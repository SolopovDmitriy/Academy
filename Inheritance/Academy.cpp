#include<iostream>
#include <string>
using namespace std;
class Human {
private:
	string name="Иван Иванович";
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
		cout << "Я учусь" << endl;
	}
};
class ExtramuralStudent : public Student
{
public:

	string group;
	void Learn()
	{
		cout << "Я бываю в университете реже обычного студента!" << endl;
	}
};
class Teacher : public Human
{
public:
	
	string subject;
	void Learn()
	{
		cout << "Я преподаю предмет" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	Student st;
	st.Learn();
	st.SetName("Василий");
	cout << st.GetName() << endl;
	ExtramuralStudent extraSt;
	extraSt.Learn();
	extraSt.SetName("Петр");
	cout << extraSt.GetName() << endl;
	Teacher tr;
	tr.Learn();
	extraSt.SetName("Иван Петрович");
	cout << extraSt.GetName() << endl;

	return 0;
}