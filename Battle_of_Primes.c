#include<stdio.h>
#include<math.h>
int prime(int n){
    if(n<=1){
        return 0;
    }
   for(int i=2;i<=sqrt(n);i++){
       if(n%i==0) {
           return 0; 
           break;
       }
   }
   return 1;
}
int main(){
    int n,m;
    scanf("%d
%d",&n,&m);
    int x=n+m,i=1;
    while(1){
        if(prime(i+x)){
            printf("%d",i);
            break;
        }
        i++;
    }
    return 0;
}