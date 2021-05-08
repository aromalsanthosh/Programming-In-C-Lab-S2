#include<stdio.h>
void main()
{
    int i, n;
    float x, sums,sumc t;

    printf(" Enter the value for x : ");
    scanf("%f",&x);

    printf(" Enter the value for n : ");
    scanf("%d",&n);

    x=x*3.14159/180;
    t=x;
    sums=x;
    sumc=x;

    /* Loop to calculate the value of Sine */
    for(i=1;i<=n;i++)
    {
        t=(t*(-1)*x*x)/(2*i*(2*i+1));
        sums=sums+t;
    }


    printf(" The value of Sin(%f) = %.4f",x,sum);

}
