//  Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)


#include<stdio.h>
int factorial_n(int );
int factorial_r(int );
int factorial_sub(int );
// int factorial_d(int );

int main()
{
    int n,r,a,b,sub,c,d,e,f;
    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter r: ");
    scanf("%d",&r);

    sub = n - r;

    a = factorial_n(n);

    b = factorial_r(r);

    c = factorial_sub(sub);

    // d = r * sub;

    // e = factorial_d(d);

    f = a/c;

    printf("Result = %d ",f);
    return 0;
}

int factorial_n(int a)
{
    int i, f = 1;

    for(i = 1; i <= a; i++)
    f = f * i;
    return f;
}

int factorial_r(int b)
{
    int i, f = 1;

    for(i = 1; i <= b; i++)
    f = f * i;
    return f;
}

int factorial_sub(int c)
{
    int i, f = 1;

    for(i = 1; i <= c; i++)
    f = f * i;
    return f;
}

// int factorial_d(int d)
// {
//     int i, f = 1;

//     for(i = 1; i <= d; i++)
//     f = f * i;
//     return f;
// }
