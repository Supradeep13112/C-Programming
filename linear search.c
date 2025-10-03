#include<stdio.h>
void display(int arr[],int m,int j)
{
  for(j=0;j<m;j++)
  printf("\t %d",arr[j]);
}
void linear_search(int arr[],int m,int j)
{
  int key,loc,flag=0;
  printf("\n Enter the value you want to search:");
  scanf("%d",&key);
  for(j=0;j<m;j++)
  {
    if(arr[j]==key)
    {
      loc=j;
      flag=1;
      break;
    }
  }
  if(flag==0)
  printf("\n Search Unsuccessful\n Element is not present in the array");
  else
      {
        printf("\n Search successful");
  printf("\n Element is found at \nposition:%d\nindex:%d",loc+1,loc);
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
  linear_search(a,n,i);
}
