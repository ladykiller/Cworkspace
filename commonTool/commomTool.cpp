#include <cstdlib>
#include <iostream>
#include <time.h>
#include <malloc.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

using namespace std;

/*
  Name: 常用函数库 
  Copyright: wheatmark 
  Author: hajima11@163.com
  Date: 10/03/13 14:28
  Description: 常用函数库
*/

/*
  Name: getArrayLen 
  Param: int* array 需计量长度的数组 
  return: int 返回数组长度
  Description: 计量数组长度
*/
int getArrayLen(int* array);

/*
  Name: randNumGenerate 
  Param: int n 需生成随机数组的大小 
  return: int* 返回数组
  Description: 生成指定大小,1000以内的随机数组 
*/
int* randNumGenerate(int n);

/*
  Name: writeLog 
  Param: char* ch 需要写入的字符串 
  Param: FILE* fp 打开的文件句柄 
  return: void
  Description: 往文件写入字符串 
*/
void writeLog(char* ch,FILE* fp);

int main(int argc, char *argv[])
{
    int i,n;
    printf("请输入随机数组大小：");
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
        printf("动态申请内存失败！\n");
        exit(1);//异常退出
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
