#include <stdio.h>
#include <conio.h>

int main()
{
  int i,num,n,max=0;
  printf("How many numbers: ");
  scanf("%d",&n); 
  for(i=0; i<n; i++)
  {
    //get each number
    printf("\nEnter number %d: ",i+1);
    scanf("%d",&num);
    if(num>max)
    max=num;
  }
  printf("\nThe Largest number is %d",max); //output
  getch();
  return 0;
}
