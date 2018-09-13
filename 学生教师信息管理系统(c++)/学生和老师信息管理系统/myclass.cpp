//类的成员函数的定义
#include "stdafx.h"
#include "myclass.h"
#include<fstream>		//文件流，主要用于文件的读取操作,本项目使用了它的ifstream和ofstream
#include <iostream>
#include<iomanip>		//c++中的iomanip流，主要使用控制符控制输出的格式
using namespace std;



void Interface::InterfaceFormation() {		//从这里开始为界面类函数的定义
	cout << "■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "           1.输入信息" << endl;
	cout << "           2.增加信息" << endl;
	cout << "           3.删除信息" << endl;
	cout << "           4.修改信息" << endl;
	cout << "           5.查询信息" << endl;
	cout << "           6.文件操作数据" << endl;
	cout << "■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "\n" << "输入数字:1-5" << "\n"<<"输入选择的数字:";
}
void Interface::InterfaceInputeInformation() {
	system("cls");
	cout << "■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "           1.输入学生信息" << endl;
	cout << "           2.输入教师信息" << endl;
	cout << "■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "\n" << "输入数字:1-2" << "\n" << "输入选择的数字:";
}
void Interface::InterfaceAddInformation() {
	system("cls");
	cout << "■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "           1.增加学生信息" << endl;
	cout << "           2.增加教师信息" << endl;
	cout << "■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "\n" << "输入数字:1-2" << "\n" << "输入选择的数字:";
}
void Interface::InterfaceDeleteInformation() {
	system("cls");
	cout << "■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "           1.删除学生信息" << endl;
	cout << "           2.删除教师信息" << endl;
	cout << "■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "\n" << "输入数字:1-2" << "\n" << "输入选择的数字:";
}
void Interface::InterfaceModifyInformation() {
	system("cls");
	cout << "■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "           1.修改学生信息" << endl;
	cout << "           2.修改教师信息" << endl;
	cout << "■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "\n" << "输入数字:1-2" << "\n" << "输入选择的数字:";
}
void Interface::InterfaceInquireInformation() {
	system("cls");
	cout << "■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "           1.查询学生信息" << endl;
	cout << "           2.查询教师信息" << endl;
	cout << "■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "\n" << "输入数字:1-2" << "\n" << "输入选择的数字:";
}
void Interface::InterfaceFileInformation() {
	system("cls");
	cout << "■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "           1从文件读取数据" << endl;
	cout << "           2.输出数据到文件" << endl;
	cout << "■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "\n" << "输入数字:1-2" << "\n" << "输入选择的数字:";
}
void Interface::GetInformationFromFile() {
	system("cls");
	cout << "■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "           1.读取学生数据" << endl;
	cout << "           2.读取老师数据" << endl;
	cout << "■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "\n" << "输入数字:1-2" << "\n" << "输入选择的数字:";
}
void Interface::OutInformationToFile() {
	system("cls");
	cout << "■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "           1.输出学生数据" << endl;
	cout << "           2.输出老师数据" << endl;
	cout << "■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "\n" << "输入数字:1-2" << "\n" << "输入选择的数字:";
}



Student::Student() {	//从这里开始为学生类成员函数的定义
	number = "";
	name = "";
	professional_class = "";
	english_score = -1;
	math_score = -1;
	basketball_score = -1;
}
string Student::GetNumber() {
	return number;
}
void Student::InputeInformation() {
	cout << "输入学生信息:";
	cin >> number >> name >> professional_class >> english_score >> math_score >> basketball_score;
	stu_count++;
}
void Student::AddInformation() {
	cout << "增加学生信息:";
	cin >> number >> name >> professional_class >> english_score >> math_score >> basketball_score;
	stu_count++;
}
void Student::DeleteInformation(Student *p, string s, int i) {
	for (int k = 0; k < stu_count - i; k++) {
		*(p + i) = *(p + (i + 1));
		i++;
	}
	stu_count--;
}
void Student::ModifyInformation() {
	cout << "输入此学生的新信息(按此格式): " << "学号" << "\t" << "姓名" << "\t" << "专业班级" << "\t" << "英语成绩" << "\t" << "数学成绩" << "\t" << "篮球成绩" << "\n" << "在此输入:";
	cin >> number >> name >> professional_class >> english_score >> math_score >> basketball_score;
}
void Student::DisplayInformation() {
	cout << setw(15) << setiosflags(ios::left) << number << setw(15) << setiosflags(ios::left) << name << setw(15) << setiosflags(ios::left) << professional_class
		<< setw(15) << setiosflags(ios::left) << english_score << setw(15) << setiosflags(ios::left) << math_score << setw(15) << setiosflags(ios::left) << basketball_score << endl;
}
int Student::stu_count = 0;		//静态数据成员属于类，只能在类外初始化



