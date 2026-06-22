//WAP TO CHECK PALINDROME STRING.

#include<stdio.h>
#include<string.h>

int main(){
    char str[100]; 
    int i, len, flag=1 ;
    
    printf("Enter the string:");
    scanf("%s", str);

    len = strlen(str);

    for(i=0 ; i< len/2 ; i++){    //NO COMPARISION OF THE MIDDLE ONE.
        if(str[i] != str[len - 1 - i ]){
            flag = 0;
            break;
        }
    }

    if(flag == 1){
        printf("Palindrome string.");
    }
    else{
        printf("Not Palindrome string.");
    }

    return 0;
}