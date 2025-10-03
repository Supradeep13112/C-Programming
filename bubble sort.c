#include<stdio.h>
void display(int arr[],int m,int j)
{
  for(j=0;j<m;j++)
  printf("\t %d",arr[j]);
}
void bubble_sort(int arr[],int m,int j)
{
  int temp,flag=1,k;
  for(j=0;j<m && flag==1;j++)
  {
    flag=0;
    for(k=0;k<m-j-1;k++)
    {
      if(arr[k]>arr[k+1])
      {
        temp=arr[k];
        arr[k]=arr[k+1];
        arr[k+1]=temp;
        flag=1;
      }
    }
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
  bubble_sort(a,n,i);
  printf("\n The sorted array is\n");
  display(a,n,i);
}
