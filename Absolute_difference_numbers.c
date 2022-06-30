#include<stdio.h>
#include<stdlib.h>
int rev(int n){
    int r,sum=0;
    while(n!=0){
        r=n%10;
        sum=sum*10+r;
        n/=10;
    }
    return sum;
}
int last2(int n,int m){
    int r,sum=0;
    for(int i=1;i<=m;i++){
        r=n%10;
        sum=sum*10+r;
        n/=10;
    }
    return sum;
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a=last2(n,m);
    int c=rev(n);
    int b=last2(c,m);
    int e=rev(a);
    printf("%d",abs(e-b));
    return 0;
    
} 