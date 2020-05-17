#include<stdio.h>
int main()
{
	int a,b;
	printf("enter any two number: ");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("you entered the value of a = %d\n",a);
	printf("you entered the value of b = %d\n",b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("after swapping value of a is %d\n value of b is %d",a,b);
	return 0;
}
