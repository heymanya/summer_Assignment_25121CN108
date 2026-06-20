//WAP TO MULTIPLY MATRICES.

#include<stdio.h>
int main(){
    int n, m , p;

    printf("Enter the number of rows of 'a':");
    scanf("%d", &n);

    printf("Enter the number of columns of 'a' / rows of 'b':");
    scanf("%d", &m);

    printf("Enter the number of columns of 'b': ");
    scanf("%d", &p);

    int a[n][m] , b[m][p] , c[n][p];

    printf("Enter the elements of the first matrix:\n");     //FIRST MARTIX
    for(int i=0; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");     //SECOND MATRIX
    for(int i=0; i<m ; i++){
        for(int j=0 ; j<p ; j++){
            printf("b[%d][%d] = ", i ,j);
            scanf("%d", &b[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int k = 0; k < p; k++){
            c[i][k] = 0;       //INITIALIZING THE NEW MATRIX
        }    
    }    

    for(int i=0 ; i<n ; i++){       
        for(int j=0 ; j< m ; j++){
            for(int k=0 ; k<p ; k++){
                c[i][k] += a[i][j] * b[j][k] ;
            }
        }
    }

    printf("Multiplication of the two matrices:\n");     //MULTIPLICATION OF BOTH MATRICES
    for(int i=0; i<n ; i++){
        for(int k=0 ; k<p ; k++){
            printf("%d\t", c[i][k]);
        }
        printf("\n");
    }
    return 0;
}