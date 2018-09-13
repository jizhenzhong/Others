#pragma once
//类的声明
#include <string>
using namespace std;



class Interface {	//界面类,主要实现界面的显示
public:
	void InterfaceFormation();
	void InterfaceInputeInformation();
	void InterfaceAddInformation();
	void InterfaceDeleteInformation();
	void InterfaceModifyInformation();
	void InterfaceInquireInformation();
	void InterfaceFileInformation();
	void GetInformationFromFile();
	void OutInformationToFile();
};



class MyVirtualClass {		//抽象类，主要用来派生Student类和Teacher类
public:
	virtual string GetNumber() = 0;		//纯虚函数，具体在派生类中定义
	virtual void InputeInformation() = 0;
	virtual void AddInformation() = 0;
	virtual void ModifyInformation() = 0;
	virtual void DisplayInformation() = 0;
};



class Student:public MyVirtualClass{	//学生类
protected:
	string number;
	string name;
	string professional_class;
private:
	float english_score;
	float math_score;
	float basketball_score;
public:
	friend  void GetStudentInformationFromFile(Student *);		/*友元函数因为没有this指针。要访问非static成员时，需要对象做参
																  数；要访问static成员或全局变量时，则不需要对象做参数*/
	friend void OutStudentInformationToFile(Student *);
	static int stu_count;
	Student();
	virtual string GetNumber();		//对虚函数进行重定义
	virtual void InputeInformation();
	virtual void AddInformation();
	void DeleteInformation(Student *, string, int);		/*新增加的成员函数，主要是因为一开始没有把类的框架设计好，导致这个删除
														  信息函数的第一个参数必须为Student类指针*/
	virtual void ModifyInformation();
	virtual void DisplayInformation();
};



class Teacher :public Student {		//教师类，主要用来继承学生类中的number,name,professional_class数据成员
protected:
	string subject;
	int age;
public:
	friend void	GetTeacherInformationFromFile(Teacher *);
	friend void OutTeacherInformationToFile(Teacher *);
	static int tea_count;
	Teacher();
	virtual string GetNumber();		//对虚函数进行重写
	virtual void InputeInformation();
	virtual void AddInformation();
	void DeleteInformation(Teacher *, string, int);		/*新增加的成员函数，和Student那个新增加的成员函数一样，都是没有设计好出现的
														  问题，这里函数第一个参数为Teacher*/
	virtual void ModifyInformation();
	virtual void DisplayInformation();
};



void GetStudentInformationFromFile(Student *);		//普通函数的声明，同是也是其它类的友元函数，主要用来实现文件的操作
void GetTeacherInformationFromFile(Teacher *);
void OutStudentInformationToFile(Student *);
void OutTeacherInformationToFile(Teacher *);


void CycleInterface();		//这个普通函数用来调用类对象以及对界面的切换等一系列逻辑操作

