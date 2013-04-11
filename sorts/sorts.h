#include <cstdlib>
#include <iostream>

/*
  Name: 排序库 
  Copyright: wheatMark
  Author: hajima11@163.com
  Date: 08/04/13 16:51
  Description: 各种排序算法 
*/


/*
  Name: quickSort 
  Param: int* arr  需要排序的数组 
  Param: int start  数组起始下标 
  Param: int end  数组终止下标 
  return: void
  Description: 快速排序。使用的思想是：第一个数为哨兵，独立不参与交换。
               从右往左找到一个比哨兵小的数，记录下标j。
               从左往右找到一个比哨兵大的数，记录下标i。如果i<j,交换位置。
               直到i<j不成立。此时的j应该刚刚指向一个不大于他的数。此时将他与哨兵交换。
               以起始位置到j-1和j+1到终止位置分割两段区间发起递归。 
*/
void quickSort(int* arr,int start,int end);

/*
  Name: quickSortWa 
  Param: int* arr  需要排序的数组 
  Param: int start  数组起始下标 
  Param: int end  数组终止下标 
  return: void
  Description: 快速排序。使用的思想是：挖坑思想。把第一个数挖起来当标杆，留下一个坑，记录下标i。
               从右往左找到一个比标杆小的数，记录下标j。如果i<j,用下标j的数赋给下标i,填平下标i。
               从左往右找到一个比标杆大的数，记录下标i。如果i<j,用下标j的数赋给下标i,填平下标j。
               直到i<j不成立。此时i和j都会在等于自己的时候停下来。i,j的值相等。
               这里还有最后一个坑。用标杆填平他。以起始位置到j-1和j+1到终止位置分割两段区间发起递归。
               使用i或j发起递归都是可以的。 
*/
void quickSortWa(int* arr,int start,int end);

/*
  Name: bubbleSort 
  Param: int* arr  需要排序的数组 
  Param: int n  数组长度 
  return: void
  Description: 冒泡排序，时间复杂度n^2 
*/
void bubbleSort(int* arr,int n);

/*
  Name: allPermutation 
  Param: int* arr  全排列数组 
  Param: int m  全排列起始位置 
  Param: int n  全排列终止位置 
  return: void
  Description:  打印全排列的所有情况 
*/
void allPermutation(int* arr,int m,int n);

/*
  Name: allPermutationValue 
  Param: int n  全排列位数
  return: void
  Description:  计算全排列个数，即n! 
*/
int allPermutationValue(int n);
