//WAP TO FIND STRING LENGTH WITHOUT STRLEN().

#include<stdio.h>
int main(){
    char str[100];
    int i;

    printf("Enter a string:");
    scanf("%s", str);

    for(i=0; str[i] != '\0'; i++);

    printf("Length of the string: %d\n", i);

    return 0;
}
