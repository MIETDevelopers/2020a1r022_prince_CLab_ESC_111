#include<stdio.h>
#include<stdlib.h>

void input_mat(int *m,int r,int c){
    int i,j;
 for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("Enter value at[%d][%d]", i, j);
        scanf("%d",(m +i*c+j));
    }
  }
}
void multiply(int *m1,int *m2,int *product, int r1,int c1,int r2, int c2){
    int i,j,k;
for (i = 0; i < r1; i++){
        for (j = 0; j < c2; j++){
            *(product + i*c2+j)= 0;
            for (k = 0; k < r2; k++){
                *(product + i*c2+j) += *(m1+i*r2+k) * *(m2+k*c2+j);
            }
        }
    }
}
void output_mat(int *m,int r,int c){
    int i,j;
 for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            printf("%d  ", *(m+i*c+j));
        }
        printf("\n");
    }
}

int main()

{
    int *a, *b, *c;
    int r1, c1, r2, c2;
    printf("\t\t\t Matrix Multiplication using Dynamic Memory Allocation \n");
    printf(" Enter the number of rows and columns for matrix 1 : \n");
    scanf("%d %d", &r1, &c1);
    printf("\n Enter the number of rows and columns for matrix 2 : \n ");
    scanf("%d %d", &r2, &c2);
    // checking if matrices are of the right order
    if(c1 != r2)
    {
        printf("\n Matrices cannot be multiplied!!");
    }
    else
    {
              // allocating memory
        a = (int *)malloc((r1*c1)*sizeof(int));
        b = (int *)malloc((r2*c2)*sizeof(int));
        c = (int *)malloc((r1*c2)*sizeof(int)); /* product matrix is of the order r1*c2 */
        printf("\n Enter elements : \n");
        printf("\t Matrix 1 \n");
        input_mat(a, r1, c1);
        printf("\t Matrix 2 \n");
        input_mat(b, r2, c2);
        multiply(a, b, c, r1, c1, r2, c2);
        printf("\t Product Matrix \n");
        output_mat(c,r1, c2);
    }
    
    return 0;
}
