#include<stdio.h>
int main()
{
	int a,b,L;
	
	printf("Enter two numbers: \n");
	scanf("%d %d",&a,&b);
	
	for( L= 1; L <= a*b; L++)
	if(L%a==0&&L%b==0)
	break;
	
	printf("LCM of %d & %d is %d",a,b,L);
	
	return 0;
	
	
}
