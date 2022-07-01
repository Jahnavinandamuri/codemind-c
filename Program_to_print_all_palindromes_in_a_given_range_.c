#include<stdio.h>
void palin(int n){
    int r=0,sum=0,temp=n;
    while (n!=0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(temp==sum)
    printf("%d ",temp);
}
int main(){
    int n,m;
    scanf("%d
%d",&n,&m);
    for(int i=n;i<=m;i++){
        palin(i);
    }
    return 0;
}

