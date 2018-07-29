#include "Student.hpp"

Student::Student(std::string n, std::string s, std::string p, std::string se, std::string a, int i, float sal):Person(n, s, p, se, a, i, sal){}


float Student::getSalary(){return -1.00;}

void Student::showAll()
{
    std::cout << getName() << "  "
              << getSurname() << "  "
              << getPesel() << "  "
              << getSex() << "  "
              << getAddress() << "  "
              << getIndex() << "  "
              << std::endl;
}

int Student::getId() { return 1; }
