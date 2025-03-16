#include<stdio.h>
int main ()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if((a==1&& b==2) ||(a==2 && b==1))
    { printf("3\n");
    }
    if((a==1 && b==3) ||(a==3 && b==1))
    {
        printf("2\n");
    }
     if((a==2 && b==3) || (a==3 && b==2))
    {
        printf("1\n");
    }

    return 0;

}