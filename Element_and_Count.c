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
    int c=0;
    for (i=0; i<a; i++)
    {
        c=1;
        for (j=0; j<a; j++)
        {
            if (i!=j)
            {
                if (arr[i]==arr[j]&& arr[i]!=-1)
                {
                    arr[j]=-1;
                    c++;
                }
            }
        }
        if (arr[i]!=-1)
        {
            printf("%d %d ",arr[i],c);
        }
    }
    return 0;
}