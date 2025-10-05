//Write a program that takes any integer value until user gives 999.
//Print the number of values inputted.
#include<stdio.h>
void main()
{
	int x, count=0;
	
	printf("Enter a value : ");
	scanf("%d", &x);
	
	while(x!=999)
	{
		++count;
		
		printf("Enter a value : ");
		scanf("%d", &x);
	}
	
	printf("Number of values : %d", count);
}
