#pragma once

#include "Person.hpp"

class Student: public Person
{
    int index;


public:
    Student(std::string, std::string, int, std::string, std::string, int);

    int getIndex() const;

    void showAll() override;
    int getId() override;
};
