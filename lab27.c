#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr1, *arr2;
    int n, N, add, i, sum = 0;
    printf("\t\t\t Dynamic Memory Allocation \n");
    printf("How many numbers do you want to enter? \n");
    scanf("%d", &n);
    // allocating memory for n integers
    arr1 = (int *)malloc(n * sizeof(int));
    if(arr1 == NULL){
    printf("Memory cannot be allocated!");
    }else{
            for(i=0; i<n; i++){
            printf("Enter element at arr1[%d] \n", i);
            scanf("%d", (arr1+i));
            }
            printf("\n Entered numbers are...\n");
            for(i=0; i<n; i++){
            printf("%d ",*(arr1+i));
         }
    }
    printf("\n How many numbers do you want to know the sum of? \n");
    scanf("%d", &N);
    // allocating memory for N integers
    arr2 = (int *)calloc(N, sizeof(int));
    if(arr2 == NULL){
    printf("Memory cannot be allocated!");
    }else{
            for(i=0; i<N; i++){
                 printf("Enter element at arr2[%d] \n", i);
                 scanf("%d", (arr2+i));
                 sum = sum + *(arr2+i);
            }
            printf("Sum of the elements is : %d", sum);
        }
        printf("\n How many more numbers do you want to add? \n");
        scanf("%d", &add);
        // reallocation of memory
        arr2 = realloc(arr2, (N*sizeof(int)+add));
        for(i=0; i<N+add; i++){
             printf("Enter element at arr2[%d] \n", i);
             scanf("%d", (arr2+i));
             sum = sum + *(arr2+i);             
        }
        printf("Sum of the elements is : %d", sum);
        // freeing memory
        free(arr1);
        free(arr2);
    return 0;
}
