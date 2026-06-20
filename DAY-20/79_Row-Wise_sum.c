//WAP TO FIND ROW-WISE SUM.

#include<stdio.h>
int main(){
    int r, c ;

    printf("Enter the number of rows:");
    scanf("%d", &r);

    printf("Enter the number of columns:");
    scanf("%d", &c);

    int a[r][c];

    printf("Enter the elements of the matrix:\n");      
    for(int i=0; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Row-Wise sum:\n");

    for(int i=0 ; i<r ; i++){     //ROW FIXED
        int sum = 0;        //RESET FOR EACH ROW
        for(int j=0 ; j<c ; j++){     //COLUMN CHANGE
            sum += a[i][j];
        }
        printf("Sum of row %d: %d\n", i, sum);
    }
    

    return 0;
}    