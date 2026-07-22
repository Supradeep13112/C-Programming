#include<stdio.h>
#include<string.h>
void main(){
	int i,len=0;
	char string[1000];
	printf("Enter a string:");
	gets(string);
	for (i=0;string[i]!='\0';i++)
		len+=1;
	printf("\nlength of %s is %d",string,len);
}