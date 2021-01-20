#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//1！-10！阶乘的相加。
	int i = 0;
	int n = 0;
	int set = 0;
	int sum = 1;
	for(n=1;n<=10;n++)
	{
		for(i=1;i<=n;i++)
		{
			sum = sum *i;

		}
			set = sum +set;
			
	}
	printf("set = %d",set);



	////n的阶乘
	//int i = 0;
	//int n = 0;
	//int sum =1;
	//scanf("%d",&n);
	//for(i=1;i<=n;i++)//先给n接收一个数，然后用设i《=n再把第一轮的结果放进一个sum里下一轮就i++然后累计。
	//{
	//	sum = sum*i;
	//	
	//}
	//printf("%d",sum);
	return 0;
}