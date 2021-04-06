#include <stdio.h>
#include <string.h>

int main()
{
    char string[50];
    int i, length, temp=0;
    
    printf("\nEnter a string:");
    scanf("%s", string);
    
    length = strlen(string);
    
    for(i=0; i < length ; i++){
        if(string[i] != string[length-i-1]){
            temp = 1;
            break;
   }
}
    
    if (temp == 1){
        printf("%s is not a palindrome", string);
    }    
    else {
        printf("%s is a palindrome", string);
    }
    return 0;
}
