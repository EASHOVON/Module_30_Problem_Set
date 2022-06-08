#include <stdio.h>


// How do you find the duplicate number on a given integer array?

int main(void){
    int n;
    scanf("%d",&n);
    int arr[n],count[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(count[i]>1){
            printf("%d ",i);
        }
    }
    return 0;
}
