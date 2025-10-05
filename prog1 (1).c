//Write a program that takes any integer value until user gives 999
#include<stdio.h>
void main()
{
	int x;
	
	printf("Enter a value : ");
	scanf("%d", &x);
	
	while(x!=999)
	{
		printf("Enter a value : ");
		scanf("%d", &x);
	}
}
