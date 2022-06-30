#include<stdio.h>
int self(int n){
    int temp=n,r;
    if(n<9){
        return 1;
    }
    else if(n%10==0){
        return 0;
    }
    else{
        while(n!=0){
            r=n%10;
            if(temp%r!=0){
                return 0;
                break;
            }
            n/=10;
        }
        return 1;
    }
}
int main(){
    int n,m;
    scanf("%d
%d",&n,&m);
    for(int i=n;i<=m;i++){
        if(self(i)){
            printf("%d ",i);
        }
    }
    return 0;
}
