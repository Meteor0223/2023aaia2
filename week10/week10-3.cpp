#include <stdio.h>
int myPrint(int a){
    for(int i=0;i<a;i++){printf("�O");}
    printf("\n");
    ///�S��return�S���ѼƥX�h
}
int main(){
    myPrint(5);
    myPrint(4);
    myPrint(3);
    myPrint(2);
    myPrint(1);
}
