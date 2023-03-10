#include<stdio.h>
int main()
{
	int i,n,sum;
	
	printf("Enter a number: \n");
	scanf("%d",&n);
	
	for( i = 2; i <= n; i++)
	{
	//	printf("%d",n);
		sum += i;
	}
	printf("Sum of all natural numbers between 1 to %d = %d",n,sum);
	return 0;
}