Teacher::Teacher() {	//从这里开始为教师类成员函数的定义
	number = "";
	name = "";
	professional_class = "";
	subject = "";
	age = 0;
}
string Teacher::GetNumber() {
	return number;
}
void Teacher::InputeInformation() {
	cout << "输入学生信息:";
	cin >> number >> name >> professional_class >> subject >> age;
	tea_count++;
}
void Teacher::AddInformation() {
	cout << "增加学生信息:";
	cin >> number >> name >> professional_class >> subject >> age;
	tea_count++;
}
void Teacher::DeleteInformation(Teacher *p, string s, int i) {
	for (int k = 0; k < tea_count - i; k++) {
		*(p + i) = *(p + (i + 1));
		i++;
	}
	tea_count--;
}
void Teacher::ModifyInformation() {
	cout << "输入此教师的新信息(按此格式): " << "教师号" << "\t" << "姓名" << "\t" << "专业班级" << "\t" "所带科目" << "\t" << "年龄 << \n" << "在此输入:" ;
	cin >> number >> name >> professional_class >> subject >> age;
}
void Teacher::DisplayInformation() {
	cout << setw(15) << setiosflags(ios::left) << number << setw(15) << setiosflags(ios::left) << name << setw(15) << setiosflags(ios::left) << professional_class
		<< setw(15) << setiosflags(ios::left) << subject << setw(15) << setiosflags(ios::left) << age << endl;
}
int Teacher::tea_count = 0;		//静态数据成员属于类，只能在类外初始化



void GetStudentInformationFromFile(Student *s) { //从这里开始为普通函数的定义
	ifstream infile("D:\\StudentTestIn.txt", ios::in|ios::_Nocreate);
	if (!infile)
	{
		cerr << "打开文件失败" << endl;
		system("pause");
		exit(1);
	}
	while (!infile.eof())
	{
	infile >> (*(s+Student::stu_count)).number >> (*(s + Student::stu_count)).name >> (*(s + Student::stu_count)).professional_class >> (*(s + Student::stu_count)).english_score >> (*(s + Student::stu_count)).math_score >> (*(s + Student::stu_count)).basketball_score;
	Student::stu_count++;
	}
	infile.close();
	cout << "读取完毕(按任意键返回)！";
	system("pause");
}

void GetTeacherInformationFromFile(Teacher *s) {
	ifstream infile("D:\\TeacherTestIn.txt", ios::in | ios::_Nocreate);
	if (!infile)
	{
		cerr << "打开文件失败" << endl;
		system("pause");
		exit(1);
	}
	while (!infile.eof())
	{
		infile >> (*(s + Teacher::tea_count)).number >> (*(s + Teacher::tea_count)).name >> (*(s + Teacher::tea_count)).professional_class >> (*(s + Teacher::tea_count)).subject >> (*(s + Teacher::tea_count)).age;
		Teacher::tea_count++;
	}
	infile.close();
	cout << "读取完毕(按任意键返回)！";
	system("pause");
}

void OutStudentInformationToFile(Student *s) {
	ofstream outfile("D:\\StudetTestOut.txt", ios::out | ios::trunc);
	if (!outfile)
	{
		cerr << "打开文件失败" << endl;
		system("pause");
		exit(1);
	}
	for(int i=0;i<Student::stu_count;i++)
	{
		outfile << (*s).number << " " << (*s).name << " " << (*s).professional_class<< " " << (*s).english_score << " " << (*s).math_score << " " << (*s).basketball_score << "\n";
		s++;
	}
	outfile.close();
	cout << "输出完毕(请在D:\\StudetTestOut.txt查看数据,按任意键返回)！";
	system("pause");
}
void OutTeacherInformationToFile(Teacher *s) {
	ofstream outfile("D:\\TeacherTestOut.txt", ios::out | ios::trunc);
	if (!outfile)
	{
		cerr << "打开文件失败" << endl;
		system("pause");
		exit(1);
	}
	for (int i = 0; i<Student::stu_count; i++)
	{
		outfile << (*s).number << " " << (*s).name << " " << (*s).professional_class << " " << (*s).subject << " " << (*s).age << "\n";
		s++;
	}
	outfile.close();
	cout << "输出完毕(请在D:\\TeacherTestOut.txt查看数据,按任意键返回)！";
	system("pause");

}



