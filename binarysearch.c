#include<stdio.h>
void main()
{
    int A[20],n,i,key;
    printf("\nEnter number of elements in the array");
    scanf("%d",&n);
    printf("\nThe array elements");
    for(i=0;i<n;i++)
    {
    	if(A[i]<A[i-1])
        {
            printf("\nArray is not in sorted order");
        }
    	else
    	{
    		printf("\nA[%d] = ",i);
            scanf("%d",&A[i]);
        }
    }
    printf("\nPrinting the array elements");
    for(i=0;i<n;i++)
    printf("\t%d",A[i]);
    /*printf("\nEnter the key value to be searched");
    scanf("%d",&key);*/
}
