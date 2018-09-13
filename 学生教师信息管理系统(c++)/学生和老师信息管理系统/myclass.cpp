//��ĳ�Ա�����Ķ���
#include "stdafx.h"
#include "myclass.h"
#include<fstream>		//�ļ�������Ҫ�����ļ��Ķ�ȡ����,����Ŀʹ��������ifstream��ofstream
#include <iostream>
#include<iomanip>		//c++�е�iomanip������Ҫʹ�ÿ��Ʒ���������ĸ�ʽ
using namespace std;



void Interface::InterfaceFormation() {		//�����￪ʼΪ�����ຯ���Ķ���
	cout << "��������������������������������������������" << endl;
	cout << "           1.������Ϣ" << endl;
	cout << "           2.������Ϣ" << endl;
	cout << "           3.ɾ����Ϣ" << endl;
	cout << "           4.�޸���Ϣ" << endl;
	cout << "           5.��ѯ��Ϣ" << endl;
	cout << "           6.�ļ���������" << endl;
	cout << "��������������������������������������������" << endl;
	cout << "\n" << "��������:1-5" << "\n"<<"����ѡ�������:";
}
void Interface::InterfaceInputeInformation() {
	system("cls");
	cout << "��������������������������������������������" << endl;
	cout << "           1.����ѧ����Ϣ" << endl;
	cout << "           2.�����ʦ��Ϣ" << endl;
	cout << "��������������������������������������������" << endl;
	cout << "\n" << "��������:1-2" << "\n" << "����ѡ�������:";
}
void Interface::InterfaceAddInformation() {
	system("cls");
	cout << "��������������������������������������������" << endl;
	cout << "           1.����ѧ����Ϣ" << endl;
	cout << "           2.���ӽ�ʦ��Ϣ" << endl;
	cout << "��������������������������������������������" << endl;
	cout << "\n" << "��������:1-2" << "\n" << "����ѡ�������:";
}
void Interface::InterfaceDeleteInformation() {
	system("cls");
	cout << "��������������������������������������������" << endl;
	cout << "           1.ɾ��ѧ����Ϣ" << endl;
	cout << "           2.ɾ����ʦ��Ϣ" << endl;
	cout << "��������������������������������������������" << endl;
	cout << "\n" << "��������:1-2" << "\n" << "����ѡ�������:";
}
void Interface::InterfaceModifyInformation() {
	system("cls");
	cout << "��������������������������������������������" << endl;
	cout << "           1.�޸�ѧ����Ϣ" << endl;
	cout << "           2.�޸Ľ�ʦ��Ϣ" << endl;
	cout << "��������������������������������������������" << endl;
	cout << "\n" << "��������:1-2" << "\n" << "����ѡ�������:";
}
void Interface::InterfaceInquireInformation() {
	system("cls");
	cout << "��������������������������������������������" << endl;
	cout << "           1.��ѯѧ����Ϣ" << endl;
	cout << "           2.��ѯ��ʦ��Ϣ" << endl;
	cout << "��������������������������������������������" << endl;
	cout << "\n" << "��������:1-2" << "\n" << "����ѡ�������:";
}
void Interface::InterfaceFileInformation() {
	system("cls");
	cout << "��������������������������������������������" << endl;
	cout << "           1���ļ���ȡ����" << endl;
	cout << "           2.������ݵ��ļ�" << endl;
	cout << "��������������������������������������������" << endl;
	cout << "\n" << "��������:1-2" << "\n" << "����ѡ�������:";
}
void Interface::GetInformationFromFile() {
	system("cls");
	cout << "��������������������������������������������" << endl;
	cout << "           1.��ȡѧ������" << endl;
	cout << "           2.��ȡ��ʦ����" << endl;
	cout << "��������������������������������������������" << endl;
	cout << "\n" << "��������:1-2" << "\n" << "����ѡ�������:";
}
void Interface::OutInformationToFile() {
	system("cls");
	cout << "��������������������������������������������" << endl;
	cout << "           1.���ѧ������" << endl;
	cout << "           2.�����ʦ����" << endl;
	cout << "��������������������������������������������" << endl;
	cout << "\n" << "��������:1-2" << "\n" << "����ѡ�������:";
}



