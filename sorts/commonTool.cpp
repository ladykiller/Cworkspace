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
  Name: 常用函数库 
  Copyright: wheatmark 
  Author: hajima11@163.com
  Date: 10/03/13 14:28
  Description: 常用函数库
*/

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

double getTime(){
     clock_t start = clock();
     double duration = (double) start/ CLOCKS_PER_SEC; 
     return duration;
}

void swap(int &a,int &b){
     int t=a;a=b;b=t;
}

void printArrayV(int* arr,int n){
     int i;
     for(i=0;i<n;i++){
         printf("%d\n",arr[i]);
     }
}

void printArrayH(int* arr,int n){
     int i;
     for(i=0;i<n;i++){
         printf("%d\t",arr[i]);
     }
     printf("\n");
}
