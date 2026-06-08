//WAP TO PRINT REVERSE STAR PATTERN.

#include<stdio.h>
int main(){
    int n, i , j;

    printf("Enter the number:");
    scanf("%d", &n);

    for(i = n; i >= 1; i--){   //COLUMNS
        for(j = i; j >= 1; j--){    //ROWS
            printf("* ", j);
        }printf("\n");
    }

    return 0;
}