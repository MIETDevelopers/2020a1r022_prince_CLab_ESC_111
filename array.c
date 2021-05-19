#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,extend;

    printf("Enter n\n");
    scanf("%d",&n);
    int *ptr = (int *)calloc(n , sizeof(int));

    for(int i =0;i<n;i++){
        ptr[i] = i+1;
    }
    for(int i =0;i<n;i++){
            printf("%d\n",ptr[i]);
    }
    printf("Enter the number of  elements you want to increase:\n");
    scanf("%d",&extend);
    ptr = realloc(ptr, extend * sizeof(int));
    for(int i =0;i<n+extend;i++){
        ptr[i] = i+1;
    }
    for(int i =0;i<n+extend;i++){
            printf("%d\n",ptr[i]);
    }
    free(ptr);
    return 0;

}