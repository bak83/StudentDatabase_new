#include "DataBase.hpp"

#include <iostream>
#include <stdexcept>
int main()
{
    DataBase base, base2, base3;

    Student* s1 = new Student("Adam", "Malysz", "97721079971", "male", "ulica nr 4, 55-440 Wroclaw", 234398, 0.0);
    Student* s2 = new Student("Tadeusz", "Bocian", "82041738371", "male", "Kwiatowa nr 5, 44-098 Wroclaw", 225587, 0.0);
    Student* s3 = new Student("Monika", "Czajkowska", "98112759941", "famele", "Cukierkowa nr 6, 55-000 Wroclaw", 223509, 0.0);

    Employee* e1 = new Employee("Elzbieta", "Krol", "53121246743", "female", "Rozana nr 3, 55-000 Wroclaw",0, 3740);
    Employee* e2 = new Employee ("Roman", "Czarny", "95032514191", "male", "Czekoladowa nr 2, 44-500 Wrolaw",0, 3565);

    base.addNewPerson(s1);
    base.addNewPerson(e2);
    base.addNewPerson(s2);
    base.addNewPerson(e1);
    base.addNewPerson(s3);
    base.displayPersonList();
    
    base.changeAddressByPesel("95032514191", "Kraina baśni 9, 99-000 Iksowo");
    base.displayPersonList();

   
    base.changeSalaryByPesel("95032514191", 2345.09);
    base.displayPersonList();


    base.removeByPesel("98112759941");
    base.displayPersonList();

    base.sortStudentsByIndex();
    base.displayPersonList();

    base.sortBySurname();
    base.displayPersonList();

    base.sortByPesel();
    base.displayPersonList();
    
 //   base.saveToFile();

   // base.loadFile();

    base3.generateBase(6);
    base3.displayPersonList();

    delete s1, s2, s3, e1, e2;
    return 0;
}
