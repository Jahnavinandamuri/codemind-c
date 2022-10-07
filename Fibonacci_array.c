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
    int flag=0;
    for (i=1; i<a-1; i++)
    {
        if (arr[i-1]+arr[i]==arr[i+1])
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if (flag==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}