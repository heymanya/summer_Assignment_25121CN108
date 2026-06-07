//WAP TO RECURSIVE REVERSE NUMBER.

#include<stdio.h>

int reverse(int n , int rev); //FUNCTION DECLARATION

int main(){
    int num;

    printf("Enter the number:");
    scanf("%d", &num);

    printf("Reverse number = %d\n", reverse(num, 0));  // FUNCTION CALLING

    return 0;
}

// FUNCTION DEFINITION
int reverse(int n, int rev){
    if(n == 0){
        return rev;
    }
    return reverse(n/10, rev*10 + n%10);  // RECURSIVE FUNCTION CALL

}