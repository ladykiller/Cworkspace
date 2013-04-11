#include <cstdlib>
#include <iostream>
#include <algorithm>
#include "sorts.h"

void swap(int &a,int &b){
     int t=a;a=b;b=t;
}

void quickSort(int* arr,int start,int end){
     if(start<end){
         int key=arr[start],i=start,j=end+1,temp;
         while(i<j){
             while(arr[++i]<key&&i<end);
             while(arr[--j]>key);//--j��������arr[j]�������Լ���С��������ʱͣ������j--,ͣ������Ҫ��1�����׳���-1Խ�硣 
             if(i<j){
                 temp=arr[i];
                 arr[i]=arr[j];
                 arr[j]=temp;
             }
         }
         arr[start]=arr[j];
         arr[j]=key;               
         quickSort(arr,start,j-1);
         quickSort(arr,j+1,end);
     }
}

void quickSortWa(int* arr,int start,int end){
     if(start<end){
         int key=arr[start],i=start,j=end;
         while(i<j){
             while(i<j&&arr[j]>key)j--;
             if(i<j){
                 arr[i]=arr[j];
                 i++;
             }
             while(i<j&&arr[i]<key)i++;
             if(i<j){
                 arr[j]=arr[i];
                 j--;
             }
         }
         arr[j]=key;//���i��j�����ڵ����Լ���ʱ��ͣ������i,j��ֵ��ȡ�����ʹ��i��j����ݹ鶼�ǿ��Եġ� 
         quickSortWa(arr,start,j-1);
         quickSortWa(arr,j+1,end);
     }     
}

void bubbleSort(int* arr,int n){
     int i,j,t,temp;
     for(i=0;i<n;i++){
         t=n-i;
         for(j=1;j<t;j++){
             if(arr[j]<arr[j-1]){
                 temp=arr[j];
                 arr[j]=arr[j-1];
                 arr[j-1]=temp;
             }
         }
     }
}

void allPermutation(int* arr,int m,int n){
     if(m==n){
         int i;
         for(i=0;i<=n;i++)
             printf("%d\t",arr[i]);
         printf("\n");
     }else{
         int j;
         for(j=m;j<=n;j++){
             swap(arr[m],arr[j]);
             allPermutation(arr,m+1,n);
             swap(arr[m],arr[j]);
         }
     }
}

int allPermutationValue(int n){
     if(n==1) return 1;
     return n*allPermutationValue(n-1);
}
