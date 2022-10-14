#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i,j;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int n;
    scanf("%d",&n);
    int c=0,count=0;
    for (i=0; i<a; i++)
    {
        count=1;
        for (j=0; j<a; j++)
        {
            if (i!=j)
            {
                if (arr[i]==arr[j] && arr[i]!=-1)
                {
                    count++;
                    arr[j]=-1;
                }
            }
        }
        if (count==n)
        {
            printf("%d ",arr[i]);
            c++;
        }
    }
    if (c==0)
    {
        printf("-1");
    }
    return 0;
}