#pragma once

#include "Person.hpp"

class Employee: public Person
{
        
public:
    Employee(std::string, std::string, std::string, std::string, std::string, int, float);
    
    int getIndex();
    void showAll() override;
 
};
