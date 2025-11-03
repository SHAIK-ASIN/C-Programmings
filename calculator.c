//Calculator
#include<stdio.h>
int main()
{
	int a,b,c;
	char ch;
	printf("enter a&b values");
	scanf("%d%d",&a,&b);
	printf("enter your choice +_add -sub *_mul /_div");
	scanf("%c",&ch);
	switch(ch)
	{
		case '+':c=a+b;
		printf("add=%d",c);
		break;
		case '-':c=a-b;
		printf("sub=%d",c);
		break;
		case '*':c=a*b;
		printf("mul=%d",c);
		break;
		default:printf("Invalid choice");
	}
	return 0;
}
