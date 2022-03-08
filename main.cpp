
#include <iostream>
#include<fstream>

#include "mylib.h"

using namespace std;
//---------------------------------------------------------------
#define NUM_RANGE(x, y) ((x >= 0 && x < y) ? "true" : "false")

inline void task_2()
{
    int num;
    std::cin >> num;
    std::cout << NUM_RANGE(num, 20) << std::endl;
}

//--------------------------------------------------------------------

#define ARRAY_SIZE 10


inline void task_3()
{
    int* array = new (nothrow) int[ARRAY_SIZE];

    if (array != nullptr)
    {
        cout << "Enter " << ARRAY_SIZE << " number: " << std::endl;

        for (size_t i = 0; i < ARRAY_SIZE; i++)
        {
            std::cin >> array[i];
        }

        Mylib::sortingDar(array, ARRAY_SIZE);
        Mylib::printDar(array, ARRAY_SIZE);

        delete[] array;
    }
}

//----------------------------------------------------------------------

#pragma pack()
struct Staff
{
    long personalNumber;
    string surname, name, patronymic;
    int age;
    int incomingDate;
    float salary;
};

void printStaff(Staff* st)
{
    if (st != nullptr)
    {
        std::cout << "PersonalNumber" << st->personalNumber << std::endl;
        std::cout << st->surname << " " << st->name << st->patronymic << ": " << st->age << std::endl;
        std::cout << "Incoming Date:" << st->incomingDate << "year" << std::endl;
        std::cout << "Salary: BYN" << st->salary << std::endl;

        std::cout << "Size: " << sizeof(Staff) << " Byte." << std::endl;
    }
}

  void staff_txt(const string & Sname, Staff * st)
    {
      ofstream fout(Sname);

      if (st == nullptr)
          return;
      if (fout.is_open())
      {
          fout << "Staff(PersonalNumber:" << st->personalNumber << "Surname:" << st->surname << "Name:" << st->name << "Patronyic:" << st->patronymic;
          fout << "Age:" << st->age << "Incoming date:" << st->incomingDate << "Salary:" << st->salary << std::endl;

          fout.close();
      }
      else
      {
          std::cout << "Open file" << std::endl;
      }
    }

  inline void task_4()
  {
      Staff* st = new (nothrow) Staff;
      if (st != nullptr)
      {
          st->personalNumber = 1;
          st->surname = "Ausiannikau";
          st->name = "Ilya";
          st->patronymic = "Yurievich";
          st->age = 24;
          st->incomingDate =22'02'2022;
          st->salary = 50'000;

          printStaff(st);
          staff_txt("Staf.txt", st);
          delete st;
      }
  }


int main()
{
    task_2;
    task_3;
    task_4;
    return 0;

}

