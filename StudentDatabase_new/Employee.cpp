#include "Employee.hpp"

Employee::Employee(std::string n, std::string s, int p, std::string se, std::string a, int sal):
    Person(n, s, p, se, a), salary(sal) {}

int Employee::getSalary() const { return salary; }

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