Student::Student() {	//�����￪ʼΪѧ�����Ա�����Ķ���
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
	cout << "����ѧ����Ϣ:";
	cin >> number >> name >> professional_class >> english_score >> math_score >> basketball_score;
	stu_count++;
}
void Student::AddInformation() {
	cout << "����ѧ����Ϣ:";
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
	cout << "�����ѧ��������Ϣ(���˸�ʽ): " << "ѧ��" << "\t" << "����" << "\t" << "רҵ�༶" << "\t" << "Ӣ��ɼ�" << "\t" << "��ѧ�ɼ�" << "\t" << "����ɼ�" << "\n" << "�ڴ�����:";
	cin >> number >> name >> professional_class >> english_score >> math_score >> basketball_score;
}
void Student::DisplayInformation() {
	cout << setw(15) << setiosflags(ios::left) << number << setw(15) << setiosflags(ios::left) << name << setw(15) << setiosflags(ios::left) << professional_class
		<< setw(15) << setiosflags(ios::left) << english_score << setw(15) << setiosflags(ios::left) << math_score << setw(15) << setiosflags(ios::left) << basketball_score << endl;
}
int Student::stu_count = 0;		//��̬���ݳ�Ա�����ֻ࣬���������ʼ��



Teacher::Teacher() {	//�����￪ʼΪ��ʦ���Ա�����Ķ���
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
	cout << "����ѧ����Ϣ:";
	cin >> number >> name >> professional_class >> subject >> age;
	tea_count++;
}
void Teacher::AddInformation() {
	cout << "����ѧ����Ϣ:";
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
	cout << "����˽�ʦ������Ϣ(���˸�ʽ): " << "��ʦ��" << "\t" << "����" << "\t" << "רҵ�༶" << "\t" "������Ŀ" << "\t" << "���� << \n" << "�ڴ�����:" ;
	cin >> number >> name >> professional_class >> subject >> age;
}
void Teacher::DisplayInformation() {
	cout << setw(15) << setiosflags(ios::left) << number << setw(15) << setiosflags(ios::left) << name << setw(15) << setiosflags(ios::left) << professional_class
		<< setw(15) << setiosflags(ios::left) << subject << setw(15) << setiosflags(ios::left) << age << endl;
}
int Teacher::tea_count = 0;		//��̬���ݳ�Ա�����ֻ࣬���������ʼ��



void GetStudentInformationFromFile(Student *s) { //�����￪ʼΪ��ͨ�����Ķ���
	ifstream infile("D:\\StudentTestIn.txt", ios::in|ios::_Nocreate);
	if (!infile)
	{
		cerr << "���ļ�ʧ��" << endl;
		system("pause");
		exit(1);
	}
	while (!infile.eof())
	{
	infile >> (*(s+Student::stu_count)).number >> (*(s + Student::stu_count)).name >> (*(s + Student::stu_count)).professional_class >> (*(s + Student::stu_count)).english_score >> (*(s + Student::stu_count)).math_score >> (*(s + Student::stu_count)).basketball_score;
	Student::stu_count++;
	}
	infile.close();
	cout << "��ȡ���(�����������)��";
	system("pause");
}

void GetTeacherInformationFromFile(Teacher *s) {
	ifstream infile("D:\\TeacherTestIn.txt", ios::in | ios::_Nocreate);
	if (!infile)
	{
		cerr << "���ļ�ʧ��" << endl;
		system("pause");
		exit(1);
	}
	while (!infile.eof())
	{
		infile >> (*(s + Teacher::tea_count)).number >> (*(s + Teacher::tea_count)).name >> (*(s + Teacher::tea_count)).professional_class >> (*(s + Teacher::tea_count)).subject >> (*(s + Teacher::tea_count)).age;
		Teacher::tea_count++;
	}
	infile.close();
	cout << "��ȡ���(�����������)��";
	system("pause");
}

