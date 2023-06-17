#include<stdio.h>
int main()
{
	int n;
	
	while(1)
	{
		
	printf("Enter var: ");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1: printf("good");
		break;
		
		case 2: printf("better");
		break;
		
		case 3: printf("best");
		break;
		
		case 4: printf("invalid");
		
	}
	printf("\n\n");
}
	return 0;
}
