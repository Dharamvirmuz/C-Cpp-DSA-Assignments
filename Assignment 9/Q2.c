#include<stdio.h>
int main()
{
	int n,a1,a2,a3,s1,s2,s3,m1,m2,m3;
    float d1,d2,d3;
	
//	printf("Enter your choice\n");
	while(1)
	{
	printf("1 - Addition \n2 - Subtraction \n3 - Multiplication \n4 - Division \n5 - Exit\n\n");
	
	
		
	
	printf("   Enter your choice: ");
	scanf("%d",&n);
	
//	if( n == 1 )
//	{
//	    printf("\n\nEnter two numbers:\n");
//	    scanf("%d %d",&a1,&a2);
//	}
//	else if( n == 2 )
//	{
//		printf("\n\nEnter two numbers:\n");
//	    scanf("%d %d",&s1,&s2);
//	}
//	else if( n == 3 )
//	{
//		printf("\n\nEnter two numbers:\n");
//	    scanf("%d %d",&m1,&m2);
//	}
//	else if( n == 4 )
//	{
//		printf("\n\nEnter two numbers:\n");
//	    scanf("%f %f",&d1,&d2);
//	}
//
//	
//	
//	a3 = a1 + a2;
//	s3 = s1 - s2;
//	m3 = m1 * m2;
//	d3 = d1/d2;
//	
	switch(n)
	{
		case 1: printf("\nEnter two numbers:\n");
	            scanf("%d %d",&a1,&a2);
	            a3 = a1 + a2;
	        	printf("Addition of %d and %d is %d\n\n",a1,a2,a3);
		        break;
		        
		case 2: printf("Enter two numbers:\n");
	            scanf("%d %d",&s1,&s2);
	            s3 = s1 - s2;
	        	printf("\nSubtraction of %d - %d is %d\n\n",s1,s2,s3);
		        break;
		
		case 3:	printf("Enter two numbers:\n");
	            scanf("%d %d",&m1,&m2);
	            m3 = m1 * m2;
	           	printf("\nMultiplication of %d and %d is %d\n\n",m1,m2,m3);
		        break;
		
		case 4: printf("Enter two numbers:\n");
	            scanf("%f %f",&d1,&d2);
	            d3 = d1/d2;
	        	printf("\nDivision of %.0f and %.0f is %.2f\n\n",d1,d2,d3);
		        break;
		        
		case 5: exit(0);
		        
		    
		default : printf("\nInvalid Number\n\n");
	}
	}
	return 0;
}
