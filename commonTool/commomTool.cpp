#include <cstdlib>
#include <iostream>
#include <time.h>
#include <malloc.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

using namespace std;

/*
  Name: ���ú����� 
  Copyright: wheatmark 
  Author: hajima11@163.com
  Date: 10/03/13 14:28
  Description: ���ú�����
*/

/*
  Name: getArrayLen 
  Param: int* array ��������ȵ����� 
  return: int �������鳤��
  Description: �������鳤��
*/
int getArrayLen(int* array);

/*
  Name: randNumGenerate 
  Param: int n �������������Ĵ�С 
  return: int* ��������
  Description: ����ָ����С,1000���ڵ�������� 
*/
int* randNumGenerate(int n);

/*
  Name: writeLog 
  Param: char* ch ��Ҫд����ַ��� 
  Param: FILE* fp �򿪵��ļ���� 
  return: void
  Description: ���ļ�д���ַ��� 
*/
void writeLog(char* ch,FILE* fp);

int main(int argc, char *argv[])
{
    int i,n;
    printf("��������������С��");
    scanf("%d",&n);
    int* randArray = randNumGenerate(n);
    
    for( i = 0; i < n; i++ ){
         printf( "Random number #%d: %d\n", i, randArray[i]);
    }
    
    free(randArray);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

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
