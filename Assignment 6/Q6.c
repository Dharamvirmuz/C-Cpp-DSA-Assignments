#include<stdio.h>
int main()
{
	int a=1,b,i, n;
	
	printf("Enter a number : \n");
	scanf("%d",&n);
	
	b=n;
	
	while(n >= 1)
	{
		a = a * n;
		n--;
	}
	printf("Factorial of %d is: %d",b,a);
	
	return 0;
	
}
