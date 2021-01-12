#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int max(int x,int y)
//{
//	if(x>y)
//		return x;
//	else
//		return y;
//		
//}
int main()
{
	//条件操作符
	int a  = 10;
	int b = 20;
	int add = 0;
	add (a>b? a:b);
	//a是否大于b，是的话他会输出a，不是的话他会输出b
	





	//逻辑操作符
	//真 -- 是非零的数都是真的
	//假 -- 为零
	//&& -- 逻辑与 ：意思就是两个条件都要是真的最后答案才是真
	//|| -- 逻辑或 ， 有一个是真的结果就是真的。
	//显示1就是真的，显示出零意思就是假的。
	//int a = 3;
	//int b = 5;
	//int c = a && b ;
	///*inr c = a || b ;*/
	//printf("c = %d\n",c);




	//1和-1从他存储的地方可以看出来，
	//[][][][][][][][][][][][][][][][]在最高位上他是1的话那这个数就为负数，为零的话就是正数。
	//int num1 = 10;
	//int num2 = 30;
	//int sum = 0; 
	//sum = max (num1,num2);
	//printf("sum=%d\n",sum);
		
//	//较大值
//	int num1 = 10;
//	int num2 = 40;
//	if(num1>num2)
//		printf("最大值：%d\n",num1);
//	else 
//	printf("最大值：%d\n",num2);
		
	
	return 0;
}
