#include <stdio.h>
#include <conio.h>
#define size 100

int top=-1;
int s[size];

void push();
void peep();
void pop();
void update();
void display();

void main()
{
	int c;
	clrscr();

	while(1)
	{
		printf("\n1 - push");
		printf("\n2 - peep");
		printf("\n3 - pop");
		printf("\n4 - update");
		printf("\n5 - display");
		printf("\n6 - exit");

		printf("\nEnter Your Chioce :");
		scanf("%d",&c);
		printf("\n---------------------------------------");

		switch(c)
		{
			case 1 :
					push();
					break;
			case 2 :
					peep();
					break;
			case 3 :
					pop();
					break;
			case 4 :
					update();
					break;
			case 5 :
					display();
					break;
			case 6 :
					exit(0);
					break;

			default :
					 printf("\nInvaild Entry");

			}
		printf("\n---------------------------------------");
		}
		getch();
}

void push()
{
	int i;

	if(top == (size-1))
	{
		printf("\nStack is Full");
	}
	else
	{
		printf("\nEnter Value : ");
		scanf("%d",&i);
		top++;
		s[top]=i;
	}
}

void display()
{
	int i;

	if(top==-1)
	{
		printf("\nStack is empty");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("\nA Value s[%d] :%d",i,s[i]);
		}
	}
}

void update()
{
	int i;

	if(top==-1)
	{
		printf("\nStack is Empty");
	}
	else
	{
		printf("\nEnter a Value : ");
		scanf("%d",&i);

		s[top]=i;
		printf("\nA Stack is Updated");
	}
}
void peep()
{
	int i;

	if(top==-1)
	{
		printf("\nStack is Empty");
	}
	else
	{
		printf("\nTop Value in Stack is :%d",s[top]);
	}
}

void pop()
{
	int i;

	if(top==-1)
	{
		printf("\nStack is Empty");
	}
	else
	{
		i=s[top];
		s[top]=0;
		top--;
	}
	printf("\n %d Value is Removed",i);
}

