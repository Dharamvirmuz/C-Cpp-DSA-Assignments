#include<stdio.h>
int main()
{
	int a,b,h;
	
	printf("Enter two numbers: \n");
	scanf("%d %d",&a,&b);
	
	for(h=a<b?a:b; h>=1; h--)
	if(a%h==0&&b%h==0)
	break;
	
	printf("HCF of %d & %d is %d",a,b,h);
}

