#include<stdio.h>
int main()
{
	int n,a,b;
	
	printf("     If you enter Even Number then i give you Odd Number\n");
	printf("     If you enter Odd Number then i give you Even Number\n\n");
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	switch(n%2==0)
	{
		case 1: 
		        a = n+1;
		        printf("You have entered even number, Then Odd number = %d",a);
		        break;
		        
		case 0: 
		         b = n+1;
		         printf("You have entered odd number, Even number = %d",b);
		         break;
		         	
	}
	return 0;
}
