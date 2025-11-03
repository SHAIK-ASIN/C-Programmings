//bitwise operators
#include<stdio.h>
int main()
{
	int x,y,a,b;
	printf("enter x&y values");
	scanf("%d%d",&x,&y);
	a=x&y;
	printf("Bitwise AND=%d",a);
	b=x|y;
	printf("\n Bitwise OR=%d",b);
	return 0;
}
