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
protected:
    int index;
    float salary;

public:
    Person(std::string, std::string, std::string, std::string, std::string, int, float);
    Person(std::string);
    int checkPesel();
    std::string getName() const;
    std::string getSurname() const;
    std::string getPesel() const;
    std::string getSex() const;
    std::string getAddress() const;
    virtual int getIndex() = 0;
    virtual float getSalary() = 0;
    void setAddress(std::string);   
    void setSalary(float);
    virtual void showAll() = 0;
    std::string toString() const;
};
