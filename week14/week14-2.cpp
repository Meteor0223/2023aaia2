#include <stdio.h>
int main(){
    char c;
    char s[100];
    printf("�п�J�@��r,�̭��i�H���Ů�,������浲�� :");
    gets(s);
    printf("�AŪ�J�F: %s\n",s);
    printf("�п�J�A���^��W�r,�̭����঳�Ů�: ");
    scanf("%s",s);///���Υ[&
    printf("�A���^��W�r�O: %s\n",s);
    printf("�ЦA��J�@���A���W�r: ");
    scanf("%c",&c);///Ū�����
    printf("�ѪGŪ��F: %c",c);
}