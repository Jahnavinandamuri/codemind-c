#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int min=1;
    int flag;
   while(1){
       flag=0;
       for(int i=0;i<n;i++){
           if(a[i]==min){
               flag=1;
               break;
           }
       }
       if(flag==0){
            printf("%d",min);
            break;
       }
       min++;
   }
    return 0;
}    
