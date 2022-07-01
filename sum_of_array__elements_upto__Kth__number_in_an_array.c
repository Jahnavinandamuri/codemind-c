#include<stdio.h>

int main(){
    int n,t,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d ",&a[i]);
    int key,min=9999999,max=0;
    scanf("%d",&key);
   
    for(int i=0;i<key;i++)
    {
        
            c+=a[i];
        
    }
    printf("%d",c);
    return 0;
}