//WAP TO WRITE FUNCTION FOR PALINDROME.

#include<stdio.h>

int ispalindrome(int a);  //FUNCTION DECLARATION

int main(){
    int n ;

    printf("Enter the number:");
    scanf("%d", &n);

    if(ispalindrome(n)){  //FUNCTION CALL
        printf("%d is a PALINDROME number.", n);
    }
    else{
        printf("%d is a not PALINDROME number.", n);
    }

    return 0;
}

int ispalindrome(int a){  //FUNCTION DEFINITION
    int d, temp = a, rev= 0;

    while(a != 0){
        d = a% 10;
        rev = rev * 10 + d;
        a = a/10;
    }
    return (temp == rev);
}