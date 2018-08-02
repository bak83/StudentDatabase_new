#include "Student.hpp"

Student::Student(std::string n, std::string s, std::string p, std::string se, std::string a, int i, float sal):Person(n, s, p, se, a, i, sal){}

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

