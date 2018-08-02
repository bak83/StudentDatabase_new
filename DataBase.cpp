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
    std::string pe = r->getPesel();
    try{
        if (checkPesel(pe)) {dataBase.push_back(r);}
        else {throw std::invalid_argument("Invalid PESEL number ");}
    }catch(std::invalid_argument& e)
        {
            std::cout << e.what() << std::endl;
        }

    }

bool DataBase::checkPesel(std::string p)
{
    std::string pesel = p;
    int sum;
    if (pesel.size()==11){
        sum = pesel[0] * 1 + pesel[1] * 3 + pesel[2] * 7 + pesel[3] * 9 + pesel[4] + pesel[5] * 3 + pesel[6] * 7 + pesel[7] * 9 + pesel[8] + pesel[9] * 3 + pesel[10];
        sum %=10;
    }
    else return false;
    if (sum == 0) return true;
    else return false;

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

void DataBase::sortBySalary()
{
    std::sort(dataBase.begin(), dataBase.end(), [](Person* p1, Person* p2)
    {
        return p1->getSalary() < p2->getSalary();
    });
}


void DataBase::removeByPesel(std::string pe)
{
    for (int i = 0; i < dataBase.size(); ++i) {
        if (dataBase.at(i)->getPesel() == pe) {
            dataBase.erase(dataBase.begin()+i);
            break;
        }
    }
}

void DataBase::changeAddressByPesel(std::string pe, std::string n)
{ std::string newAddress = n;
     for (int i = 0; i < dataBase.size(); ++i) {
        if (dataBase.at(i)->getPesel() == pe) {
            dataBase[i]->setAddress(newAddress);
            dataBase[i]->getAddress();
            break;
        }
    }
}


void DataBase::changeSalaryByPesel(std::string pe, float s)
{ float newSalary = s;
     for (int i = 0; i < dataBase.size(); ++i) {
        if (dataBase.at(i)->getPesel() == pe) {
            
            if ((dataBase.at(i)->getSalary()) >= 0) {
                dataBase[i]->setSalary(newSalary);
                dataBase[i]->getSalary();
                break;

             } else dataBase[i]->getSalary();

        }
    }
}


void DataBase::saveToFile()
{
    std::fstream file;
    file.open("Base.txt", std::ios::out);
 if(!file.is_open())
     throw std::runtime_error("Unable to open");
 else{
    for (int i = 0; i < dataBase.size(); ++i) {
        
            file << dataBase[i]->getName() << "|"
                 << dataBase[i]->getSurname() << "|"
                 << dataBase[i]->getPesel() << "|"
                 << dataBase[i]->getAddress() << "|"
                 << dataBase[i]->getIndex() << "|"
                 << dataBase[i]->getSalary() << "|"
                 << std::endl;
        }

    file.close();
    }
}
/*
void DataBase::loadFile()
{
    std::fstream file;
    file.open("Base.txt", std::ios::in);
    file.open("Base.txt", std::ios::out);
    if(!file.good())
         throw std::runtime_error("Unable to open");
    else{
        std::string line;
        std::string indivString;
        char separator = '|';
        std::vector<std::string> strVec;

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        while (std::getline(ss, indivString, separator)) {
            strVec.push_back(indivString);
        }
        Person* Ptr = new Person(strVec[0], strVec[1], strVec[2], strVec[3], strVec[4], strVec[5]);
        addNewPerson(Ptr);
        strVec.clear();
    }

    file.close();
    }
}

*/
void DataBase::generateBase(int counter)

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

    file.open("surname.txt", std::ios::in);

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

    file.open("PESEL.txt", std::ios::in);

    if (file.good() == false)
    {
        std::cout << "File not exist" << std::endl;
        exit(0);
    }
     std::vector<std::string> PESEL;
     std::string line3;

     while (getline(file,line3))
         PESEL.push_back(line3);
     file.close();

     file.open("street.txt", std::ios::in);

     if (file.good() == false)
     {
         std::cout << "File not exist" << std::endl;
         exit(0);
     }
      std::vector<std::string> street;
      std::string line4;

      while (getline(file,line4))
          street.push_back(line4);
      file.close();

      file.open("city.txt", std::ios::in);

      if (file.good() == false)
      {
          std::cout << "File not exist" << std::endl;
          exit(0);
      }
       std::vector<std::string> city;
       std::string line5;

       while (getline(file,line5))
           city.push_back(line5);
       file.close();

    for (int i = 0;i < counter;i++)
    std::cout << i+1 << ". " << surname[(std::rand() % 85)+1] << " " << name[(std::rand() % 500)+1]
              << " " << PESEL[(std::rand() % 85)+1]<< " ul." << street[(std::rand() % 75)+1]
              << " " << (std::rand() % 75)+1 << "/" << (std::rand() % 75)+1 << " " << (std::rand() % 99)+1
              << "-" << (std::rand() % 999)+100 << " " << city[(std::rand() % 70)+1] << std::endl;
    file.close();
}

Person* DataBase::getPerson(size_t position) const
{
    return dataBase[position];
}
