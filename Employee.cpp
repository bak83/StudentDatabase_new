#include "Employee.hpp"
#include <limits>
#include <iostream>

Employee::Employee(std::string n, std::string s, std::string p, std::string se, std::string a, int i, float sal):Person(n, s, p, se, a, i, sal){}

float Employee::getSalary(){return salary;}

int Employee::getIndex() {int i=std::numeric_limits<int>::max(); return i;}
void Employee::showAll()
{
    std::cout << getName() << "  "
              << getSurname() << "  "
              << getPesel() << "  "
              << getSex() << "  "
              << getAddress() << "  "
              << getSalary() << std::endl;
}

