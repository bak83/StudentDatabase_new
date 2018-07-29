#pragma once

#include "Person.hpp"

class Student: public Person
{


public:
    Student(std::string, std::string, long int, std::string, std::string, int, float);
    
    float getSalary();
    void showAll() override;
    int getId() override;
};
