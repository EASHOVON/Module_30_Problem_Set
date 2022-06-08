#include <stdio.h>


// How do you find the missing number in a given integer array of 1 to 100?


int main()
{
    int i,j,k,n,a[100],b[100];
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        b[i-1]=i;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                b[j]=0;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(b[i]!=0)
        {
            printf("%d\n",b[i]);
        }
    }
    return 0;
}


