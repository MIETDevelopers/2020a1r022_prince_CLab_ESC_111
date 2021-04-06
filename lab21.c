#include <stdio.h>

int main()

{
    char name[20];
    printf("Enter name:\n");
    scanf("%s", name);
    printf("name of 1st person is %s.\n", name);
    printf("---------------\n");
    char name2[30];
    printf("Enter name2:\n");
    scanf("%s", name2);
    fgets(name, sizeof(name2), stdin);  
    printf("Name of 2nd person is:\n");
    puts(name2); 

    return 0;
    
}