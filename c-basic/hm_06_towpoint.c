#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void printArray(int ** pArray, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", *pArray[i]);
	}

}

void test61()
{
	//创建在堆区
	int ** pArray = malloc(sizeof(int *) * 5);

	//在栈上创建5个数据
	int a1 = 10;
	int a2 = 20;
	int a3 = 30;
	int a4 = 40;
	int a5 = 50;

	pArray[0] = &a1;
	pArray[1] = &a2;
	pArray[2] = &a3;
	pArray[3] = &a4;
	pArray[4] = &a5;

	//打印数组
	printArray(pArray, 5);

	//释放堆区数据
	if (pArray != NULL)
	{
		free(pArray);
		pArray = NULL;
	}

}

void freeSpace(int **pArray, int len)
{
	for (int i = 0; i < len; i++)
	{
		free(pArray[i]);
		pArray[i] = NULL;
	}

}

void test62()
{
	//创建在栈区
	int * pArray[5];

	for (int i = 0; i < 5; i++)
	{
		//每个index分配4个字节的空间，集在堆区开辟空间

		pArray[i] = malloc(4);
		//
		*(pArray[i]) = 10 + i;
	}

	printArray(pArray, 5);

	//释放堆区
	freeSpace(pArray, 5);

}

int main6() {

	//test61();
	test62();

	system("pause");
	return EXIT_SUCCESS;
}