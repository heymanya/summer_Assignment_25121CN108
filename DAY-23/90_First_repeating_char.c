//WAP TO FIND FIRST REPEATING CHARACTER.

#include<stdio.h>

int main(){
    char str[100];
    int freq[256] ={0};
    int found=0 ;

    printf("Enter the string:");
    scanf("%s", str);

    for(int i= 0; str[i] != '\0' ; i++){     //COUNT FREQUENCY
        freq[str[i]]++;
    }

    for(int i=0 ; str[i] != '\0'; i++){     //FIND FIRST REPEATING CHARACTER
        if(freq[str[i]] > 1){
            printf("First repeating character: %c", str[i]);
            found =1 ;
            break;
        }
    }

    if(found == 0) {
        printf("No repeating character found.");
    }

    return 0;
}