//WAP TO PRINT REVERSE NUMBER TRIANGLE.

#include<stdio.h>
int main(){
    int n , i, j;

    printf("Enter the number:");
    scanf("%d", &n);

    for(i = n; i >= 1; i--){   //COLUMNS
        for(j = 1; j <= i; j++){   //ROWS
            printf("%d ", j);
        }printf("\n");
    }

    return 0;
}