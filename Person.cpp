#include "Person.hpp"
#include "iostream"
Person::Person(std::string n, std::string s, std::string p, std::string se, std::string a, int i, float sal): name(n), surname(s), pesel(p), sex(se), address(a), index(i), salary(sal) {}
std::string Person::getName() const { return name; }

std::string Person::getSurname() const { return surname; }
std::string Person::getPesel() const { return pesel;}
std::string Person::getSex() const { return sex; }
std::string Person::getAddress() const { return address; }
void Person::setAddress(std::string a) {address = a; }
void Person::setSalary(float f) { salary = f;}


