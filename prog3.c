//Write a program that takes any integer value until user gives 999.
//Print the sum of values.
#include<stdio.h>
void main()
{
	int x, sum = 0;
	
	printf("Enter a value : ");
	scanf("%d", &x);
	
	while(x!=999)
	{
		sum = sum + x;
		
		printf("Enter a value : ");
		scanf("%d", &x);
	}
	
	printf("\nSum of values : %d", sum);
}
