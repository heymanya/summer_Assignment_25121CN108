//WAP TO FIND MAXIMUM FREQUENCY ELEMENT.

#include<stdio.h>
int main(){
    int n, i,j ;

    printf("Enter the size of array:");
    scanf("%d", &n);
   
    int arr[n];

    printf("Enter the elements of array:");
    for(i= 0; i<n ; i++){
        scanf("%d", &arr[i]);

    }

    int max_freq_element ;
    int max_freq =0 ;
    
    for (i = 0; i < n; i++)
    {
        int count =0;

        for(j=0 ; j<n ; j++){
            if(arr[i] == arr[j]){
                count++ ;
            }
        }
        if(count > max_freq){
            max_freq = count; 
            max_freq_element = arr[i];
        }
    }
    
    printf("Maximum frequency element: %d\n", max_freq_element);

    printf("Frequency :%d\n", max_freq);

    return 0;

}