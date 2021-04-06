#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[30];
    float percentage;
};

int main()
{
    int i;
    struct student record[3];

    record[0].id = 1;
    strcpy(record[0].name, "abc");
    record[0].percentage = 98.0;

    record[1].id = 2;
    strcpy(record[1].name, "pqr");
    record[1].percentage = 96;

    record[2].id = 3;
    strcpy(record[2].name, "xyz");
    record[2].percentage = 94;

    for (i = 0; i < 3; i++)
    {
        printf(" Records of STUDENT : %d \n", i + 1);
        printf(" Id is: %d \n", record[i].id);
        printf(" Name is: %s \n", record[i].name);
        printf(" Percentage is: %f\n\n", record[i].percentage);
    }
    return 0;
}
