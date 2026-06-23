//WAP TO CHECK ANAGRAM STRINGS.

//(ANAGRAMS ------> same characters , same length with the same no. of times.)

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};
    int flag = 1;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2)) {     //COMPARE LENGTHS OF BOTH STRING
        printf("Strings are not anagrams.");
        return 0;
    }

    for(int i = 0; str1[i] != '\0'; i++) {     //COUNT CHARACTERS OF FIRST STRING.
        freq[str1[i]]++;
    }

    for(int i = 0; str2[i] != '\0'; i++) {     //SUBTRACT CHARACTERS OF SECOND STRING.
        freq[str2[i]]--;
    }

    for(int i = 0; i < 256; i++) {    //CHECK FREQUENCY ARRAY.
        if(freq[i] != 0) {
            flag = 0;
            break;
        }
    }

    if(flag == 1){
        printf("Strings are Anagrams.");
    }
    else{
        printf("Strings are not Anagrams.");
    }
    
    return 0;
}