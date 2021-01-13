#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//static 修饰局部变量时，局部变量的生命是周期变长
//意思就是本来不用static修饰的话每过一次循环test函数里面的a都会因为出了生命周期而还给系统，再一次循环就会重现创一个a
//a会被刷新，但是加上static就会把之前的值给累计保留下来。然再运行a++
//static修饰全局变量的时候，会改变变量的作用域，让他只能在自己原来的源文件下使用，不能共享出其他的文件里面用
//static修饰函数跟修饰全局变量一样不能共享出去用。改变了函数的链接属性
//外部链接属性-》 内部链接属性
//extern:声明外部函数所用的东西。
//extern int add(int int);直接在表示函数里面的是整数还是什么。
//void test()
//{
//	static int a = 1;
//	a++;
//		printf("%d\n",a);
//}
//#define MAX 10
//定义标识常量
//可以用来定义宏-带参数的
//#define MAX(x,y) (x>y?x:y)
//int add (int x ,int y)
//{
//	if(x>y)
//		return x;
//	else
//		return y;
//
//}
int main ()
{

	int a = 10;
	//&a;//&为取地址符
	int* p = &a;//有一种变量是用来存放地址的 - 指针变量 int*是用来表示地址的。
	*p = 20;//* - 解引用操作符。可以用它来表示 a 把a= 10，改为20.
		printf("%d\n",a);
	printf("%p\n",&a);
	//%p是用来打印地址的




	//int a = 10;
	//int b = 20;
	//int max = 0;
	////函数方法
	//int as = add(a,b);
	//printf("%d\n",as);

	////宏的方式求哪个大
	//max = MAX(a,b);
	//printf ("%d\n",max);



	//int i = 0;
	//while(i<5)
	//{
	//	test();
	//		i++;
	//}
	//
	return 0;
}