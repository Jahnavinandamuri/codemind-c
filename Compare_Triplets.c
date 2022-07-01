#include<stdio.h>
int main(){
    int a[3],b[3];
    int al=0,bo=0;
    for(int i=0;i<3;i++)
    scanf("%d ",&a[i]);
    for(int i=0;i<3;i++)
    scanf("%d ",&b[i]);
    for(int i=0;i<3;i++){
        if(a[i]>b[i])
        al++;
        else if(a[i]<b[i])
        bo++;
    }
    printf("%d %d",al,bo);
    return 0;
    
}


