#include<stdio.h>
int calculatedigits(int num)
{
    int sum=0;
    while(num!=0)
    {
        sum+=(num%10);
        num/=10;
    }
    if(sum>=10)
     calculatedigits(sum);
    else
    return sum;
}
int main()
{
    int n,sum;
    scanf("%d",&n);
    if(n<0)
    {
        return -1;
    }
    sum=calculatedigits(n);
    printf("%d",sum);
    return 0;
}