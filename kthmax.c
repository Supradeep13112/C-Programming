#include<stdio.h>
void main()
{
    int A[20],n,i,max,temp=9999,k;
    printf("\n Enter the number of elements in the array:");
    scanf("%d",&n);
    printf("\n The array elements");
    for(i=0;i<n;i++)
    {
        printf("\nA[%d]= ",i);
        scanf("%d",&A[i]);
    }
    printf("\n\nPrinting elements of the array");
    for(i=0;i<n;i++)
    printf("\t%d",A[i]);
    printf("\n\nEnter the status of the maximum element to be found out:");
    scanf("%d",&k);
    while (k)
    {
        max=A[0];
        for(i=1;i<n;i++)
        {
            if(A[i]>max && A[i]<temp)
            max=A[i];
        }
        temp=max;
        k--;
    }
    printf("\n\n%d is the maximum element to be found out",max);
}
