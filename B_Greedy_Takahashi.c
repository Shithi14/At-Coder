#include<stdio.h>
int main ()
{
    long long int A,B,K;
    scanf("%lld %lld %lld",&A,&B,&K);
    if(A>=K)
{
    printf("%lld %lld\n",A-K,B);
}
else if((K>A) && (A+B>K))
{
    printf("0 %lld\n",(A+B)-K);
}
else
{
    printf("0 0\n");

}
return 0;
}