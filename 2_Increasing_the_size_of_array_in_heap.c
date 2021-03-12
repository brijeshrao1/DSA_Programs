//Increasing the size of the array into the Heap

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *p,*q,i;
	//creating first array
	p=(int*)malloc(5*sizeof(int));
	p[0]=1;
	p[1]=2;
	p[2]=3;
	p[3]=4;
	p[4]=5;	
	
	//printng the the arry created in heap
	for(i=0;i<5;i++)
	{
		printf(" %d",p[i]);
	}
	printf("\n");
	//creating second array
	q=(int*)malloc(10*sizeof(int));
	
	//copying the data of first array into the second array
	for(i=0;i<5;i++)
	{
		q[i]=p[i];
	}
	
	free(p);
	p=q;
	q=NULL;
	//printng the the arry created in heap
	for(i=0;i<5;i++)
	{
		printf(" %d",p[i]);
	}
getch();
return 0;
}

