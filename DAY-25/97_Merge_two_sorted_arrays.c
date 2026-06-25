//WAP TO MERGE TWO SORTED ARRAYS.

#include<stdio.h>

int main(){
    int n, m;
    int i , j , k;
    int a[50], b[50], c[100];

    printf("Enter the size of first array:");
    scanf("%d", &n);

    printf("Enter the elements of first sorted array:");
    for(i =0 ; i<n ; i++){
        scanf("%d", &a[i]);
    }

    printf("Enter the size of second array:");
    scanf("%d", &m);

    printf("Enter the elements of second sorted array:");
    for(j =0 ; j<m ;j++){
        scanf("%d", &b[j]);
    }

    i = j = k =0 ;

    while(i<n && j<m){
        if(a[i] <= b[j]){
            c[k] = a[i];
            i++ ;
            k++ ; 
        }
        else{
            c[k] = b[j];
            j++ ; 
            k++ ;
        }
    }

    while(i<n){
        c[k++] = a[i++];
    }

    while(j<m){
        c[k++] = b[j++];
    }

    printf("The merged array:");
    for(i=0 ; i< n+m ; i++){
        printf("%d\t" , c[i]);
    }

    return 0;
}