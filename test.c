#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//1��-10���׳˵���ӡ�
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



	////n�Ľ׳�
	//int i = 0;
	//int n = 0;
	//int sum =1;
	//scanf("%d",&n);
	//for(i=1;i<=n;i++)//�ȸ�n����һ������Ȼ������i��=n�ٰѵ�һ�ֵĽ���Ž�һ��sum����һ�־�i++Ȼ���ۼơ�
	//{
	//	sum = sum*i;
	//	
	//}
	//printf("%d",sum);
	return 0;
}