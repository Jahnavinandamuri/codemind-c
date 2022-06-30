#include<stdio.h>
#include<math.h>
int prime(int n){
    if(n<=1){
        return 1;
    }
   for(int i=2;i<=sqrt(n);i++){
       if(n%i==0) {
           return 1; 
           break;
       }
   }
   return 0;
}
int main(){
    int n,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            if(prime(i))
            c++;
        }
        
    }
    printf("%d",c);
    return 0;
}