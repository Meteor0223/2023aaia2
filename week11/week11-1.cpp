#include <stdio.h>
int func(int n){
    if(n==1)return 1;
    return n*func(n-1);
}
int main(){
    int n;
    printf("�п�J�@�ӼƦr: ");
    scanf("%d",&n);
    int ans = func(n);
    printf("���׬O:%d",ans);
}