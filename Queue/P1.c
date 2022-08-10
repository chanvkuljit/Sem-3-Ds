#include<stdio.h>
#include<conio.h>
#define size 100

int rear=-1;
int front=-1;
int s[size];

void insert();
void display();
void update();
void del();

void main()
{
	int ch;
	clrscr();

	while(1)
	{
		printf("\n1-insert");
		printf("\n2-deletion");
		printf("\n3-update");
		printf("\n4-display");
		printf("\n5-exit");

		printf("\nEnter Your Chioce");
		scanf("%d",&ch);

		swicth(ch)
		{
		 case 1:
				insert();
				break;
		 case 2:
				del();
				break;
		 case 3:
				update();
				break;
		 case 4:
				display();
				break;
		 case 5:
				exit(0);
				break;
		 default:
				printf("\nInvalid Choice");
				break;
		 }
	}
	getch();
}

void insert()
{

