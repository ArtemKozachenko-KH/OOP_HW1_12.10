#pragma once
#include <iostream>
#include <string>
#include <map>
using namespace std;

typedef pair<string, string> mypairbook;
class PhoneBook
{
	map<string, string> book;
public:
	void Add(string s1, string s2);
	void Find(string s1);
	void Output();
};

void PhoneBook::Add(string s1, string s2)
{
	book.insert(mypairbook(s1, s2));
}

void PhoneBook::Find(string s1)
{
	auto ptr = book.find(s1);
	if (ptr != book.end())
	{
		cout << ptr->first << " - " << ptr->second << endl;
	}
}

void PhoneBook::Output()
{
	for (auto ptr = book.begin(); ptr != book.end(); ptr++)
	{
		cout << ptr->first << " - " << ptr->second << endl;
	}
}
