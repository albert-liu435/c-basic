#include <stdio.h>
#define MAX 10 //声明了一个常量，名字叫MAX，值是10，常量的值一旦初始化不可改

int main0201()
{
	int a;	//定义了一个变量，其类型为int，名字叫a

	const int b = 10; //定义一个const常量，名为叫b，值为10
	//b = 11; //err,常量的值不能改变

	//MAX = 100;	//err,常量的值不能改变

	a = MAX;//将abc的值设置为MAX的值
	a = 123;

	printf("%d\n", a); //打印变量a的值

	return 0;
}
