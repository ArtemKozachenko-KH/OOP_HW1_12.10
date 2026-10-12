#pragma once
#include <iostream>
#include <string>
#include <map>
using namespace std;

typedef pair<string, string> mypair;
class Dictionary
{
	map<string, string> dict;
public:
	void Add(string s1,string s2);
	void Find(string s1);
	void Delete(string s1);
	void Output();
};

void Dictionary::Add(string s1,string s2)
{
	dict.insert(mypair(s1, s2));
}

void Dictionary::Find(string s1)
{
	auto ptr = dict.find(s1);
	if (ptr != dict.end())
	{
		cout << ptr->first << " - " << ptr->second << endl;
	}
}

void Dictionary::Delete(string s1)
{
	auto ptr = dict.find(s1);
	if (ptr != dict.end())
	{
		dict.erase(ptr->first);
	}
	else
	{
		cout << "No value\n\n";
	}
}

void Dictionary::Output()
{
	for (auto ptr = dict.begin(); ptr != dict.end(); ptr++)
	{
		cout << ptr->first << " - " << ptr->second << endl;
	}
}
