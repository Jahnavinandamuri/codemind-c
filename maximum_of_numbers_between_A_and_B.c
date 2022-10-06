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
    int x,y,max=-1;
    scanf("%d%d",&x,&y);
    for (i=0; i<a; i++)
    {
        if (arr[i]>=x && arr[i]<=y)
        {
            if (max<arr[i])
            {
                max=arr[i];
            }
        }
    }
    printf("%d",max);
    return 0;
}