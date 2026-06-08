//WAP TO PRINT REPEATED CHARACTER PATTERN.

#include<stdio.h>
int main(){
    int n, i , j;

    printf("Enter the number:");
    scanf("%d", &n);

    for(i = 1; i<= n; i++){   //COLUMNS
        for(j = 1; j<= i; j++){    //ROWS
            printf("%c ", 64+i);    //'A' = 65
          }printf("\n");
    }

    return 0;
}