#include "Employee.hpp"
#include <limits>
#include <iostream>

Employee::Employee(std::string n, std::string s, std::string p, std::string se, std::string a, int i, float sal):Person(n, s, p, se, a, i, sal){}


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

int Employee::getId() { return 2; }