void OutStudentInformationToFile(Student *s) {
	ofstream outfile("D:\\StudetTestOut.txt", ios::out | ios::trunc);
	if (!outfile)
	{
		cerr << "���ļ�ʧ��" << endl;
		system("pause");
		exit(1);
	}
	for(int i=0;i<Student::stu_count;i++)
	{
		outfile << (*s).number << " " << (*s).name << " " << (*s).professional_class<< " " << (*s).english_score << " " << (*s).math_score << " " << (*s).basketball_score << "\n";
		s++;
	}
	outfile.close();
	cout << "������(����D:\\StudetTestOut.txt�鿴����,�����������)��";
	system("pause");
}
void OutTeacherInformationToFile(Teacher *s) {
	ofstream outfile("D:\\TeacherTestOut.txt", ios::out | ios::trunc);
	if (!outfile)
	{
		cerr << "���ļ�ʧ��" << endl;
		system("pause");
		exit(1);
	}
	for (int i = 0; i<Student::stu_count; i++)
	{
		outfile << (*s).number << " " << (*s).name << " " << (*s).professional_class << " " << (*s).subject << " " << (*s).age << "\n";
		s++;
	}
	outfile.close();
	cout << "������(����D:\\TeacherTestOut.txt�鿴����,�����������)��";
	system("pause");

}



