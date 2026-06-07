//WAP TO FIND PRODUCT OF DIGITS.

#include <stdio.h>

int main() {
    int num, product = 1, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10; //LAST DIGITS
        product = product * digit; 
        num = num / 10; // REMOVE LAST DIGIT

    printf("Product of digits = %d", product);

    return 0;
}