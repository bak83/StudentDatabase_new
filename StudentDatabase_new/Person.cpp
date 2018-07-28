#include "Person.hpp"

Person::Person(std::string n, std::string s, int p, std::string se, std::string a): name(n), surname(s), pesel(p), sex(se), address(a) {}

std::string Person::getName() const { return name; }

std::string Person::getSurname() const { return surname; }
int Person::getPesel() const { return pesel; }
std::string Person::getSex() const { return sex; }
std::string Person::getAddress() const { return address; }





