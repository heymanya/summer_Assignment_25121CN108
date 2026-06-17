//WAP TO PRINT STAR PYRAMID.

#include<stdio.h>
int main(){
    int n, i, j;

    printf("Enter the number:");
    scanf("%d", &n);

    for(i= 1; i<n; i++){
        for(j= 1; j <= n-i; j++){ //PRINT SPACE
            printf(" ");

        }
        for(j =1 ; j<= 2*i -1; j++){ //PRINT STARS
            printf("*");
        }
        printf("\n");
    }
    return 0;
}