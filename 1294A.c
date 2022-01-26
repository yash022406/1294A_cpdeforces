#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c,n;
        scanf("%d %d %d %d",&a,&b,&c,&n);
        int max;
        max=a>b?a>c?a:c:b>c?b:c;
        printf("%d\n",max);
    }
    return 0;
}