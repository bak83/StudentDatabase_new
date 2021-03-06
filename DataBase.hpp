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
    void sortBySalary();
    void removeByPesel(std::string);
    void changeAddressByPesel(std::string, std::string);
    void changeSalaryByPesel(std::string, float);
    void generateBase(int);
    Person* getPerson(size_t) const;
    bool checkPesel(std::string);
};


