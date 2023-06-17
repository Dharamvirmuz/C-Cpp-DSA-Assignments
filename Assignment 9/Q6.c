//#include<stdio.h>
int main()
{
	int year,n;
	
	
	
//	printf("Enter a year: ");
//	scanf("%d",&year);
//	
//	            if
//            	(year % 400 == 0 )
//		        {
//		        printf("It is a Leap Year");	
//				}
//				else if (year % 100 == 0)
//				{
//		    	printf("It is not a Leap Year");	
//				}
//				else if (year % 4 == 0)
//				{
//					printf("It is a Leap Year");
//				}
//				else
//				{
//					printf("It is not a Leap Year");
//				}
//				
//				
//				
//
//


	printf("Enter number of Days in Feb, then i give you this is Leap year or not: ");
	scanf("%d",&n);
	
	switch(n)
	{
		case 29: printf("It is a Leap year");
		        break;
		        
		case 28: printf("It is not a Leap year");
		          break;
		          
		default: printf("Invalid number");
	}
	return 0;
}
