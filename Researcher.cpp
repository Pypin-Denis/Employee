#include<iostream>
#include<fstream>
#include<string>
using namespace std;
#include"Researcher.h"
#include"Employee.h"
Researcher::Researcher(string firstName,string lastName,int salary,string schoolPhd,string PhdTopic):Employee(firstName,lastName,salary)
    {
		mSchoolPhd=schoolPhd;mPhdTopic=PhdTopic;
}
    void Researcher::save(ofstream& outFile)
    {
        Employee::save(outFile);
        outFile<<"School of Phd.:"<<mSchoolPhd<<endl;
        outFile<<"Phd. topic:"<<mPhdTopic<<endl;
    }
    void Researcher::printStats()
    {
        Employee::printStats();
        cout<<"School of Phd.:"<<mSchoolPhd<<endl;
        cout<<"Phd. topic:"<<mPhdTopic<<endl;
    }
