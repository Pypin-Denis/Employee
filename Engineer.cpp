#include<iostream>
#include<fstream>
#include<string>
#include"Engineer.h"
#include"Employee.h"
using namespace std;
Engineer::Engineer(string firstName,string lastName,int salary,string knowCPP,int yearsExp,string trade):Employee(firstName,lastName,salary)
    {
        mKnowCPP=knowCPP;mYearsExp=yearsExp;mtrade=trade;}
    void Engineer:: save(ofstream& outFile)
    {
        Employee::save(outFile);
        outFile<<"know c++:"<<mKnowCPP<<endl;
        outFile<<"Years of exp:"<<mYearsExp<<endl;
        outFile<<"count of invention:"<<mtrade<<endl;
    }
    void Engineer:: printStats()
    {
        Employee::printStats();
        cout<<"know c++:"<<mKnowCPP<<endl;
        cout<<"Years of exp:"<<mYearsExp<<endl;
        cout<<"count of invention:"<<mtrade<<endl;
    }
