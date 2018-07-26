#pragma once

#include "Record.hpp"

class Employee: public Record
{
    int salary;

public:
    Employee(std::string, std::string, int);

    int getSalary() const;

    void showAll() override;
    int getId() override;
};
