#include<stdio.h>
int main()
{
	
	
	int n,a,b;
	
	printf("If you enter Positive Number then i give you Negative Number\n");
	printf("If you enter Negative Number then i give you positive Number\n");
	
	printf("\n\n     Enter your number: ");
	scanf("%d",&n);
	
	switch(n%2==0)
	{
		case 1: 
		        a = n*2;
		        b = n - a;
		        printf("\n\n     You have entered %d and the result is %d",n,b);
		        break;
		        
		
		        
	}

	return 0;
}
