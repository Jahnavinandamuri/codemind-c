#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int x,y,sum=0;
    scanf("%d%d",&x,&y);
    for (i=0; i<a; i++)
    {
        if (arr[i]>=x && arr[i]<=y)
        {
            sum+=arr[i];
        }
    }
    printf("%d",sum);
    return 0;
}