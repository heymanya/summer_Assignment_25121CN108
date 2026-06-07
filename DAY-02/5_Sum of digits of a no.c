//WAP TO FIND SUM OF DIGITS OF A NUMBER.

#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;   //LAST DIGIT
        sum = sum + digit;  
        num = num / 10;     // REMOVE LAST DIGIT
    }

    printf("Sum of digits of a number= %d", sum);

    return 0;
}