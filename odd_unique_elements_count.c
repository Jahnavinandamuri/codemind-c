#include<stdio.h>
int main()
{
    int n,j,i,c=0,s=0,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(a[j]==a[i]&&i!=j)
            {
                a[i]=-1;
            }
        }
    }
    for(int k=0;k<n;k++)
    {
        if(a[k]!=-1)
        {
            if(a[k]%2==1)
            {
                s++;
            }
        }
    }
    printf("%d",s);
}