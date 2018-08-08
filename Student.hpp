#pragma once

#include "Person.hpp"

class Student: public Person
{


public:
    Student(std::string, std::string, std::string, std::string, std::string, int, float);
    Student (std::string);   
    int getIndex() override;
    float getSalary() override; 
    void showAll() override;
    std::string toString() override;
        
};
