#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int n,INT_MAX=9999999;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int j=pow(2,i);
        if(abs(j-n)<INT_MAX){
            INT_MAX=abs(n-j);
            if(INT_MAX==0)
            break;
        }
        else
        break;
        
    }
    printf("%d",INT_MAX);
    return 0;
}