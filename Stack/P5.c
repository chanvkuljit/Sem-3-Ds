#include <stdio.h>
#include <conio.h>
#define size 30

int top=-1;
int s[size];

void push();
void peep();

void main()
{
	int Num,num,sum=0;
	clrscr();

	printf("\nEnter Number:");
	scanf("%d",&num);

	while(num>0)
	{
		Num=num%10;
        sum=sum+Num;
        num=num/10;

        push(sum);
 	}

 	peep();

 	getch();
}

void push(int x)
{
	if (top == (size-1))
	{
		printf("\nStack is Full");
	}

	else
	{
		top++;
		s[top]=x;
	}
}

void peep()
{
	if (top == -1)
	{
		printf("\nStack is Empty");
	}

	else
	{
		printf("\nSum of given number is : %d",s[top]);
	}
}
