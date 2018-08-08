#include "Person.hpp"

#include <iostream>
#include <sstream>
#include <iomanip>

Person::Person(std::string n, std::string s, std::string p, std::string se, std::string a, int i, float sal): name(n), surname(s), pesel(p), sex(se), address(a), index(i), salary(sal) {}

Person::Person(std::string lineFromFile)
    : name(lineFromFile.substr(0,15))
    , surname(lineFromFile.substr(16, 15))
    , pesel(lineFromFile.substr(32, 11))
    , sex(lineFromFile.substr(44, 6))
    , address(lineFromFile.substr(50, 50))
{}

std::string Person::getName() const { return name; }
std::string Person::getSurname() const { return surname; }
std::string Person::getPesel() const { return pesel;}
std::string Person::getSex() const { return sex; }
std::string Person::getAddress() const { return address; }
void Person::setAddress(std::string a) {address = a; }
void Person::setSalary(float f) { salary = f;}

std::string Person::toString() const{
    std::stringstream ss;
    ss << std::setw(15) << name << "|"
       << std::setw(15) << surname << "|"
       << std::setw(11) << pesel << "|"
       << std::setw(6) << sex << "|"
       << std::setw(50) << address << "|";
    return ss.str();
       
}
