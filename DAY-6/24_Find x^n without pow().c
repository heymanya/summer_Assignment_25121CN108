//WAP TO FIND X^N WITHOUT POW().

#include<stdio.h>
int main(){
    int x , n;
    long long result = 1;

    //BASE NUMBER
    printf("Enter the number (x):"); 
    scanf("%d", &x);

    //POWER NUMBER
    printf("Enter the exponant (n):");
    scanf("%d", &n);

    for(int i = 1; i<= n; i++){
        result = result * x;
    }
    
    printf("Result =%lld", result);

    return 0;
}