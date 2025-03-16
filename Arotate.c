#include<stdio.h>
int main  ()
{
    int abc,bca,cab;
    scanf("%d",&abc);
    int c=abc%10;
    int n=abc/10;
     int b=n%10;
    int a=abc/100;
    bca=b*100+c*10+a;
    cab=c*100+a*10+b;
    int sum=abc+bca+cab;
    printf("%d\n",sum);
    return 0;
}