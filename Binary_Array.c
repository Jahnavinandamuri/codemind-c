#include<stdio.h>
int main()
{
    int i,n,ar[100],f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]==0||ar[i]==1)
        f++;
    }
    if(f==n)
    printf("True");
    else
    printf("False");
    
}