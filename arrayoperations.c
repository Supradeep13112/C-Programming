#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void array_insert(int arr[],int m,int j);
void array_delete(int arr[],int m,int j);
void array_display(int arr[],int m );
int linear_search(int arr[],int m,int j);
int binary_search(int arr[],int li,int ui);
int maximum_element(int arr[],int m,int j);
int minimum_element(int arr[],int m,int j);
int kthmaximum_element(int arr[],int m,int j);
/*int kthminimum_element(int arr[],int m,int j);
void bubble_sort(int arr[],int m,int j);
void insertion_sort(int arr[],int m,int j)
void selection_sort(int arr[],int m,int j)*/

void main()
{
	int A[50],n,i,c,pos=-1,l=0,r=n-1,found=0,MIN,MAX,kmax,kmin;
	char ch;
	printf("Enter the number of elelments of the array:");
	scanf("%d",&n);
	printf("\n The array elements are:");
	for(i=0;i<n;i++)
	{
		printf("\nA[%d]= ",i);
		scanf("%d",&A[i]);
		if(A[i]<A[i-1])
		{
			printf("\nArray elements are not in sorted order:");
			i--;
		}
	}
	array_display(A,n);
	do
	{
		printf("\n Array operations:");
		printf("\n--------------------------------");
		printf("\n 1.Insertion");
		printf("\n 2.Deletion");
		printf("\n 3.Traversing");
		printf("\n 4.Linear search \n 5.Binary search \n 6.Maximum element \n 7.Minimum element \n 8.Kth maximum element \n 9.Kth minimum element \n 10.Bubble sort \n 11.Insertion sort \n 12.Selection sort");
		printf("\n .Exit");
		printf("\n Enter choice:");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
			array_insert(A,n,i);
			break;
			case 2:
			array_delete(A,n,i);
			break;
			case 3:
			array_display(A,n);
			break;
			case 4:
			pos=linear_search(A,n,i);
			if(pos==n)
			printf("\n Element not present in array ");
			else 
			printf("\nElement is found at \nposition:%d and index:%d",pos+1,pos);
			break;
			case 5:
			found=binary_search(A,l,r);
			if(found==n)
			printf("\n Element not present in array ");
			else 
			printf("\nElement is found at \nposition:%d and index:%d",found+1,found);
			break;
			case 6:
			MAX=maximum_element(A,n,i);
			printf("\n %d is the maximum element of the array",MAX);
			break;
			case 7:
			MIN=minimum_element(A,n,i);
			printf("\n %d is the minimum element of the array",MIN);
			break;
			case 8:
			kmax=kthmaximum_element(A,n,i);
			printf("\n %d is the desired maximum element of the array",kmax);
			break;
			case 9:
			kmin=kthminimum_element(A,n,i);
			printf("\n %d is the desired minimum element of the array",kmin);
			break;
			case 10:
			exit(0);
			break;
			default:
			printf("\n Invalid choice");
			break;
		}
		printf("\n Do you want to continue?");
		ch=getche();
	}while(ch=='y'||ch=='Y');
}
void array_display(int arr[],int m)
{
	int j;
	printf("\n The array is");
	for(j=0;j<m;j++)
	printf("\t%d",arr[j]);
}
void array_insert(int arr[],int m,int j)
{
	int li,k,key;
	printf("\n Enter the value to be inserted:");
	scanf("%d",&key);
	printf("\n Enter the position of insertion:");
	scanf("%d",&k);
	li=m-1;
	j=k-1;
	while(li>=j)
	{
		arr[li+1]=arr[li];
		li--;
	}
	arr[j]=key;
	m=m+1;
	array_display(arr,m);
}
void array_delete(int arr[],int m,int j)
{
	int key,loc;
	printf("\n Enter the value to be deleted:");
	scanf("%d",&key);
	for(j=0;j<m;j++)
	{
		if(arr[j]==key)
		{
			loc=j;
			break;
		}
	}
	while(loc<m-1)
	{
		arr[loc]=arr[loc+1];
		loc++;
	}
	m=m-1;
	array_display(arr,m);
}
int linear_search(int arr[],int m,int j)
{
	int key;
	int flag=0;
	printf("\n Enter the value to be searched:");
	scanf("%d",&key);
	for(j=0;j<m;j++)
	{
		if(arr[j]==key)
		{
			flag=1;
			break;
		}
	}
	return j;
}
int binary_search(int arr[],int li,int ui)
{
	int mid,key;
	mid=(li+ui)/2;
	printf("\nEnter the element to be searched:");
	scanf("%d",&key);
	if(arr[mid]==key)
	return mid;
	else if(key<arr[mid])
	binary_search( arr,0,mid-1);
	else
	binary_search(arr,mid+1,ui);
}
int maximum_element(int arr[],int m,int j)
{
	int max;
	max=arr[0];
	for(j=1;j<m;j++)
	{
		if(arr[j]>max)
		max=arr[j];
	}
	return(max);
}
int minimum_element(int arr[],int m,int j)
{
	int min;
	min=arr[0];
	for(j=1;j<m;j++)
	{
		if(arr[j]<min)
		min=arr[j];
	}
	return(min);
}
/*int kthmaximum_element(int arr[],int m,int j)
{
	int temp=1000,k,max;
    printf("Enter status of maximum element to be found out: ");
	scanf("%d",&k);
	while(k!=0)
	{
		max=arr[0];
		for(j=1;j<m;j++)
		{
			if(arr[j]>max && arr[j]<temp)
			max=arr[j];
		}
		temp=max;
		k--;
	}
	return max;
}
int kthminimum_element(int arr[],int m,int j)
{
	int temp=-1000,k,min;
    printf("Enter status of maximum element to be found out: ");
	scanf("%d",&k);
	while(k!=0)
	{
		mix=arr[0];
		for(j=1;j<m;j++)
		{
			if(arr[j]<min && arr[j]>temp)
			min=arr[j];
		}
		temp=min;
		k--;
	}
	return min;
}
void bubble_sort(int arr[], int m, int j)
{
	int temp;
	for(j=0;j<m && flag==1;j++)
	{
		flag=0;
		for(k=0;k<m-j-1;k++) 
		{
			if(arr[k]>arr[k+1])
			{
				temp=arr[k+1];
				arr[k+1]=arr[k];
				arr[k]=temp;
				flag=1;
			}
		}
	}
	array_display(arr,j);
}
void insertion_sort(int arr[], int m, int j)
{
	int p;
	for(j=1;j<m;j++)
	{
		p=arr[j-1];
		k=j;
		while(k!=0)
		{
			if(arr[k]>arr[k+1])
			{
				arr[k+1]=arr[k];
				arr[k]=p;
			}
			k--;
		}
	}
	array_display(arr,j);
}
void selction_sort(int arr[], int m, int j)
{}*/