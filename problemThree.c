#include <stdio.h>

// How do you find the largest and smallest number in an integer array?

int main(void){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n;i++){
        scanf("%d", &arr[i]);
    }
    int small;
    for (int i = 0; i < n; i++)
    {
        small = arr[0];
        if(arr[i]<small){
            small = arr[i];
        }
    }
    int big;
    for (int i = 0; i < n; i++)
    {
        big = arr[0];
        if(arr[i]>big){
            big = arr[i];
        }
    }
    printf("\n");
    printf("The smallest number of the Array is %d\n", small);
    printf("The largest number of the Array is %d\n", big);

}