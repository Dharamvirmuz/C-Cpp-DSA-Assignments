#include<stdio.h>
int main()
{
	int a=0,n;
	
	printf("Enter a Digit: \n");
	scanf("%d",&n);

	
	while( n!=0 )
	{
		n = n/10;
		a++;
	}
	
	printf("Total Number of digits in this number = %d",a);
	return 0;
}
