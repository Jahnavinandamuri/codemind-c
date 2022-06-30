#include<stdio.h>
int digitcount(int n){
    int r,count=0;
    while(n!=0){
        r=n%10;
        count++;
        n/=10;
    }
    return count;
}
int main()
{
    int n,i,max=0,ct=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(digitcount(a[i])>max){
            max=digitcount(a[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(digitcount(a[i])==max){
            printf("%d ",a[i]);
        }
    }
    return 0;
    
}