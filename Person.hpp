#pragma once

#include <iostream>
#include <string>

class Person
{
    std::string name;
    std::string surname;
    std::string pesel;
    std::string sex;
    std::string address;
    int index;
    float salary;

public:
    Person(std::string, std::string, std::string, std::string, std::string, int, float);

    int checkPesel();
    std::string getName() const;
    std::string getSurname() const;
    std::string getPesel() const;
    std::string getSex() const;
    std::string getAddress() const;
    int getIndex() const;
    float getSalary() const;
    
    virtual void showAll() = 0;
    virtual int getId() = 0;
};
