//WAP TO WRITE FUNCTION FOR ARMSTRONG.

#include<stdio.h>

int isarmstrong(int a);  //FUNCTION DECLARATION

int main(){
    int n ;

    printf("Enter the number:");
    scanf("%d", &n);

    if(isarmstrong(n)){  //FUNCTION CALL
        printf("%d is a ARMSTRONG number.", n);
    }
    else{
        printf("%d is a not ARMSTRONG number.", n);
    }

    return 0;
}

int isarmstrong(int a){  //FUNCTION DEFINITION
    int temp= a, d, sum =0;

    while(a != 0){
        d = a % 10;
        sum = sum + (d*d*d);
        a = a/10;
    }

    return (sum == temp);
}