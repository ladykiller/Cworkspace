#include <cstdlib>
#include <iostream>

/*
  Name:  面试题库
  Copyright: wheatmark 
  Author: hajima11@163.com
  Date: 10/03/13 14:28
  Description: 面试题库
*/

/*

  Name: createNewArrayWithoutDivision 
  Param: int* a 传入数组 
  Param: int* b 用于存储新数组 
  return: void
  Description:  腾讯面试题，TencentAdditionalQuestions
                
                给定一数组a[N]，我们希望构造数组b [N]，其中b[j]=a[0]*a[1]…a[N-1] / a[j]，在构造过程中，不允许使用除法：
                
                要求O（1）空间复杂度和O（n）的时间复杂度；
                
                除遍历计数器与a[N] b[N]外，不可使用新的变量（包括栈临时变量、堆空间和全局静态变量等）；
                
                实现程序（主流编程语言任选）实现并简单描述。

*/
void createNewArrayWithoutDivision(int* a,int* b,int n);
