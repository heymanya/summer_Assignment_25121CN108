//WAP TO PRINT HOLLOW SQUARE PATTERN.

#include<stdio.h>
int main(){
    int n, i, j, k;

    printf("Enter the number:");
    scanf("%d", &n);

    for(i =1 ; i<= n; i++){    //COLUMNS
        for(j = 1; j<= n; j++){     //ROWS
            
            if(i==1 || i==n || j==1 || j==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }printf("\n");
    }
    return 0;
}