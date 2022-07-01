#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],s=0,f=0,sum=0;
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
   
    }
 
    for(int i=0;i<n;i++){
       if(a[i]%2!=0){
           printf("False");
           s=1;
           break;
       }
       
    }
    if (s==0)
    printf("True");
   
     return 0;
}












