#pragma once

#include <iostream>
#include <string>

class Person
{
    std::string name;
    std::string surname;
    long int pesel;
    std::string sex;
    std::string address;
    int index;
    float salary;

public:
    Person(std::string, std::string, long int, std::string, std::string, int, float);
    

    std::string getName() const;
    std::string getSurname() const;
    long int getPesel() const;
    std::string getSex() const;
    std::string getAddress() const;
    int getIndex() const;
    float getSalary() const;
    
    virtual void showAll() = 0;
    virtual int getId() = 0;
};
