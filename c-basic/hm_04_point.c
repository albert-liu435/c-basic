#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void test41()
{
	char * p = malloc(sizeof(char) * 64);
	char * pp = p; //通过创建临时指针操作内存，防止出错
	for (int i = 0; i < 10; i++)
	{
		*pp = i + 97;
		printf("%c\n", *pp);
		pp++; //更改指针位置，释放出错
	}

	if (p != NULL)
	{
		free(p);
	}


}

int main4() {
	test41();


	system("pause");
	return EXIT_SUCCESS;
}