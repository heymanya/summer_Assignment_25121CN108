//WAP TO SUBTRACT MATRICES.

#include<stdio.h>
int main(){
    int n, m ;

    printf("Enter the number of rows:");
    scanf("%d", &n);

    printf("Enter the number of columns:");
    scanf("%d", &m);

    int a[n][m] , b[n][m] , c[n][m];

    printf("Enter the elements of the first matrix:");      //FIRST MATRIX
    for(int i=0; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:");      //SECOND MATRIX
    for(int i=0; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j< m ; j++){
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Difference of the two matrices:\n");      //DIFFERENCE OF BOTH MATRICES
    for(int i=0; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}