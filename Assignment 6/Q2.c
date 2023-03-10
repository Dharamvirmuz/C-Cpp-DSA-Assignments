#include<stdio.h>
int main()
{
	int i,n,sum=0;
	
	printf("Enter a number: \n");
	scanf("%d",&n);
	
	for( i = 2; i <= n; i+=2)
	{
	//	printf("%d",n);
		sum += i;
	}
	printf("Sum of all even natural numbers between 1 to %d = %d",n,sum);
	return 0;
}
