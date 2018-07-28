#pragma once

#include "Person.hpp"

class Employee: public Person
{
    int salary;

public:
    Employee(std::string, std::string, int, std::string, std::string, int);

    int getSalary() const;

    void showAll() override;
    int getId() override;
};
