#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include "commonTool.h"
#include "interviews.h"

int main()
{	
    int i,n;
    int* a;
    int* b;
    printf("输入数组大小");
    scanf("%d",&n); 
    a=randNumGenerate(n);
    b=randNumGenerate(n);
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    createNewArrayWithoutDivision(a,b,n);
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d\t",b[i]);
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
