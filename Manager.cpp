#include<iostream>
#include<fstream>
#include<string>
#include"Manager.h"
#include"Employee.h"
using namespace std;
Manager::Manager(string firstName,string lastName,int salary,int meet,int vac):Employee(firstName,lastName,salary)
    {
        mMeet=meet;mVac=vac;
    }
    void Manager::save(ofstream& outFile)
    {
        Employee::save(outFile);
        outFile<<"Number of meetings:"<<mMeet<<endl;
        outFile<<"Number of holidays:"<<mVac<<endl;
    }
    void Manager::printStats()
   {
        Employee::printStats();
        cout<<"Number of meetings:"<<mMeet<<endl;
        cout<<"Number of holidays:"<<mVac<<endl;
    }
