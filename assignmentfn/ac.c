#include <stdlib.h>
#include <stdio.h>
#include <math.h>
float CalculateMean(float *value, int max)
{
    int i;
    float sum = 0;
    for( i = 0; i < max; i++)
        sum = sum + value[i];
    return (sum / max);
}
float CalculateVariane(float *value, int max)
{
    float mean = CalculateMean(value, max);
    int i = 0;
    float temp = 0; 
    for(i = 0; i < max; i++)
         temp += (value[i] - mean) * (value[i] - mean) ;
    return temp / max;
}

float Stdev(float value)
{
    return sqrt(value);
}

int main()
{
    float arrNumbers[100];
    int i, max;
    float mean;
    char buf[1024];
    float variance, stdev;
    printf("Total Number of Elements: ");
    scanf("%d", &max);
   for(i = 0; i < max; i++)
    {
       printf("Enter [%d] Number: ", i + 1);
       scanf("%f", &arrNumbers[i]);
    }
    printf("\nTotal Numbers: %d", max);
    mean = CalculateMean(arrNumbers, max);
    variance = CalculateVariane(arrNumbers, max);
    stdev=Stdev(variance);

    printf("\nMean: %f", mean);
    printf("\nVariance: %f",  variance);
    printf("\nStandard Deviation: %f",  stdev);

    return 0;

}

 