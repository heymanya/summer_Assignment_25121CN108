//WAP TO PRINT REVERSE PYRAMID.

#include<stdio.h>
int main (){
    int n, i, j;

    printf("Enter the number:");
    scanf("%d", &n);

    for(i=1 ; i<= n; i++){ //rows
        for(j=1; j<= i-1 ; j++){  //PRINT SPACE(column)
            printf(" ");
        }
        for(j= 1 ; j<= 2*(n-i) + 1; j++){  //PRINT STARS(column)
            printf("*");
        }
        printf("\n");
    }
    return 0;
}