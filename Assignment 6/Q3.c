#include<stdio.h>
int main()
{
	int i,n,sum=0;
	
	printf("Enter number: \n");
	scanf("%d",&n);
	
	for( i = 1; i <= n; i+=2)
	{
		sum = sum + i;
	}
	printf("Sum of odd Natural Numbers between 1 to %d is = %d",n,sum);
	
	return 0;
}
