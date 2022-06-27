#include<stdio.h>
int main()
{
    int n,a[100],i;
    float avg=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("%.2f",avg);
    return 0;
}
