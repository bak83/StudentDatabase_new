#include "DataBase.hpp"

 #include <iostream>

int main()
{
    DataBase base;

    Student s1("Adam", "Malysz", 97021079971, "male", "ulica nr 4, 55-440 Wroclaw", 234398);
    Student s2("Tadeusz", "Bocian", 82041738371, "male", "Kwiatowa nr 5, 44-098 Wroclaw", 225587);
    Student s3("Monika", "Czajkowska", 98112759941, "famele", "Cukierkowa nr 6, 55-000 Wroclaw", 223509);

    Employee e1("Elzbieta", "Krol", 53121246743, "female", "Rozana nr 3, 55-000 Wroclaw", 3740);
    Employee e2("Roman", "Czarny", 95032514191, "male", "Czekoladowa nr 2, 44-500 Wrolaw", 3565);

    base.addNewPerson(&s1);
    base.addNewPerson(&e2);
    base.addNewPerson(&s2);
    base.addNewPerson(&e1);
    base.addNewPerson(&s3);

    base.displayPersonList();

    base.removeStudentByIndex(225587);

    base.displayPersonList();

    base.sortStudentsByIndex();

    base.displayPersonList();

    base.sortBySurname();

    base.displayPersonList();

    base.sortByPesel();

    base.displayPersonList();
    
   // base.saveToFile();

   // base.loadFile();

    return 0;
}
