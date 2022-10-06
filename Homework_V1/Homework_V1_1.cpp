#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <memory.h>
#include <iostream>
using namespace std;

struct student
{
    char famil[20];
    char name[20];
    char facult[20];
    char nomzach[20];
};
void outputData(student stud);

int main(void)
{
    student stud[3];
    string inputData;
    int i;

    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    system("chcp 1251");

    for (i = 0; i < 3; i++)
    {
        printf("¬ведите фамилию студента\n"); scanf("%20s", stud[i].famil);
    }
    for (i = 0; i < 3; i++)
    {
        printf("¬ведите им€ студента %s\n", stud[i].famil); scanf("%20s", stud[i].name);
    }
    for (i = 0; i < 3; i++)
    {
        printf("¬ведите название факультета студента %s %s\n", stud[i].famil, stud[i].name); scanf("%20s", stud[i].facult);
    }
    for (i = 0; i < 3; i++)
    {
        printf("¬ведите номер зачЄтной книжки студента %s %s\n", stud[i].famil, stud[i].name); scanf("%s", &stud[i].nomzach);
    }

    cin >> inputData;
    for (i = 0; i < 3; i++) {
        if (stud[i].famil == inputData) {
            outputData(stud[i]);
        }
        else if (stud[i].name == inputData) {
            outputData(stud[i]);
        }
        else if (stud[i].facult == inputData) {
            outputData(stud[i]);
        }
        else if (stud[i].nomzach == inputData) {
            outputData(stud[i]);
        }
    }
}
void outputData(student stud) {
    printf("Cтудент %s %s обучаетс€ на факультете %s, номер зачЄтной книжки %s \n", stud.famil, stud.name,
        stud.facult, stud.nomzach);
}