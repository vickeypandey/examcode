#include<stdio.h>
int fact(int a)
{
	int factorial=1;
	for(int i=1;i>a;i++)
	{
		factorial=factorial*i;
		return factorial;
	}
}
int main()
{
	int choice;
	printf("enter your choice : ");
	printf("1. Factorial \n");
	printf("2. prime numbers\n");
	printf("3. palindrome\n");
	printf("4. fibonacci series\n");
	printf("5. palindrome number\n");
	
	scanf("%d",&choice);
	
	
	switch(choice)
	{
		case 1: 
		{
			int num;
			printf("enter number to find factorial:");
			scanf("%d",&num);
			printf("%d",fact(num));
		}
	}
}
