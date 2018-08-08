#pragma once

#include "Person.hpp"

class Employee: public Person
{
        
public:
    Employee(std::string, std::string, std::string, std::string, std::string, int, float);
    Employee(std::string);
    int getIndex() override;
    float getSalary () override;
    void showAll() override; 
    std::string toString() override;
};
