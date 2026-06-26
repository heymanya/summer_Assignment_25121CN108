//WAP TO CREATE VOTING ELIGIBILITY SYSTEM.

#include<stdio.h>

int main(){
    int age;

    printf("V O T I N G   E L I G I B I L I T Y    S Y S T E M -----> \n");
    printf("Enter your age:");
    scanf("%d" , &age);

    if(age >= 18){
        printf("You are ELIGIBLE to vote.");
    }
    else{
        printf("You are NOT ELIGIBLE to vote.");
    }

    return 0;
}