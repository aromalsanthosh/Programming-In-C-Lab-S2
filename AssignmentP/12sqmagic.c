#include<stdio.h>
#include<stdlib.h>
void main()
{
	int magic[10][10];
	int i=0,j,k;
	int order,sqr;
	printf("Enter order of matrix\n");
	scanf("%d",&order);
	if(order%2==0)
	{
		printf("Magic square does not work for even order matrix\n");
	    exit(0);
	}
	else
  	{
        printf("Magic square  work for odd order matrix\n");  
    	sqr=order*order;
		j=order/2;
		    for(k=1;k<=sqr;k++)
		    {
                magic[i][j]=k;
                i--;
                j++;
                if(k%order==0)
                {
                    i=i+2;
                    --j;
                }
                else
                {
                    if(j==order)
                    {
                        j=j-order;
                    }
                    else if(i<0)
                    {
                        i=i+order;
                    }
                }
		    }
    }
	printf("Magic Square\n");
	for(i=0;i<order;i++)
	    {
	        for(j=0;j<order;j++)
	        {
		        printf("%d\t",magic[i][j]);
	        }
	        printf("\n");
	    }
}