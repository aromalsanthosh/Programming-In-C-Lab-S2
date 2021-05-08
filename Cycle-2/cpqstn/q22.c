#include <stdio.h>

int main()
{
    int num,d,result,temp,start,end;

    printf("Enter two numbers(intervals): \n");
    scanf("%d %d", &start, &end);

    printf("\nArmstrong numbers in given range are: ");
    for(num=start;num<=end;num++)
    {
         temp=num;
         result = 0;

         for(;temp!=0;){
             d=temp % 10;
             temp=temp/10;
             result=result+(d*d*d);
         }
         if(result==num)
             printf("\t%d ",num);
    }
}
