#include<stdio.h>
void main()
{
    int i, n;
    float x, sums,sumc,ts,tc,pi=3.14159;
    printf(" Enter the value for x : ");
    scanf("%f",&x);
    printf(" Enter the value for n : ");
    scanf("%d",&n);
    x=(x*pi)/180;
    ts=x;
    tc=x;
    sums=x;
    sumc=x;
    for(i=1;i<=n;i++)
    {
        ts=(ts*(-1)*x*x)/(2*i*(2*i+1));
        sums=sums+ts;
    }
    for(i=1;i<=n;i++)
    {
        tc=tc*(-1)*x*x/(2*i*(2*i-1));
        sumc=sumc+tc;
    }
    printf(" The value of Cos(%f) is : %.4f\n", x, sumc);
     printf(" The value of Sin(%f) = %.4f\n",x,sums);

}
