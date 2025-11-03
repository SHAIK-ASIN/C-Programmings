//Right shift and Left shift
#include<stdio.h>
int main()
{
	int x,y,right,left;
	printf("enter x value");
	scanf("%d",&x);
	printf("\n how many bits are moving...?");
	right=x>>y;
	printf("right shift value=%d",right);
	left=x<<y;
	printf("\n left shift value=%d",left);
	return 0;
}
