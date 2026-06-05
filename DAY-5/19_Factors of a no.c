//WAP TO PRINT FACTORS OF A NUMBER.

#include<stdio.h>
int main(){
    int num ; 

    printf("Enter the number:");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    for(int i= 1; i<= num; i++){
        if(num % i == 0){      
            printf("%d , ", i);    //i ----> factors
        }
    }

    return 0;
}