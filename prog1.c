//Print the largest number bw two numbers
#include<stdio.h>
void main()
{
	int a, b;
	printf("Enter two values : ");
	scanf("%d%d", &a, &b);
	
	if(a>b)
		printf("%d is largest", a);
	else if(b>a)
		printf("%d is largest", b);
	else
		printf("Both are same");
}
