///wee-1.cpp ��ƧP�O
#include <stdio.h>
int isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)return 0;///����
    }
    return 1;///���\!!�������঳�\�A���r!!
}
int main(){
    printf("�_��J1�Ӽ�:");
    int n;
    scanf("%d",&n);
    if(isPrime(n))printf("n�O���");
    else printf("n���O���");
}