#include <cstdlib>
#include <iostream>
#include<stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

using namespace std;

/**
** countPage.cpp
** ������ҳҳ�����õ����ַ����� 
**/

/**
*��¼��־
*char* ch Ϊ��־�ַ���;
*FIFE* fp Ϊ��־��¼�ļ��ľ��; 
**/
void writeLog(char* ch,FILE* fp);
/**
*��¼��־
*int n �鱾��ҳ��;
**/
void caulateNumber(int n);

int main(int argc, char *argv[])
{
    int countNum;
    printf("��������Ҫͳ�Ƶ�ҳ��:"); 
    scanf("%d",&countNum);
    caulateNumber(countNum);

    system("PAUSE");
    return EXIT_SUCCESS;
}

void caulateNumber(int n){
    int i,temp,counter[10]={0};
    char* ch;
    const char* wrap="\n";
    const char* tag="�ĸ���Ϊ: ";
    FILE* fp;
    if((fp=fopen("record.log","wt+"))==NULL)
    {
        printf("\nerror on open record.log!");
        getch();
        exit(1);
    }
    
    for(i=n;i>0;i--){
        temp=i;
        while(temp){
            //printf("iΪ%d����10��Ϊ%d\n",temp,temp%10);     
            switch(temp%10){
                case 0:counter[0]++;break;
                case 1:counter[1]++;break;
                case 2:counter[2]++;break;
                case 3:counter[3]++;break;
                case 4:counter[4]++;break;
                case 5:counter[5]++;break;
                case 6:counter[6]++;break;
                case 7:counter[7]++;break;
                case 8:counter[8]++;break;
                case 9:counter[9]++;break;                        
            }
            temp=temp/10;
        }            
    }
    int size = sizeof(counter)/sizeof(counter[0]);
    for(i=0;i<size;i++){
       printf("%d�ĸ���Ϊ��%d\n",i,counter[i]);
       itoa(i,ch,10);
       strcat(ch,tag);
       writeLog(ch,fp);
       itoa(counter[i],ch,10);
       strcat(ch,wrap);
       writeLog(ch,fp);
    }
    fclose(fp);
}

void writeLog(char* ch,FILE* fp){
    int i,n;
    n=strlen(ch);
    for(i=0;i<n;i++){
        fputc(ch[i],fp);
    }
}
