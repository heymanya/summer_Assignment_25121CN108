//WAP TO FIND MAXIMUM OCCURING CHARACTER.

#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int max = 0;
    char maxChar;

    printf("Enter a string: ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++) {      //COUNT FREQUENCY
        freq[str[i]]++;
    }

    for(int i = 0; str[i] != '\0'; i++) {     //MAXIMUM OCCURING CHARACTER
        if(freq[str[i]] > max) {
            max = freq[str[i]];
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character: %c\n", maxChar);
    printf("Frequency: %d", max);

    return 0;
}