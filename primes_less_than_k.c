#include<stdio.h>
int main()
{
    int n,a[100],i,k,p=0,m=0,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        c=0;
        if(a[i]<=k)
        {
            for(j=1;j<=a[i];j++)
            {
                if(a[i]%j==0)
                {
                    c++;
                }
            }
            if(c==2)
            {
                m++;
            }
        }
    }
    printf("%d",m);
}