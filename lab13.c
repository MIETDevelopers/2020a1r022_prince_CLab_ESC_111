#include<stdio.h>

int main()

{
      int num,i=1,c=0;
      //to check if a number is prime or not
      printf("Enter Number\n");
      scanf("%d",&num);
      while(i<=num)
      {
            if(num%i==0)
            c++;
            i++;
      }
      if(c==2)
            printf("%d is Prime Number\n",num);
      else
            printf("%d is Not Prime Number\n",num);
      return 0;
      
}