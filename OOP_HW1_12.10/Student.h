#pragma once
#include <iostream>
#include <string>
#include <map>
using namespace std;

class Student
{
	string name;
	int averageMark;
public:
	Student();
	Student(string n, int am);
	string GetName();
	int GetAverageMark();
};

Student::Student() : name(""), averageMark(0) {}

Student::Student(string n, int am) : name(n), averageMark(am){}

string Student::GetName()
{
	return name;
}

int Student::GetAverageMark()
{
	return averageMark;
}



typedef pair<int, Student> mypairstud;
class List
{
	map<int, Student> list;
public:
	void Add(int val, Student s);
	void Find(int val);
	void Output();
};

void List::Add(int val, Student s)
{
	list.insert(mypairstud(val, s));
}

void List::Find(int val)
{
	auto ptr = list.find(val);
	if (ptr != list.end())
	{
		cout << ptr->first << " - " << ptr->second.GetName() << " - " << ptr->second.GetAverageMark()<< endl;
	}
}

void List::Output()
{
	for (auto ptr = list.begin(); ptr != list.end(); ptr++)
	{
		cout << ptr->first << " - " << ptr->second.GetName() << " - " << ptr->second.GetAverageMark() << endl;
	}
}
