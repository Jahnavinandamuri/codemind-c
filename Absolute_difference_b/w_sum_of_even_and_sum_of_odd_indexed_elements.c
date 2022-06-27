#include<stdio.h>
int main()
{
    int n,a[20],sum=0,s=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+a[i];
        }
        else
        s=s+a[i];
    }
    if(s>sum)
    printf("%d",s-sum);
    else
    printf("%d",sum-s);
}