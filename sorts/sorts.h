#include <cstdlib>
#include <iostream>

/*
  Name: ����� 
  Copyright: wheatMark
  Author: hajima11@163.com
  Date: 08/04/13 16:51
  Description: ���������㷨 
*/


/*
  Name: quickSort 
  Param: int* arr  ��Ҫ��������� 
  Param: int start  ������ʼ�±� 
  Param: int end  ������ֹ�±� 
  return: void
  Description: ��������ʹ�õ�˼���ǣ���һ����Ϊ�ڱ������������뽻����
               ���������ҵ�һ�����ڱ�С��������¼�±�j��
               ���������ҵ�һ�����ڱ����������¼�±�i�����i<j,����λ�á�
               ֱ��i<j����������ʱ��jӦ�øո�ָ��һ������������������ʱ�������ڱ�������
               ����ʼλ�õ�j-1��j+1����ֹλ�÷ָ��������䷢��ݹ顣 
*/
void quickSort(int* arr,int start,int end);

/*
  Name: quickSortWa 
  Param: int* arr  ��Ҫ��������� 
  Param: int start  ������ʼ�±� 
  Param: int end  ������ֹ�±� 
  return: void
  Description: ��������ʹ�õ�˼���ǣ��ڿ�˼�롣�ѵ�һ��������������ˣ�����һ���ӣ���¼�±�i��
               ���������ҵ�һ���ȱ��С��������¼�±�j�����i<j,���±�j���������±�i,��ƽ�±�i��
               ���������ҵ�һ���ȱ�˴��������¼�±�i�����i<j,���±�j���������±�i,��ƽ�±�j��
               ֱ��i<j����������ʱi��j�����ڵ����Լ���ʱ��ͣ������i,j��ֵ��ȡ�
               ���ﻹ�����һ���ӡ��ñ����ƽ��������ʼλ�õ�j-1��j+1����ֹλ�÷ָ��������䷢��ݹ顣
               ʹ��i��j����ݹ鶼�ǿ��Եġ� 
*/
void quickSortWa(int* arr,int start,int end);

/*
  Name: bubbleSort 
  Param: int* arr  ��Ҫ��������� 
  Param: int n  ���鳤�� 
  return: void
  Description: ð������ʱ�临�Ӷ�n^2 
*/
void bubbleSort(int* arr,int n);

/*
  Name: allPermutation 
  Param: int* arr  ȫ�������� 
  Param: int m  ȫ������ʼλ�� 
  Param: int n  ȫ������ֹλ�� 
  return: void
  Description:  ��ӡȫ���е�������� 
*/
void allPermutation(int* arr,int m,int n);

/*
  Name: allPermutationValue 
  Param: int n  ȫ����λ��
  return: void
  Description:  ����ȫ���и�������n! 
*/
int allPermutationValue(int n);
