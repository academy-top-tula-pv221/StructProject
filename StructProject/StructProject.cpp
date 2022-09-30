#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


void ArrayPrint(int* array, int size);

struct DArray
{
    int* items;
    int size;
};

void DArrayPrint(DArray array);

struct Date
{
    int day;
    int month;
    int year;
};

struct Employe
{
    char name[50];
    float salary;
    Date birthDate;
    int kpi;
};

void Func(Employe e)
{

}


int main()
{
    int num;
    int array[10];
    int* ptr;

    Employe employe;

    std::cout << sizeof(employe) << "\n";

    employe.birthDate.day = 4;
    employe.birthDate.month = 10;
    employe.birthDate.year = 1998;

    strcpy(employe.name, "Bobby");
    employe.salary = 56476.5;

    Employe group[3];

    group[0].age = 33;
    strcpy(group[0].name, "Sam");
    group[0].salary = 30256;

    group[1].age = 44;
    strcpy(group[1].name, "Joe");
    group[1].salary = 23457;

    group[2].age = 22;
    strcpy(group[2].name, "Bob");
    group[2].salary = 54098;

    for (int i = 0; i < 3; i++)
    {
        int minIndex = i;
        for (int j = i; j < 3; j++)
        {

            if (group[j].age < group[minIndex].age)
                minIndex = j;
        }
            
        
        Employe temp = group[i];
        group[i] = group[minIndex];
        group[minIndex] = temp;
    }



    return 0;
}
