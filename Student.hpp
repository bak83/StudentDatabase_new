#pragma once

#include "Person.hpp"

class Student: public Person
{


public:
    Student(std::string, std::string, std::string, std::string, std::string, int, float);
   
    int getIndex() override;
    float getSalary() override; 
    void showAll() override;
};
