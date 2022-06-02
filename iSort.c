#include<stdio.h>

int main(){
    int n, arr[50], d, temp;
    
    printf("Enter the NUmber of elements to be sorted: ");
    scanf("%d",&n);

    printf("Enter %d Numbers: ", n);

    for(int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

    printf("The entered array is: ");

    for(int i = 0; i < n; i++)
    printf("%d\t", arr[i]);
    
    for(int i = 1; i < n; i++){
        d = i;
        while(d > 0 && arr[d-1] > arr[d]){
            temp = arr[d];
            arr[d] = arr[d-1];
            arr[d-1] =  temp;
            d--;
        }
    }

    printf("\nThe Sorted Array is: ");
    for(int i = 0; i < n; i++)
    printf("%d\t", arr[i]);
    return 0;
}