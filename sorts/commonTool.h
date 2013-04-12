#include <cstdlib>
#include <iostream>
#include <time.h>
#include <malloc.h>

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

/*
  Name: getTime 
  return: double
  Description: ���ص�ǰʱ�����һ�����ڼ�ʱ 
*/
double getTime();

/*
  Name: swap 
  return: void
  Description: ����������ֵ 
*/
void swap(int &a,int &b);

/*
  Name: printArray 
  Param: int* ch arr ��Ҫ��ӡ������ 
  Param: int n ���鳤�� 
  return: void
  Description: ���Ŵ�ӡ���� 
*/
void printArrayV(int* arr,int n);

/*
  Name: printArray 
  Param: int* ch arr ��Ҫ��ӡ������ 
  Param: int n ���鳤�� 
  return: void
  Description: ���Ŵ�ӡ���� 
*/
void printArrayH(int* arr,int n);
