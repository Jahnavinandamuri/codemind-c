#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int b=0,ct=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            ct++;
        }
        else{
            if(b<ct){
                b=ct;
            }
            ct=0;
        }
    }
    if(b<ct){
        b=ct;
    }
    
    printf("%d",b);
   
   
    return 0;
}