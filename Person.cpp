#include "Person.hpp"
#include "iostream"
Person::Person(std::string n, std::string s, std::string p, std::string se, std::string a, int i, float sal): name(n), surname(s), pesel(p), sex(se), address(a), index(i), salary(sal) {}
void Person::checkPesel() const {
    int sum = pesel[0] * 1 + pesel[1] * 3 + pesel[2] * 7 + pesel[3] * 9 + pesel[4] + pesel[5] * 3 + pesel[6] * 7 + pesel[7] * 9 + pesel[8] + pesel[9] * 3 + pesel[10];
    sum %=10;
    std::cout << sum << std::endl;
    }
std::string Person::getName() const { return name; }

std::string Person::getSurname() const { return surname; }
std::string Person::getPesel() const { return pesel;}
std::string Person::getSex() const { return sex; }
std::string Person::getAddress() const { return address; }
int Person::getIndex() const {return index;}
float Person::getSalary() const {return salary;}




