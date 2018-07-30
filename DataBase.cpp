#include "DataBase.hpp"

#include <algorithm>
#include <typeinfo>
#include <typeindex>
#include <fstream>
#include <cstdlib>
#include <sstream>
#include <ctime>
#include <stdexcept>


void DataBase::addNewPerson(Person* r)
{
    dataBase.push_back(r);
 //   int peselError = r->checkPesel();
 //   if(peselError > 0) throw std::invalid_argument("Invalid PESEL number");
}

void DataBase::displayPersonList()
{
    std::cout << "BAZA DANYCH:" << std::endl;
    for (int i = 0; i < dataBase.size(); ++i) {
        std::cout << i+1 << ". ";
        dataBase.at(i)->showAll();
    }
}

void DataBase::sortStudentsByIndex()
{
    std::sort(dataBase.begin(), dataBase.end(), [](Person* p1, Person* p2) {
       return p1->getIndex() < p2->getIndex();
    });

}

void DataBase::sortBySurname()
{
    std::sort(dataBase.begin(), dataBase.end(), [](Person* p1, Person* p2) {
       return p1->getSurname() < p2->getSurname();
    });
}

void DataBase::sortByPesel()
{
    std::sort(dataBase.begin(), dataBase.end(), [](Person* p1, Person* p2) {
       return p1->getPesel() < p2->getPesel();
     });
}
void DataBase::removeStudentByIndex(int idx)
{
    for (int i = 0; i < dataBase.size(); ++i) {
        if (dataBase.at(i)->getId() == 1 &&
                dynamic_cast<Student*>(dataBase.at(i))->getIndex() == idx) {

            dataBase.erase(dataBase.begin()+i);
            break;
        }
    }
}


void DataBase::saveToFile()
{
    std::fstream file;
    file.open("Base.txt", std::ios::out);

    for (int i = 0; i < dataBase.size(); ++i) {
        if (dataBase.at(i)->getId() == 1) {
            file << "S" << "," << dataBase[i]->getName() << ","
                 << dataBase[i]->getSurname() << ","
                 << dynamic_cast<Student*>(dataBase.at(i))->getIndex() << ","
                 << std::endl;
        }
        else if (dataBase.at(i)->getId() == 2) {
            file << "E" << "," << dataBase[i]->getName() << ","
                 << dataBase[i]->getSurname() << ","
                 << dynamic_cast<Employee*>(dataBase.at(i))->getSalary() << std::endl;
        }
    }

    file.close();
}
/*
void DataBase::loadFile()
{
    std::fstream file;
    file.open("Base.txt", std::ios::in);

    if (file.good() == false)
    {
        std::cout << "File not exist" << std::endl;
        exit(0);
    }
    std::vector<Person*> fileDataBase;  // baza danych tylko z pliku

    std::string line;
    std::string indivString;
    char separator = ',';
    std::vector<std::string> strVec;

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        while (std::getline(ss, indivString, separator)) {
            strVec.push_back(indivString);
        }
        if (strVec[0] == "S") {
            int indexNum = std::stoi(strVec[3]);
            Student* studentPtr = new Student(strVec[1], strVec[2], indexNum);
            addNewPerson(studentPtr);
            fileDataBase.push_back(studentPtr);
        }
        else if (strVec[0] == "E") {
            int salaryNum = std::stoi(strVec[3]);
            Employee* employeePtr = new Employee(strVec[1], strVec[2], salaryNum);
            addNewPerson(employeePtr);
            fileDataBase.push_back(employeePtr);
        }
        strVec.clear();
    }

    file.close();
    std::cout << "BAZA DANYCH Z PLIKU:" << std::endl;
    for (int i = 0; i < fileDataBase.size(); ++i) {
        std::cout << i+1 << ". ";
        fileDataBase.at(i)->showAll();
    }
}


void DataBase::generateBase()

{
    std::cout << "BAZA DANYCH LOSOWA" << std::endl;
   srand (time(NULL));

   std::fstream file;
   file.open("name.txt", std::ios::in);

   if (file.good() == false)
   {
       std::cout << "File not exist" << std::endl;
       exit(0);
   }
    std::vector<std::string> name;
    std::string line;

    while (getline(file,line))
        name.push_back(line);
    file.close();

    file.open("name.txt", std::ios::in);

    if (file.good() == false)
    {
        std::cout << "File not exist" << std::endl;
        exit(0);
    }
     std::vector<std::string> surname;
     std::string line2;

     while (getline(file,line2))
         surname.push_back(line2);
     file.close();

    for (int i = 0;i<5;i++)
    std::cout << i+1 << ". " << surname[(std::rand() % 85)+1] << " " << name[(std::rand() % 500)+1] << std::endl;
    file.close();
}
*/
Person* DataBase::getPerson(size_t position) const
{
    return dataBase[position];
}
