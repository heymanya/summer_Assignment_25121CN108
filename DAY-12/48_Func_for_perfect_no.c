//WAP TO WRITE FUNCTION FOR PERFECT NUMBER.

#include<stdio.h>

int isperfect(int a);  //FUNCTION DECLARATION

int main(){
    int num; 

    printf("Enter the number of terms:");
    scanf("%d", &num);

    if(isperfect(num)){  //FUNCTION CALL
        printf("%d is a PERFECT number", num);
    }
    else{
        printf("%d is not a PERFECT number", num);
    }

    return 0;
} 

int isperfect(int a){  //FUNCTION DEFINITION
    int sum=0 ;

    for(int i=1; i< a ; i++){
        if(a % i == 0){
            sum = sum +i;
        }
    }
    return (sum == a);
}