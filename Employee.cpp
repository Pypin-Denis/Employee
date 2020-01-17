#include<iostream>
#include<fstream>
#include<string>
#include "Employee.h"
using namespace std;
Employee::Employee(string firstName, string lastName, int salary)
    {
        mFirstName=firstName;mLastName=lastName;mSalary=salary;
//*********************************************************************************
			!mSalary;
//*********************************************************************************
};
void Employee::printStats()
    {
        cout<<"First name:"<<mFirstName<<endl;
        cout<<"Last name:"<<mLastName<<endl;
        cout<<"Salary:"<<mSalary<<endl;
};
void Employee::save(ofstream& outFile)
    {
        outFile<<"First name:"<<mFirstName<<endl;
        outFile<<"Last name:"<<mLastName<<endl;
        outFile<<"Salary:"<<mSalary<<endl;
};
string Employee::getLastName()
    { 
        return mLastName;
};


//***********************************************************
Employee& Employee::operator += (int)
{
count=count+1;
return *this;
}
Employee& Employee::operator ++()
{
	count++;
	return *this;
}

Employee Employee::operator ++(int)
{
	Employee temp (*this);
	++(*this);
	return temp;
}

Employee& Employee::operator --()
{
	count--;
	return *this;
}
Employee Employee::operator --(int)
{
	Employee temp(*this);
	--(*this);
	return temp;
}
Employee& Employee::operator =(int)
{
    if (count<=0)
    {
        count=0;
    };
    return *this;
}
Employee& Employee::operator ~()
{
    count=count*(-1);
    return *this;
}
Employee& Employee::operator &(int)
{
    mSalary=mSalary+3000;
    return *this;
}
Employee& Employee::operator %(int)
{
	mSalary=(mSalary-((mSalary/100)*9));
	(*this)=mSalary;
    return *this;
}

std::istream& operator>>(istream& in, Employee& count)
{
	in >> count.count;
	return in;
}

std::ostream& operator<<(ostream& os,const Employee& rec)
{
  os<<"Employee editor version 1.3 made by Hobbit and Cat";
    return os;
}
Employee& Employee::operator !()
{
		mSalary=(mSalary-((mSalary/100)*9));
		return *this;
}
