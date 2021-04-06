#include<stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10], r1, r2, c1, c2, i,j,k;
    printf("\t\t\t Matrix Multiplication \n");
    // input number of rows and columns
    printf("Enter the number of rows and columns for matrix 1: \n");
    scanf("%d %d", &r1, &c1);
    printf("\n Enter the number of rows and columns for matrix 2: \n");
    scanf("%d %d", &r2, &c2);
    if(c1 == r2){
        printf("\n Enter elements of matrix 1 \n");
        for(i=0; i<r1; i++){
            for(j=0; j<c1; j++){
                scanf("%d", &a[i][j]);
            }
        }
        printf("\n Enter elements of matrix 2 \n");
        for(i=0; i<r2; i++){
            for(j=0; j<c2; j++){
                scanf("%d", &b[i][j]);
            }
        }
        // Matrix Multiplication
        for(i=0; i<r1; i++){
            for(j=0;j<c2; j++){
                c[i][j] =0;
                for(k=0; k<c1; k++)
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
        // Output matrix
         printf("\n The product of the two matrices is: \n");
        for(i=0; i<r1; i++){
            for(j=0; j<c2; j++){
                printf("%d \t", c[i][j]);
            } printf("\n");
        }
    }else
    printf("Matrices cannot be multiplied.");
    return 0;
}
