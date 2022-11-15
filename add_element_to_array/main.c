#include <stdio.h>
#include <stdlib.h>
// adding an element to an array //
main()
{
    int arr[100],i,n,pos;
    printf("Enter the number of elements of array:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
    printf("a[%d]=%d\n",i,arr[i]);
    }
 // the element 50 is to be inserted at position-3 //

    int x=50;
    pos=3;
    n++;
    for(i=n-1;i>=pos-1;i--)
    {
        arr[i]=arr[i-1];
    }
        arr[pos-1]=x;

        printf("The updated array is:\n");
     for(i=0;i<n;i++)
    {
    printf("a[%d]=%d\n",i,arr[i]);
    }
    }
