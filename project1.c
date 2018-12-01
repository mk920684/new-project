#include<stdio.h>
int choice;

void add();
void sub();
void mult();
void div();
void display();
int main()
{

	display();
	
		switch(choice)
		{
			case 1 : add(); break;
			case 2 : sub(); break;
			case 3 : mult(); break;
			case 4 : div(); break;
		     	
				 
		}

	return 0;
	
	
}

void display()
{

	printf("welcom! to calc\nMenu\n");
	printf("-------------------------------\n");
	printf("1.addition\n 2.subtraction\n 3.multiplication\n 4.division\nEnter ur choice");
	printf("--------------------------------\n");
	scanf("%d" , &choice);
	printf("you entered %d\n", choice);
	
	
	
}



void add()
{
	int  a,b;
	printf("ADDITION\n");
	printf("enter the two no");
	scanf("%d%d" ,&a,&b);
	printf("sum is =%d\n", a+b);
	
	
}

void sub()
{
	int a,b;
	printf("SUBTRACTION\n");
	printf("enter two no");
	scanf("%d%d", &a,&b);
	printf("sun is =%d", a-b);	
	
}

void mult()
{
	int a,b;
	printf("MULTIPLICATION\n");
	printf("enter two no");
	scanf("%d%d" ,&a,&b);
	printf("multipication is =%d", a*b);
	
}

void div()
{
	int a,b;
	printf("DIVISION\n");
printf("enter no");
scanf("%d%d" ,&a,&b);
printf("quotient is=%d", a/b);	
	
}
