#include <cstdlib>
#include <iostream>
#include <time.h>
#include <malloc.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include "commonTool.h"

using namespace std;

/*
  Name: ���ú����� 
  Copyright: wheatmark 
  Author: hajima11@163.com
  Date: 10/03/13 14:28
  Description: ���ú�����
*/

int* randNumGenerate(int n){
    int i;
    int *randArray = (int *)malloc(n*sizeof(int));
    if(randArray==NULL){
        printf("��̬�����ڴ�ʧ�ܣ�\n");
        exit(1);//�쳣�˳�
    }
    srand( time(NULL) );    
    for( i = 0; i < n; i++ ){
      randArray[i]=1+(int)(1000*rand()/(RAND_MAX+1.0));
    }
    return randArray;
}
                                                                                              
int getArrayLen(int* array){
    return (sizeof(array) / sizeof(array[0]));
}

void writeLog(char* ch,FILE* fp){
    int i,n;
    n=strlen(ch);
    for(i=0;i<n;i++){
        fputc(ch[i],fp);
    }
}
