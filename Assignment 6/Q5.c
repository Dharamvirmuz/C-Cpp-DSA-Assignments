#include<stdio.h>
int main()
{
	int sum = 0, n, i;
	
	printf("Enter a number: \n");
	scanf("%d",&n);
	
	for( i = 1; i <= n; i++)
	{
		sum = sum+(i * i * i);
	}
	printf("Cubes of first %d natural numbers : %d",n,sum);
	
	return 0;
}
