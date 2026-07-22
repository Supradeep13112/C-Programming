#include<stdio.h>
void main(){
	int n,a,rem,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n<0)
		printf("\nEnter positive number");
	else{
		a=n;
		while(n!=0){
			rem=n%10;
			if(rem==0){
				n/=10;
				continue;
			}
			sum=sum*10+rem;
			n/=10;
		}
		if(a==sum)
		printf("%d=%d hence palindrome",a,sum);
	else
		printf("%d!=%d hence not palindrome",a,sum);
	}
}