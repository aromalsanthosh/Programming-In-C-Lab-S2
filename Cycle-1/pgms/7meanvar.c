#include<stdio.h>
#include<math.h>
float fun(float *sum, float *mean, float *variance, float *stdev);

void main()

{
    float sum=0,mean=0;
    float variance=0, stdev=0;
    fun(&sum,&mean,&variance,&stdev);
    printf("Mean = %f\n",mean);
    printf("Variance = %.3f\n",variance);
    printf("Standard Deviation = %.3f\n",stdev);
}
float fun(float *sum, float *mean, float *variance, float *stdev)
{
    int i=0,tot;
    float x[100],var=0;
    printf("Enter Total No Of Elements:\n");
    scanf("%d",&tot);
    printf("Enter The Numbers : \n");
    for ( i = 0; i < tot; i++)
    {
        scanf("%f",&x[i]);
        *sum=*sum+x[i];
    }
    *mean=*sum/tot;
    for ( i = 0; i < tot; i++)
    {
        var=x[i]-*mean;
        *variance=*variance+pow(var,2);
    }
    *variance=*variance/(float)tot;
    *stdev=sqrt(*variance);

}
