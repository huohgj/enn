#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int is_prime(int n)
//{
//	int j =2;
//	
//	
//		if(n%j == 0)
//		{
//		return 0;
//		}
//	return 1;
//}\


//为什么要用地址的捏 ，因为函数设的是形式参数，他其实是实际参数的一份临时拷贝，不能改掉函数外的参数。
//如果我们用地址的方式搞过去：传址调用；就可以根据地址改掉外面的参数
//如果里面是设x,y那么x和y会另外创建一个新的地址跟a和b不同。
int add(int* pa,int* pb)
{
		int tam =0;
		tam = *pa;
		*pa = *pb;
		*pb=tam;
		
}

int main()
{
	//把a和b的值调换
	int a = 10;
	int b = 20;
	printf("a=%d b=%d",a,b);
	add(&a,&b);
	printf("a=%d b=%d",a,b);


	////求100到200之间的  素数
	//int i = 0;
	//for(i=100;i<=200;i++)
	//{
	//	//求他是不是一个素数
	//	if(is_prime(i) == 1 )
	//		printf("%d",i);
	//	
	//}
	return 0;
}