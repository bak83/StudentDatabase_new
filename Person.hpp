#pragma once

#include <iostream>
#include <string>

class Person
{
    std::string name;
    std::string surname;
    int pesel;
    std::string sex;
    std::string address;

public:
    Person(std::string, std::string, int, std::string, std::string);

    std::string getName() const;
    std::string getSurname() const;
    int getPesel() const;
    std::string getSex() const;
    std::string getAddress() const;
    int getEarnings() const;

    virtual void showAll() = 0;
    virtual int getId() = 0;
};
