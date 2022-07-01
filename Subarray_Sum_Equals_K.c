#include<stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n],c=0;
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            if(sum>k)
            break;
            if(sum==k)
            c++;
            
        }
    }
   printf("%d",c);
    return 0;
}








