//Creating Array in heap

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main()
{
	int *p;
	int i;
	//Creating array in the stack
	int arr[]={0,11,22,33,44};
	
	//creating array in heap
	p=(int*)malloc(5*sizeof(int));
	p[0]=0;
	p[1]=1;
	p[2]=2;
	p[3]=3;
	p[4]=4;
	
	//printing arry in the stack
	for(i=0;i<5;i++)
		printf(" %d",arr[i]);
	printf("\n");
	//printing the arry in heap
	for(i=0;i<5;i++)
		printf(" %d",p[i]);
getch();
return 0;
}
