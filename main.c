#include <stdio.h>
void main()
{
 int Ben,Eng,Comsh,Math,Phy,sum;
 float avg;
 printf("Enter Bengali marks:");
 scanf("%d",&Ben);
 printf("Enter English marks:");
 scanf("%d",&Eng);
 printf("Enter Computer Science honours marks:");
 scanf("%d",&Comsh);
 printf("Enter Mathematics marks:");
 scanf("%d",&Math);
 printf("Enter Physics marks:");
 scanf("%d",&Phy);
 sum=Ben+Eng+Comsh+Math+Phy;
 avg=(float)sum/5;
 printf("\n %d is sum",sum);
 printf("\n %f is average",avg);
 if(avg<30)
 printf("\n Fail");
 else if((avg>30)&&(avg<=50))
 printf("\n Pass");
 else if((avg>50)&&(avg<=60))
 printf("\n 2nd division");
 else if((avg>60)&&(avg<=80))
 printf("\n 1st division");
 else if((avg>80)&&(avg<=90))
 printf("\n Excellent");
 else if((avg>90)&&(avg<=100))
 printf("\n Outstanding");
}
