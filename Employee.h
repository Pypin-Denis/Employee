#pragma once
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Employee
{
private:
	string mFirstName;
	string mLastName;
	int mSalary;
	int count;
	
public:
	Employee(string, string, int);
	virtual void printStats();
	virtual void save(ofstream& outFile);
	string getLastName(); 
	virtual ~Employee() {};
	//*****************************************************************
	Employee& operator++();
	Employee operator++(int);
	Employee& operator--();
	Employee operator--(int);
	Employee& operator=(int);
	Employee& operator~();
	Employee& operator&(int);
	Employee& operator+=(int);
	Employee& operator%(int);
	Employee& operator!();
	//*****************************************************************

	friend istream& operator>>(istream& in, Employee& count); // перегруженный оператор "поместить в поток"*/
	friend ostream& operator<<(ostream& out, const Employee& rec); // взять из потока
	
};
