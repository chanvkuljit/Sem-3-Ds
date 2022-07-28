#include <conio.h>
#include <stdio.h>
#define size 30

int top=-1;
int s[size];

void push();
void display();

void main()
{
  int i=0;
  char str[300];
  clrscr();

  printf("Enter String :");
  gets(str);

  while(str[i]!='\0')
  {
	push(str[i]);
	i++;
  }

  display();

  getch();

}

void push(char str)
{
  if(top == (size-1))
  {
	printf("Stack is Full");
  }
  else
  {
	top++;
	s[top]=str;
  }
}

void display()
{
	  int i;

	  for(i=top;i>=0;i--)
	  {
	  printf("%c",s[i]);
	  }
}
