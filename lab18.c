#include<stdio.h>
int main()
{
    int arr[20], n, i, element, index = -1;
    printf("\t\t\t Linear Search \n");
    printf("Enter array size(maximum 20) : \n");
    scanf("%d", &n);
    // input array
    for(i=0; i<n; i++){
        printf("Enter element %d :", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n Enter the element you want to search : \n");
    scanf("%d", &element);
    // Linear Search
    for(i=0; i<n; i++){
        if(arr[i]== element){
        index = i;
        break;
        }
    }
    if(index == -1){
    printf("Given element could not be found!");
    }else{
        printf("\n Given element found at...");
        printf("\n Index : %d", index);
        printf("\n Position : %d", index + 1);
    }
    return 0;
}
