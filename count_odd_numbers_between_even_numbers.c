#include<stdio.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i+2<n;i++){
        if(a[i]%2==0 && a[i+1]%2!=0 && a[i+2]%2==0 )
        c++;
    }
    printf("%d",c);
    return 0;
}