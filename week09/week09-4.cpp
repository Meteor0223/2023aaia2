///week09-4.cpp �r�ꪺ�禡 �ҥ� Page 4-8
#include <stdio.h>
#include <string.h>///�n�ϥ�[�r�ꪺ�禡]
int main(){
    char line[100];
    printf("�п�J�@��r���A���n���Ů�A�̫���浲����J\n");
    scanf("%s",line);

    int N=strlen(line);///�d�X�r�����
    printf("�r�ꪺ���׬O:%d\n",N);
    ///strcpy(a,"Hello");�r�����   string copy
    ///strcat(a,b):�r�굲�X ��k��b ���쥪��a���᭱  concatenate
    ///strcmp(a,b);�r����(�v�r������A�ݽ֤���j)  string compare
}
