//WAP TO PRINT PRIME NUMBERS IN A RANGE.

#include<stdio.h>
int main(){
    int first , last , prime, i, j ;

    printf("Enter the first and last number :");
    scanf("%d %d", &first , &last);

    for(i = first ; i<= last ; i++){
        if(i<2)
        continue;

        prime = 1;
        
        for(j =2 ; j<i ; j++){
            if(i%j == 0){
                prime = 0;
                break;
            }
        }
        if(prime == 1){
            printf("%d\n", i);
        }
    }
    
    return 0;
}