#ifndef MANAGER_H
#define MANAGER_H
#include<fstream>
#include<string>
#include"Employee.h"
class Manager: public Employee
{
private:
    int mMeet;
    int mVac;
public:
	Manager(string, string, int, int, int);
    void save(std::ofstream& outFile);
    void printStats();
    ~Manager(){};
};
#endif
