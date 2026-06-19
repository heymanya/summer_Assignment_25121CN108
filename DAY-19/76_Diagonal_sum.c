//WAP TO FIND DIAGONAL SUM.

#include<stdio.h>
int main(){
    int n;

    printf("Enter the order of the square matrix:");
    scanf("%d", &n);

    int a[n][n], sum=0 ;

    printf("Enter the elements of the matrix:\n");
    for(int i=0 ; i< n ; i++){
        for(int j=0 ; j<n ; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0 ; i<n ; i++){
        sum = sum + a[i][i];
    }

    printf("Sum of diagonal elements: %d", sum);

    return 0;
}