//WAP TO COMPRESS A STRING.

#include<stdio.h>
#include<string.h>

int main(){
    char str[100] ;
    int count ,i ;

    printf("Enter the string:");
    scanf("%s", str);

    for(i=0 ; str[i] != '\0'; i++){
        count =1;

        while(str[i] == str[i+1]){
            count++ ;
            i++ ;
        }
    
        if(count > 1){
            printf("%c%d", str[i], count);
        }
        else{
            printf("%c", str[i]);
        }    
    }

    return 0;
}