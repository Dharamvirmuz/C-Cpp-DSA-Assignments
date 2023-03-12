#include<stdio.h>
int main()
{
	int num,i, a = 0, b  = 1, c = 0;
	printf("Enter a number: \n");
	scanf("%d",&num);
	
	for(i = 2; i <= num; i++)
	{
		c = a + b;
		a = b;
		b = c;
		
		printf("The Fibonacci series of %d  is %d\n",num,b);
		
	}

	return 0;
}
