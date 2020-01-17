#ifndef RESEARCHER_H
#define RESEARCHER_H
#include<fstream>
#include<string>
#include"Employee.h"
class Researcher:public Employee
{
private:
    string mSchoolPhd;
    string mPhdTopic;
public:
	Researcher(string, string, int, string, string);
    void save(ofstream& outFile);
    void printStats();
    ~Researcher(){};
};
#endif
