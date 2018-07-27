#include "Student.hpp"

Student::Student(std::string n, std::string s, int p, std::string se, std::string a, int i):
    Person(n, s, p, se, a), index(i) {}

int Student::getIndex() const { return index; }


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
