//WAP TO FIND FIRST NON-REPEATING CHARACTER.

#include<stdio.h>

int main(){
    char str[100];
    int freq[256] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++){    //COUNT FREQUENCY
        freq[str[i]]++;
    }

    for(int i = 0; str[i] != '\0'; i++){      //FIRST NON-REPEATING CHARACTER
        if(freq[str[i]] == 1){
            printf("First non-repeating character: %c", str[i]);
            break;
        }
    }

    return 0;
}