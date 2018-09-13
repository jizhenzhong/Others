#pragma once
//�������
#include <string>
using namespace std;



class Interface {	//������,��Ҫʵ�ֽ������ʾ
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



class MyVirtualClass {		//�����࣬��Ҫ��������Student���Teacher��
public:
	virtual string GetNumber() = 0;		//���麯�����������������ж���
	virtual void InputeInformation() = 0;
	virtual void AddInformation() = 0;
	virtual void ModifyInformation() = 0;
	virtual void DisplayInformation() = 0;
};



class Student:public MyVirtualClass{	//ѧ����
protected:
	string number;
	string name;
	string professional_class;
private:
	float english_score;
	float math_score;
	float basketball_score;
public:
	friend  void GetStudentInformationFromFile(Student *);		/*��Ԫ������Ϊû��thisָ�롣Ҫ���ʷ�static��Աʱ����Ҫ��������
																  ����Ҫ����static��Ա��ȫ�ֱ���ʱ������Ҫ����������*/
	friend void OutStudentInformationToFile(Student *);
	static int stu_count;
	Student();
	virtual string GetNumber();		//���麯�������ض���
	virtual void InputeInformation();
	virtual void AddInformation();
	void DeleteInformation(Student *, string, int);		/*�����ӵĳ�Ա��������Ҫ����Ϊһ��ʼû�а���Ŀ����ƺã��������ɾ��
														  ��Ϣ�����ĵ�һ����������ΪStudent��ָ��*/
	virtual void ModifyInformation();
	virtual void DisplayInformation();
};



class Teacher :public Student {		//��ʦ�࣬��Ҫ�����̳�ѧ�����е�number,name,professional_class���ݳ�Ա
protected:
	string subject;
	int age;
public:
	friend void	GetTeacherInformationFromFile(Teacher *);
	friend void OutTeacherInformationToFile(Teacher *);
	static int tea_count;
	Teacher();
	virtual string GetNumber();		//���麯��������д
	virtual void InputeInformation();
	virtual void AddInformation();
	void DeleteInformation(Teacher *, string, int);		/*�����ӵĳ�Ա��������Student�Ǹ������ӵĳ�Ա����һ��������û����ƺó��ֵ�
														  ���⣬���ﺯ����һ������ΪTeacher*/
	virtual void ModifyInformation();
	virtual void DisplayInformation();
};



void GetStudentInformationFromFile(Student *);		//��ͨ������������ͬ��Ҳ�����������Ԫ��������Ҫ����ʵ���ļ��Ĳ���
void GetTeacherInformationFromFile(Teacher *);
void OutStudentInformationToFile(Student *);
void OutTeacherInformationToFile(Teacher *);


void CycleInterface();		//�����ͨ������������������Լ��Խ�����л���һϵ���߼�����

