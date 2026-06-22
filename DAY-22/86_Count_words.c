//WAP TO COUNT WORDS IN A SENTENCE.

#include<stdio.h>

int main() {
    char str[100];
    int i, words = 1;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) { //fgets ------> used to read an entire line , including spaces.
        if(str[i] == ' ') {
            words++;
        }
    }

    printf("Number of words in the sentence : %d\n", words);

    return 0;
}