#include "Employee.hpp"

Employee::Employee(std::string n, std::string s, int sal):
    Record(n, s), salary(sal) {}

int Employee::getSalary() const { return salary; }

void Employee::showAll()
{
    std::cout << getName() << "  "
              << getSurname() << "  "
              << getSalary() << std::endl;
}

int Employee::getId() { return 2; }
