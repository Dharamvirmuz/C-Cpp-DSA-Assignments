#include<stdio.h>
int main()
{
	
int n,a;

for(n=2;n<=100;n++)
{
	for(a=2;a<n;a++)
	{
		if(n%a==0)
		break;
	}
	if(a==n)
	printf("Number is Prime %d\n",n);
}

	return 0;
}
