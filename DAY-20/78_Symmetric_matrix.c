//WAP TO CHECK SYMMETRIC MATRIX.

#include<stdio.h>
int main(){
    int n, i,j ;

    printf("Enter the order of the square matrix:");
    scanf("%d", &n);

    int a[n][n];
    
    printf("Enter the elements of the matrix:\n");      //ORIGINAL(input) MATRIX
    for(int i=0; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(a[i][j] != a[j][i]){
                printf("Not Symmetric matrix.");
                return 0;
            } 
        }
    }

    printf("Symmetric matrix.");

    return 0;
}