void  CycleInterface() { //这个普通函数用来调用类对象以及对界面的切换等一系列逻辑操作
	Interface interface;
	Student stu[50];//一开始分配很多人空间的对象(数组的缺点)，但实际使用是通过stu_count计数器来实现需要操作的总人数
	Teacher tea[50];//一开始分配很多人空间的对象(数组的缺点)，但实际使用是通过tea_count计数器来实现需要操作的总人数
	while (1)
	{
		interface.InterfaceFormation();
		int d;
		cin >> d;
		switch (d)
		{
		case 1:
			interface.InterfaceInputeInformation();
			cin >> d;
			system("cls");
			switch (d)
			{
			case 1:
				cout << "输入格式(空格隔开): " << setw(15) << setiosflags(ios::left) << "学号" << setw(15) << setiosflags(ios::left) << "姓名" << setw(15) << setiosflags(ios::left) << "专业班级"
					<< setw(15) << setiosflags(ios::left) << "英语成绩" << setw(15) << setiosflags(ios::left) << "数学成绩" << setw(15) << setiosflags(ios::left) << "篮球成绩" << endl;
				while (1) {
					stu[Student::stu_count].InputeInformation();
					cout << "是否继续输入?(Y or N)" << " 输入:";
					char c;
					cin >> c;
					if (c == 'N' || c == 'n')
					{
						break;
					}
				}
				break;
			case 2:
				cout << "输入格式(空格隔开): " << setw(15) << setiosflags(ios::left) << "教师号" << setw(15) << setiosflags(ios::left) << "姓名" << setw(15) << setiosflags(ios::left) << "专业班级"
					<< setw(15) << setiosflags(ios::left) << "所带科目" << setw(15) << setiosflags(ios::left) << "年龄" << endl;
				while (1) {
					tea[Teacher::tea_count].InputeInformation();
					cout << "是否继续输入?(Y or N)" << " 输入:";
					char c;
					cin >> c;
					if (c == 'N' || c == 'n')
					{
						break;
					}
				}
				break;
			default:
				cout << "输入选择错误,请检查(按任意键返回主界面)！";
				system("pause");
				break;
			}
			break;
		case 2:
			interface.InterfaceAddInformation();
			cin >> d;
			system("cls");
			switch (d)
			{
			case 1:
				cout << "输入格式(空格隔开): " << setw(15) << setiosflags(ios::left) << "学号" << setw(15) << setiosflags(ios::left) << "姓名" << setw(15) << setiosflags(ios::left) << "专业班级"
					<< setw(15) << setiosflags(ios::left) << "英语成绩" << setw(15) << setiosflags(ios::left) << "数学成绩" << setw(15) << setiosflags(ios::left) << "篮球成绩" << endl;
				while (1) {
					stu[Student::stu_count].AddInformation();
					cout << "是否继续添加?(Y or N)" << " 输入:";
					char c;
					cin >> c;
					if (c == 'N' || c == 'n')
					{
						break;
					}
				}
				break;
			case 2:
				cout << "输入格式(空格隔开): " << setw(15) << setiosflags(ios::left) << "教师号" << setw(15) << setiosflags(ios::left) << "姓名" << setw(15) << setiosflags(ios::left) << "专业班级"
					<< setw(15) << setiosflags(ios::left) << "所带科目" << setw(15) << setiosflags(ios::left) << "年龄" << endl;
				while (1) {
					tea[Teacher::tea_count].AddInformation();
					cout << "是否继续添加?(Y or N)" << " 输入:";
					char c;
					cin >> c;
					if (c == 'N' || c == 'n')
					{
						break;
					}
				}
				break;
			default:
				cout << "输入选择错误,请检查(按任意键返回主界面)！";
				system("pause");
				break;
			}
			break;
		case 3:
			interface.InterfaceDeleteInformation();
			cin >> d;
			system("cls");
			switch (d)
			{
			case 1:
				while (1) {
					cout << "请输入要删除的学号:";
					string delete_n;
					cin >> delete_n;
					for (int i = 0; i < Student::stu_count; i++) {
						if (stu[i].GetNumber() == delete_n) {
							stu[i].DeleteInformation(stu, delete_n, i);
							cout << "删除成功,请按任意键返回主界面!" << endl;
							system("pause");
							break;
						}
						else if (i == Student::stu_count - 1) {
							cout << "没找到此学生,输入的学号有误(按任意键返回主界面)！";
							system("pause");
						}
					}
					break;
				}
				break;
			case 2:
				while (1) {
					cout << "请输入要删除的教师号:";
					string delete_n;
					cin >> delete_n;
					for (int i = 0; i < Teacher::tea_count; i++) {
						if (tea[i].GetNumber() == delete_n) {
							tea[i].DeleteInformation(tea, delete_n, i);
							cout << "删除成功,请按任意键返回主界面!" << endl;
							system("pause");
							break;
						}
						else if (i == Teacher::tea_count - 1) {
							cout << "没找到此学生,输入的学号有误(按任意键返回主界面)！";
							system("pause");
						}
					}
					break;
				}
				break;
			}
			break;
		case 4:
			interface.InterfaceModifyInformation();
			cin >> d;
			system("cls");
			switch (d)
			{
			case 1:
				while (1) {
					cout << "请输入要修改的学生的学号:";
					string delete_n;
					cin >> delete_n;
					for (int i = 0; i < Student::stu_count; i++) {
						if (stu[i].GetNumber() == delete_n) {
							stu[i].ModifyInformation();
							cout << "修改成功,请按任意键返回主界面!" << endl;
							system("pause");
							break;
						}
						else if (i == Student::stu_count - 1) {
							cout << "没找到此学生,输入的学号有误(按任意键返回主界面)！";
							system("pause");
						}
					}
					break;
				}
				break;
			case 2:
				while (1) {
					cout << "请输入要修改的教师的教师号:";
					string delete_n;
					cin >> delete_n;
					for (int i = 0; i < Teacher::tea_count; i++) {
						if (tea[i].GetNumber() == delete_n) {
							tea[i].ModifyInformation();
							cout << "修改成功,请按任意键返回主界面!" << endl;
							system("pause");
							break;
						}
						else if (i == Teacher::tea_count - 1) {
							cout << "没找到此学生,输入的学号有误(按任意键返回主界面)！";
							system("pause");
						}
					}
					break;
				}
				break;
			}
			break;

		case 5:
			interface.InterfaceInquireInformation();
			cin >> d;
			system("cls");
			switch (d)
			{
			case 1:
				cout << setw(15) << setiosflags(ios::left) << "学号" << setw(15) << setiosflags(ios::left) << "姓名" << setw(15) << setiosflags(ios::left) << "专业班级"
					<< setw(15) << setiosflags(ios::left) << "英语成绩" << setw(15) << setiosflags(ios::left) << "数学成绩" << setw(15) << setiosflags(ios::left) << "篮球成绩" << endl;
				for (int i = 0; i < Student::stu_count; i++)
				{
					stu[i].DisplayInformation();
				}
				cout << "\n" << "按任意键键返回！";
				system("pause");
				break;
			case 2:
				cout << setw(15) << setiosflags(ios::left) << "教师号" << setw(15) << setiosflags(ios::left) << "姓名" << setw(15) << setiosflags(ios::left) << "专业班级"
					<< setw(15) << setiosflags(ios::left) << "所带科目" << setw(15) << setiosflags(ios::left) << "年龄" << endl;
				for (int i = 0; i < Teacher::tea_count; i++)
				{
					tea[i].DisplayInformation();
				}
				cout << "\n" << "按任意键键返回！";
				system("pause");
				break;
			}
			break;
		case 6:
			interface.InterfaceFileInformation();
			cin >> d;
			system("cls");
			switch (d)
			{
			case 1:
				interface.GetInformationFromFile();
				cin >> d;
				system("cls");
				switch (d)
				{
				case 1:
					GetStudentInformationFromFile(stu);
					break;
				case 2:
					GetTeacherInformationFromFile(tea);
					break;
				}
				break;
			case 2:
				interface.OutInformationToFile();
				cin >> d;
				system("cls");
				switch (d)
				{
				case 1:
					OutStudentInformationToFile(stu);
					break;
				case 2:
					OutTeacherInformationToFile(tea);
					break;
				}
				break;
			}
			break;
		default:
			system("cls");
			cout << "输入选择错误,请检查(按任意键返回主界面)！";
			system("pause");
		}
		system("cls");
	}
}




