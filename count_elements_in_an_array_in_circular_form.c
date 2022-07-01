#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int m=n+2,c=0;
    a[n]=a[0];
    a[n+1]=a[1];
    for(int i=0;i+2<m;i++){
        if((a[i]%2==0 && a[i+2]%2!=0) || (a[i]%2!=0 && a[i+2]%2==0))
        c++;
    }
    printf("%d",c);
    return 0;
}
