#include "Student.hpp"
#include <sstream>
#include <iomanip>

Student::Student(std::string n, std::string s, std::string p, std::string se, std::string a, int i, float sal):Person(n, s, p, se, a, i, sal)
{}
Student::Student(std::string line): Person(line)
{}
int Student::getIndex(){return index;}

float Student::getSalary(){return salary;}

void Student::showAll()
{
    std::cout << getName() << "  "
              << getSurname() << "  "
              << getPesel() << "  "
              << getSex() << "  "
              << getAddress() << "  "
              << getIndex() << "  "
              << getSalary() << "  "
              << std::endl;
}
std::string Student::toString(){
    std::stringstream ss;
    ss << Person::toString()
       << std::setw(7) << index; 
    return ss.str();
       
}
