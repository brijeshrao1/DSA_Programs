//creating 2d array 

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{	
	//first Array
	int arr1[][]={{1,2,3},{4,5,6}};
	int *arr2[3];
	int **arr3;
	int i,j;
	
	//Second Array
	arr2[0]=(int*)malloc(3*sizeof(int));
	arr2[1]=(int*)malloc(3*sizeof(int));
	arr2[2]=(int*)malloc(3*sizeof(int));
	
	//Third Array
	arr3=(int**)malloc(3*sizeof(int));//creating array pointer in heap
	arr3[0]=(int*)malloc(3*sizeof(int));
	arr3[1]=(int*)malloc(3*sizeof(int));
	arr3[2]=(int*)malloc(3*sizeof(int));
	
getch();
retunr 0;
}
