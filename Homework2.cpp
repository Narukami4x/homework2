#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "Homework2" << endl;
	
	string name;
	short salary, sale, percent,total;
	
	cout << "Enter Name : ";
	cin >> name;
	cout << "Enter Salary : ";
	cin >> salary;
	cout << "Enter Sale : ";
	cin >> sale;
	cout << "Enter Commission percent : ";
	cin >> per;
	total = (per*sale/100)+salary;
	
	cout << "Your name = " << name << endl;
	cout << "Total Revenue  " << total << "bath" << endl;
	cout << "Pattarapol Kraitong" << endl;
	cout << "6306021611043" << endl;
	return 0;
}