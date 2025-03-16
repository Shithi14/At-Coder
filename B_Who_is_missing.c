#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int arr[4*n],sum=0,sum1=0;
    {
        for(int i=0;i<(4*n)-1;i++)
        {
            scanf("%d",&arr[i]);
           sum=sum+arr[i];
        }
        for(int i=1;i<=n;i++)
        {
            sum1=sum1+i*4;
        }
        printf("%d\n",sum1-sum);
    }

}