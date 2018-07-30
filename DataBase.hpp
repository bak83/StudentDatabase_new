#pragma once

#include "Person.hpp"
#include "Student.hpp"
#include "Employee.hpp"

#include <vector>

class DataBase
{
    std::vector<Person*> dataBase;

 public:
    void addNewPerson(Person*);
    void displayPersonList();
    void saveToFile();
    void loadFile();
    void sortStudentsByIndex();
    void sortBySurname();
    void sortByPesel();
    void sortByEarnings();
    void removeStudentByIndex(int);
    void generateBase();   
    Person* getPerson(size_t) const;
    bool checkPesel(std::string);
};


