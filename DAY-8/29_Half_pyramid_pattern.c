//WAP TO PRINT HALF PYRAMID PATTERN.

#include<stdio.h>
int main(){
    int n, i, j;

    printf("Enter the number: ");
    scanf("%d", &n);

    for(i = 1 ; i<= n; i++){     //COLUMNS
        for(j = 1 ; j<= i; j++){     //ROWS
            printf("* ");
        }printf("\n");
    }
    return 0;
}