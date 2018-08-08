#include "Employee.hpp"
#include <limits>
#include <sstream>
#include <iomanip>
#include <iostream>

Employee::Employee(std::string n, std::string s, std::string p, std::string se, std::string a, int i, float sal):Person(n, s, p, se, a, i, sal)
{}

Employee::Employee(std::string line):Person(line)
{}

float Employee::getSalary(){return salary;}


int Employee::getIndex() {int i=std::numeric_limits<int>::max(); return i;}
void Employee::showAll()
{
    std::cout << getName() << "  "
              << getSurname() << "  "
              << getPesel() << "  "
              << getSex() << "  "
              << getAddress() << "  "
              << getIndex() << "  "
              << getSalary() << std::endl;
}
std::string Employee::toString(){
    std::stringstream ss;
    ss << Person::toString()
       << std::setw(7) << salary;
    return ss.str();
       
}
