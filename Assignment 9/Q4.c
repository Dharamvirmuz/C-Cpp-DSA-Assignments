#include<stdio.h>
int main()
{
	int n,a,b,c,a2,b2,c2,a3,b3,c3,i;
	
	while(1)
	{
	printf(" 1. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
	printf(" 2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
	printf(" 3. Check whether a given set of three numbers are equilateral triangle or not\n");
	printf(" 4. Exit");
	printf("\n \n       Enter your choice: ");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1: printf("Enter three numbers: ");
		        scanf("%d %d %d",&a,&b,&c);
		        if(a==b || b==c|| c==a)
		          printf("This is a isosceles triangle\n\n");
		        else
		          printf("This is not a isosceles triangle\n\n"); 
		          break;
			
		case 2: printf("Enter three numbers: "); 
		        scanf("%d %d %d",&a2,&b2,&c2);
		        if((a2*a2)+ (b2*b2) == (c2*c2) || (a2*a2) + (c2*c2) == (b2*b2) || (b2*b2) + (c2*c2) == (a2*a2))
		           printf("This is a right angled triangle.\n\n");
		        else
		           printf("This is not a right angled triangle.\n\n");
		           break;
			
		case 3: printf("Enter three numbers: ");
		        scanf("%d %d %d",&a3,&b3,&c3);
		        if(a3==b3 && b3==c3)
		          printf("This is a equilateral triangle.\n\n");
		        else
		          printf("This is not a equilateral triangle.\n\n");
		          break;
		
		case 4: exit(0);
		        break;
		
		default: printf("Invalid choice\n\n");
	
	}
	}
	return 0;
	
}
