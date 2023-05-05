#include<stdio.h>
int gcd(int num1,int num2);
int main()
{
	int num1,num2,hcf;
	printf("enter any 2 no.s:\n");
	scanf("%d %d",&num1,&num2);
	hcf=gcd(num1,num2);
	printf("gcd of %d and %d=%d",num1,num2,hcf);
	return 0;
}
int gcd(int a,int b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
