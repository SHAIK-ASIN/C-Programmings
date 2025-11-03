//student grading
#include<stdio.h>
int main()
{
	float per;
	printf("enter student percentage");
	scanf("%f",&per);
	if(per>=90)
	printf("A grade\n");
	else if(per>=70)
	printf("B grade\n");
	else if(per>=50)
	printf("C grade\n");
	else if(per>=40)
	printf("D grade\n");
	else
	printf("failed");
	return 0;
}