void  CycleInterface() { //�����ͨ������������������Լ��Խ�����л���һϵ���߼�����
	Interface interface;
	Student stu[50];//һ��ʼ����ܶ��˿ռ�Ķ���(�����ȱ��)����ʵ��ʹ����ͨ��stu_count��������ʵ����Ҫ������������
	Teacher tea[50];//һ��ʼ����ܶ��˿ռ�Ķ���(�����ȱ��)����ʵ��ʹ����ͨ��tea_count��������ʵ����Ҫ������������
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
				cout << "�����ʽ(�ո����): " << setw(15) << setiosflags(ios::left) << "ѧ��" << setw(15) << setiosflags(ios::left) << "����" << setw(15) << setiosflags(ios::left) << "רҵ�༶"
					<< setw(15) << setiosflags(ios::left) << "Ӣ��ɼ�" << setw(15) << setiosflags(ios::left) << "��ѧ�ɼ�" << setw(15) << setiosflags(ios::left) << "����ɼ�" << endl;
				while (1) {
					stu[Student::stu_count].InputeInformation();
					cout << "�Ƿ��������?(Y or N)" << " ����:";
					char c;
					cin >> c;
					if (c == 'N' || c == 'n')
					{
						break;
					}
				}
				break;
			case 2:
				cout << "�����ʽ(�ո����): " << setw(15) << setiosflags(ios::left) << "��ʦ��" << setw(15) << setiosflags(ios::left) << "����" << setw(15) << setiosflags(ios::left) << "רҵ�༶"
					<< setw(15) << setiosflags(ios::left) << "������Ŀ" << setw(15) << setiosflags(ios::left) << "����" << endl;
				while (1) {
					tea[Teacher::tea_count].InputeInformation();
					cout << "�Ƿ��������?(Y or N)" << " ����:";
					char c;
					cin >> c;
					if (c == 'N' || c == 'n')
					{
						break;
					}
				}
				break;
			default:
				cout << "����ѡ�����,����(�����������������)��";
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
				cout << "�����ʽ(�ո����): " << setw(15) << setiosflags(ios::left) << "ѧ��" << setw(15) << setiosflags(ios::left) << "����" << setw(15) << setiosflags(ios::left) << "רҵ�༶"
					<< setw(15) << setiosflags(ios::left) << "Ӣ��ɼ�" << setw(15) << setiosflags(ios::left) << "��ѧ�ɼ�" << setw(15) << setiosflags(ios::left) << "����ɼ�" << endl;
				while (1) {
					stu[Student::stu_count].AddInformation();
					cout << "�Ƿ�������?(Y or N)" << " ����:";
					char c;
					cin >> c;
					if (c == 'N' || c == 'n')
					{
						break;
					}
				}
				break;
			case 2:
				cout << "�����ʽ(�ո����): " << setw(15) << setiosflags(ios::left) << "��ʦ��" << setw(15) << setiosflags(ios::left) << "����" << setw(15) << setiosflags(ios::left) << "רҵ�༶"
					<< setw(15) << setiosflags(ios::left) << "������Ŀ" << setw(15) << setiosflags(ios::left) << "����" << endl;
				while (1) {
					tea[Teacher::tea_count].AddInformation();
					cout << "�Ƿ�������?(Y or N)" << " ����:";
					char c;
					cin >> c;
					if (c == 'N' || c == 'n')
					{
						break;
					}
				}
				break;
			default:
				cout << "����ѡ�����,����(�����������������)��";
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
					cout << "������Ҫɾ����ѧ��:";
					string delete_n;
					cin >> delete_n;
					for (int i = 0; i < Student::stu_count; i++) {
						if (stu[i].GetNumber() == delete_n) {
							stu[i].DeleteInformation(stu, delete_n, i);
							cout << "ɾ���ɹ�,�밴���������������!" << endl;
							system("pause");
							break;
						}
						else if (i == Student::stu_count - 1) {
							cout << "û�ҵ���ѧ��,�����ѧ������(�����������������)��";
							system("pause");
						}
					}
					break;
				}
				break;
			case 2:
				while (1) {
					cout << "������Ҫɾ���Ľ�ʦ��:";
					string delete_n;
					cin >> delete_n;
					for (int i = 0; i < Teacher::tea_count; i++) {
						if (tea[i].GetNumber() == delete_n) {
							tea[i].DeleteInformation(tea, delete_n, i);
							cout << "ɾ���ɹ�,�밴���������������!" << endl;
							system("pause");
							break;
						}
						else if (i == Teacher::tea_count - 1) {
							cout << "û�ҵ���ѧ��,�����ѧ������(�����������������)��";
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
					cout << "������Ҫ�޸ĵ�ѧ����ѧ��:";
					string delete_n;
					cin >> delete_n;
					for (int i = 0; i < Student::stu_count; i++) {
						if (stu[i].GetNumber() == delete_n) {
							stu[i].ModifyInformation();
							cout << "�޸ĳɹ�,�밴���������������!" << endl;
							system("pause");
							break;
						}
						else if (i == Student::stu_count - 1) {
							cout << "û�ҵ���ѧ��,�����ѧ������(�����������������)��";
							system("pause");
						}
					}
					break;
				}
				break;
			case 2:
				while (1) {
					cout << "������Ҫ�޸ĵĽ�ʦ�Ľ�ʦ��:";
					string delete_n;
					cin >> delete_n;
					for (int i = 0; i < Teacher::tea_count; i++) {
						if (tea[i].GetNumber() == delete_n) {
							tea[i].ModifyInformation();
							cout << "�޸ĳɹ�,�밴���������������!" << endl;
							system("pause");
							break;
						}
						else if (i == Teacher::tea_count - 1) {
							cout << "û�ҵ���ѧ��,�����ѧ������(�����������������)��";
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
				cout << setw(15) << setiosflags(ios::left) << "ѧ��" << setw(15) << setiosflags(ios::left) << "����" << setw(15) << setiosflags(ios::left) << "רҵ�༶"
					<< setw(15) << setiosflags(ios::left) << "Ӣ��ɼ�" << setw(15) << setiosflags(ios::left) << "��ѧ�ɼ�" << setw(15) << setiosflags(ios::left) << "����ɼ�" << endl;
				for (int i = 0; i < Student::stu_count; i++)
				{
					stu[i].DisplayInformation();
				}
				cout << "\n" << "������������أ�";
				system("pause");
				break;
			case 2:
				cout << setw(15) << setiosflags(ios::left) << "��ʦ��" << setw(15) << setiosflags(ios::left) << "����" << setw(15) << setiosflags(ios::left) << "רҵ�༶"
					<< setw(15) << setiosflags(ios::left) << "������Ŀ" << setw(15) << setiosflags(ios::left) << "����" << endl;
				for (int i = 0; i < Teacher::tea_count; i++)
				{
					tea[i].DisplayInformation();
				}
				cout << "\n" << "������������أ�";
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
			cout << "����ѡ�����,����(�����������������)��";
			system("pause");
		}
		system("cls");
	}
}




