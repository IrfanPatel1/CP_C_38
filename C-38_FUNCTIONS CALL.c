#include<stdio.h>
int cube(int x)
{
    x=x*x*x;
    return(x);
}
int main()
{
    int n=2;
    printf("cube of %d is %d\n",n,cube(n));
    return 0;
}

output:
cube of 2 is 8
