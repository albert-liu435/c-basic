#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//1、全局变量检测增强
int a;
int a = 10;


//2、函数检测增强  返回值没有检测  形参类型没有检测   函数调用参数个数没有检测
getRect5S(w, h)
{

	return w * h;
}
void test51()
{
	printf("%d\n", getRect5S(10, 10, 10));
}


//3、类型转换检测增强
void test52()
{
	char * p = malloc(64);
}


//4、struct增强
struct Person
{
	int age;
	//void func(); C语言下 结构体不可以有函数
};

void test53()
{
	struct Person p; //创建结构体变量时候，必须加关键字struct
	p.age = 100;
}


//5、bool类型扩展  C语言下 没有这个类型
//bool a;


//6、三目运算符增强
void test54()
{
	//?:
	int a = 10;
	int b = 20;

	printf("ret = %d\n", a > b ? a : b);

	*(a > b ? &a : &b) = 100;  //C语言下 返回的是值  20 = 100

	printf("a = %d\n", a);
	printf("b = %d\n", b);

}


//7、const增强
//全局const
const int m_A = 100; // 受到常量区保护，运行修改失败

void test55()
{
	//m_A = 200;
	//int * p = &m_A;
	//*p = 200;

	//局部const
	const int m_B = 100; //分配到栈上
	//m_B = 200;
	int * p = &m_B;
	*p = 200;

	printf("%d\n", m_B);

	//int arr[m_B]; 在C语言下 const是伪常量，不可以初始化数组

}



int main0501() {

	//test51();
	test52();
	//test05();


	system("pause");
	return EXIT_SUCCESS;
}