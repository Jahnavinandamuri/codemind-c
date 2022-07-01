#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int l[n];
    for(int i=0;i<n;i++)
    scanf("%d ",&l[i]);
    
    int n2;
    scanf("%d",&n2);
    int l1[n2];
    for(int i=0;i<n2;i++)
    scanf("%d ",&l1[i]);
    int q,c=0;
    scanf("%d",&q);
    for(int i=0;i<n;i++){
        for(int j=l[i];j<=l1[i];j++){
            if(j==q){
                c++;
            }
        }
    }
    printf("%d",c);
    return 0;
    
    
    
}