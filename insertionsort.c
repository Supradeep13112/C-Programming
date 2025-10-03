#include<stdio.h>
void display(int arr[],int m,int j)
{
  for(j=0;j<m;j++)
  printf("\t %d",arr[j]);
}
void insertion_sort(int arr[],int m,int j)
{
  int temp,k;
  for(j=1;j<m;j++)
  {
    temp=arr[j];
    for(k=j-1;k>=0 && arr[k]>temp;k--)
    {
      arr[k+1]=arr[k];
    }  
    arr[k+1]=temp;
  }
}
void main()
{
  int a[50],n,i;
  printf("\n Enter the number of elements of the array:");
  scanf("%d",&n);
  printf("\n The array elements are");
  for(i=0;i<n;i++)
  {
    printf("\n A[%d]=",i);
    scanf("%d",&a[i]);
  }
  printf("\n The array is:\n");
  display(a,n,i);
  insertion_sort(a,n,i);
  printf("\n The sorted array is\n");
  display(a,n,i);
}
