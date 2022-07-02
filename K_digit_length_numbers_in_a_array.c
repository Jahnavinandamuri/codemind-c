#include<stdio.h>
int size(int num)
{
    int c=0;
    if (num==0)
    {
        return 1;
    }
    if (num<0)
    {
        num*=-1;
    }
    while (num>0)
    {
        c++;
        num/=10;
    }
    return c;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int arr[a],i;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int c=0;
    for (i=0; i<a; i++)
    {
        int s=size(arr[i]);
        if (s==b)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}