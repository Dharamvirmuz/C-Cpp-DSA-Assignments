#include<stdio.h>
#include<math.h>
int main()


{
	float a,b,c;
	float d,e,f,g,d2,e2,f2,g2;
	
	printf("Enter a: ");
	scanf("%f",&a);
	printf("Enter b: ");
	scanf("%f",&b);
	printf("Enter c: ");
	scanf("%f",&c);
	
	
	switch(a == 0)
	{
		case 0: 
		        d =sqrt(b*b-4*a*c);
		        e = -b + d;
		        f = 2*a;
		        g = e / f;
		        
		        d2 =sqrt(b*b-4*a*c);
		        e2 = -b - d;
		        f2 = 2*a;
		        g2 = e / f;
		        printf("root 1 = %.4f\nroot 2 = %.4f",g,g2);
		        break;
		        
		case 1: 
		        d =sqrt(b*b-4*a*c);
		        e = -b + d;
		        f = 2*a;
		        g = e / f;
		        
		        d2 =sqrt(b*b-4*a*c);
		        e2 = -b - d;
		        f2 = 2*a;
		        g2 = e / f;
		        printf("root 1 = %.4f\nroot 2 = %.4f",g,g2);
		        break;
		        
	}
	return 0;
	
}
