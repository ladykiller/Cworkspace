#include <cstdlib>
#include <iostream>
#include "commonTool.h"
#include "sorts.h"

using namespace std;

int main(int argc, char *argv[])
{
    int i,n;
    printf("请输入随机数组大小：");
    scanf("%d",&n);
    int* randArray = randNumGenerate(n);
    quickSortWa(randArray,0,n-1);
    for(i=0;i<n;i++){
        printf("%d\n",randArray[i]);
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
