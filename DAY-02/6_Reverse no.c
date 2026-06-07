//WAP TO REVERSE A NUMBER.

#include <stdio.h>

int main() {
    int num, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10; //LAST DIGIT
        reverse = reverse * 10 + digit; 
        num = num / 10; //REMOVE LAST DIGIT
    }

    printf("Reversed number = %d", reverse);

    return 0;
}