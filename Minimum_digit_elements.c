#include<stdio.h>
int digitcount(int n){
    int r,count=0;
    if(n==0)
    return 1;
    while(n!=0){
        r=n%10;
        count++;
        n/=10;
    }
    return count;
}
int main()
{
    int n,i,min=9999999,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(digitcount(a[i])<min){
            min=digitcount(a[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(digitcount(a[i])==min){
            count++;
        }
    }
    printf("%d",count);
    return 0;
    
}