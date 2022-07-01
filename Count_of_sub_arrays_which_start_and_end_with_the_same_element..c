#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],c=0;
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        int sum=a[i];
        for(int j=i;j<n;j++){
            if(sum==a[j])
            c++;
        }
    }
   printf("%d",c);
    return 0;
}

