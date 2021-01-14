#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>	
#include <string.h>
//结构体
	//说明一个人：名字+身高+年龄+身份证号码
	//说明一本书：书名+出版社+定价+书号
	//这是一种复杂对象 -- 结构体 -- 我们自己创造出来的一种类型
	//struct
struct BOOK
	{
		//把他需要的东西创建出来
		char name [20];//用char创建出来一个数组
		short price;
	
	};
int main ()
{
	//然后在main函数里面引用写值
	//利用结构体类型创建一个该类型的结构体变量
	struct BOOK b1 = {"c语言程序设计",55};//给这个struct BOOK一个名字叫b1
	//printf ("书名:%s\n",b1.name);//然后用给的名字b1加上.和需要打印的东西。
	//printf ("定价%d\n",b1.price);
	 struct BOOK* pd = &b1;//存放pd地址的是你创建的结构体名不是单个struct。
	 printf("%s\n",(*pd).name);//利用存放的地址找到b1然后打印名字
	 printf("%s\n",pd->name);
	 //. 是结构体变量的成员
	 //-> 是用结构体指针来指向成员的。
	 b1.price = 15;//一个变量可以直接改数据但数组不可以直接改比如name是一个数组
	 strcpy (b1.name,"c++");//strcpy -- string cupy -- 字符串拷贝；就是把后面c++拷贝进b1.name把C语言程序设计替换掉。
	 //因为strcpy是一个库函数要用一个头文件叫 include<string.h>
	 printf ("%s\n",pd ->name);

return 0;
}
