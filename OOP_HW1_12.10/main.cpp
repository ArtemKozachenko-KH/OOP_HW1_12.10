#include <iostream>
#include <string>
#include <map>
#include "Dictionary.h"
#include "PhoneBook.h"
#include "Student.h"
using namespace std;


int main()
{
	Dictionary dict;
	dict.Add("Dog", "Sobaka");
	dict.Add("Cat", "Kot");
	dict.Add("City", "Gorod");
	dict.Output();

	cout << "\n\t|-----Find-----|\n";
	dict.Find("Cat");

	cout << "\n\t|-----Delete-----|\n";
	dict.Delete("Cat");
	dict.Output();
	dict.Add("Dino", "dinozavr");
	dict.Output();


	//PhoneBook
	cout<<"\n\t |----------PHONE BOOK----------|\n";
	PhoneBook pbook;
	pbook.Add("Andrey", "+38880808");
	pbook.Add("Kolya", "+3737373737");
	pbook.Add("Alexey", "+353535353");
	pbook.Add("Petrovich", "+169293232");
	pbook.Add("Anna", "+3914343443");
	pbook.Output();

	cout << "\n\t|-----Find-----|\n";
	pbook.Find("Petrovich");


	//Student
	cout << "\n\t |----------Student list----------|\n";
	List stlist;
	stlist.Add(8, Student("Nicolay",8));
	stlist.Add(5, Student("Elena",10));
	stlist.Add(3, Student("Grigoriy",9));
	stlist.Add(7, Student("Alexandr",7));

	stlist.Output();

	cout << "\n\t|-----Find-----|\n";
	stlist.Find(5);



}