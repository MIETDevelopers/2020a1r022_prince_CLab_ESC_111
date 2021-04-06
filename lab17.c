#include<stdio.h>

int main(){

   int n, temp, i, j, arr[30];

   printf("number of elements\n");
   scanf("%d",&n);

   printf("Enter %d numbers\n",n);

   for(i=0;i<n;i++)
   
   scanf("%d",&arr[i]);
   
   for(i=n-2;i>=0;i--){
      for(j=0;j<=i;j++){
        if(arr[j]>arr[j+1]){
           temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;
        }
      }
   }

   printf("Sorted elements\n");
   for(i=0;i<n;i++)
    
		printf(" %d",arr[i]);
	
   return 0;
}