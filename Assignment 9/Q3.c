#include<stdio.h>
int main()
{
	int n;
	
	printf("Enter a number:  ");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1: printf("\n nWelcome,Today is Monday");
		        break;
		        
		case 2: printf("\n nWelcome, Today is Tuesday");
		        break;
		        
		case 3: printf("\n Welcome, Today is Wednesday");
		        break;
		        
		case 4: printf("\n Welcome, Today is Thursday");
		        break;
		        
		case 5: printf("\n Welcome, Today is Friday");
		        break;
		        
		case 6: printf("\n Welcome, Today is Saturday");
		        break;
		        
		case 7: printf("\n Welcome, Today is Sunday,\nEnjoy your Holiday.");
		        break;
		        
		default: printf("\n oh! Invalid Day Number\n Try again.");
		         break;
	}
	return 0;
}
