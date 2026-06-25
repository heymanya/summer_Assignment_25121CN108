//WAP TO SORT NAMES ALPHABETICALLY.

#include <stdio.h>
#include <string.h>

int main() {
    char name[50][50], temp[50];
    int num, i, j;

    printf("Enter the number of names: ");
    scanf("%d", &num);

    printf("Enter the names:\n");
    for(i = 0; i < num; i++) {
        scanf("%s", name[i]);
    }

    for(i = 0; i < num - 1; i++) {
        for(j = i + 1; j < num; j++) {
            if(strcmp(name[i], name[j]) > 0) {   //COMPARE
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("\nSorted Names alphabetically:\n");
    for(i = 0; i < num; i++) {
        printf("%s\n", name[i]);
    }

    return 0;
}