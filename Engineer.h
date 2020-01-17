#ifndef ENGINEER_H
#define ENGINEER_H
#include<fstream>
#include<string>
#include"Employee.h"
class Engineer: public Employee
{
private:
    string mKnowCPP;
    int mYearsExp;
    string mtrade;
public:
	Engineer(string, string, int, string, int, string);
    void save(ofstream& outFile);
    void printStats();
    ~Engineer(){};

};
#endif
