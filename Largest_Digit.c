#include<stdio.h>
int main()
{
    int n,r,key=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        if(r>key)
        key=r;
        n=n/10;
    }
    printf("%d",key);
}