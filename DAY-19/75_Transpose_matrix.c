//WAP TO TRANSPOSE MATRIX.

#include<stdio.h>
int main(){
    int n, m ;

    printf("Enter the number of rows:");
    scanf("%d", &n);

    printf("Enter the number of columns:");
    scanf("%d", &m);

    int a[n][m];

    printf("Enter the elements of the matrix:\n");      //ORIGINAL(input) MATRIX
    for(int i=0; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Transpose of the matrix:\n");      //TRANSPOSE MATRIX
    for(int i=0; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}