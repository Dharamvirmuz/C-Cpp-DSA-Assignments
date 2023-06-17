#include<stdio.h>
int main()
{
	while(1){
	
	int n;
	float a,a1,b,b1,c,c1,d,d1,d2,d3;
	
	printf("\n\n          1. Units 0 - 50.\n");
	printf("          2. Units 51 - 100.\n");
	printf("          3. Units 101 - 250.\n");
	printf("          4. Units more than 251 \n");
	printf("          5. exit \n");
	
	printf("\n\n      Enter option according to upper chart: ");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1: 
		    printf("Enter number of units: ");
		    scanf("%f",&a);
			 a1= a*0.50;
		    printf("\nyour electricity bill is %.1f",a1);
			break;
			
		case 2: 
		    printf("Enter number of units: ");
		    scanf("%f",&b);
			 b1= b*0.75;
		    printf("\nyour electricity bill is %.1f",b1);
			break;
			
		case 3: 
		    printf("Enter number of units: ");
		    scanf("%f",&c);
			 c1= c*1.20;
		    printf("\nyour electricity bill is %.1f",c1);
			break;
			
		case 4: 
		    printf("Enter number of units: ");
		    scanf("%f",&d);
			 d1= d*1.50;
			 d2 = 20 * d1/100;
			 d3 = d1+d2;
		    printf("\nyour electricity bill is %.1f",d3);
			break;

		case 5: exit(0);           
	}
}
	return 0;
}
