//WAP TO FIND COLUMN-WISE SUM.

#include<stdio.h>
int main(){
    int r, c;

    printf("Enter the number of rows:");
    scanf("%d", &r);

    printf("Enter the number of columns:");
    scanf("%d", &c);

    int a[r][c];

    printf("Enter the elements of the matrix:\n");
    for(int i= 0; i< r; i++){
        for(int j=0 ; j< c; j++){
            printf("a[%d][%d]", i , j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Column-Wise sum:\n");

    for(int j=0 ; j<c ; j++){    //COLUMN FIXED
        int sum = 0;        //RESET FOR EACH COLUMN
        for(int i=0 ; i<r ; i++){    //ROW CHANGE
            sum += a[i][j];
        }
        printf("Sum of column %d: %d\n", j, sum);
    }
    

    return 0;

}