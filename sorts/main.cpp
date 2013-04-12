#include <cstdlib>
#include <iostream>
#include "commonTool.h"
#include "sorts.h"

using namespace std;

int main(int argc, char *argv[])
{
    int i,n;
    double start,finish;
    printf("��������������С��");
    scanf("%d",&n);
    int* randArray = randNumGenerate(n);
    allPermutation(randArray,0,n-1);
    printf("�� %d ��������ϣ�\n",allPermutationValue(n));
    bubbleSort(randArray,n);
    printArrayH(randArray,n); 
    randArray = randNumGenerate(n);
    quickSort(randArray,0,n-1);
    printArrayH(randArray,n); 
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
