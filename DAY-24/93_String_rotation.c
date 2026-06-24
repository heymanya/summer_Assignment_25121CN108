//WAP TO CHECK STRING ROTATION.

#include<stdio.h>
#include<string.h>

int main(){
    char str1[100] , str2[100] , temp[200] ;

    printf("Enter the first string:");
    scanf("%s", str1);

    printf("Enter the second string:");
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2)){         //COMPARE THE LENGTHS OF BOTH STRINGS
        printf("Strings are not rotation.\n");
        return 0;
    }

    strcpy(temp , str1);
    strcat(temp , str1);

    if(strstr(temp , str2)){         //FINDS THE SUB-STRING
        printf("Strings are Rotation of each other.\n");
    }
    else{
        printf("Strings are Not Rotation of each other.\n");
    }

    return 0;
}