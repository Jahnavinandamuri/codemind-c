#include<stdio.h>
int main()
{
    int ar[100],i,n,sum=0,c=0;
    int a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        sum=sum+ar[i];
    }
    a=(sum/n)+1;
    for(i=0;i<n;i++)
    {
        if(ar[i]<a)
        c++;
    }
    printf("%d",c);
}