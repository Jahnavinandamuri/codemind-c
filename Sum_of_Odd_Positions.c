#include<stdio.h>
int main()
{
    int n,a[20],i,sum=0,s=0;
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
    }
    printf("%d",sum);
}