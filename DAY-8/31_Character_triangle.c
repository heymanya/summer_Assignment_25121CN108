//WAP TO PRINT CHARACTER TRIANGLE.

#include<stdio.h>
int main(){
    int n, i , j;

    printf("Enter the number:");
    scanf("%d", &n);

    for(i = 1; i<= n; i++){
        for(j = 1; j<= i; j++){
            printf("%c ", 64+j);    //'A' = 65
          }printf("\n");
    }

    return 0;
}