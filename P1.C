/*write a program that find entered number is perfect or not */

#include<stdio.h>
#include<conio.h>

void main()
{
	int num,num1,add=0,mul=1;
	clrscr();

	printf("\n Enter A Number : ");
	scanf("%d",&num);

	while(num>0)
	{
	 num1=num % 10;
	 add=add + num1;
	 mul=mul * num1;
	 num=num / 10;
	}

	if(add == mul)
	{
		printf("\nA number is perfect");
	}
	else
	{
		printf("\n A number is not perfect");
	}

	getch();

}