#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main ()
{
	int  arr[]={1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int as = sizeof(arr)/sizeof(arr[0]);//计算元素的个数==10
	int left = 0;//左下标
	int right = as -1;//右下标
	while(left<=right)
	{
		int mid = (left+right)/2;
		if(arr[mid] >k)
		{
			right = mid -1;
		}
		else if(arr[mid] < k)

		{
			left = mid +1;
		}
		else
		{
			printf("找到了，下标是：%d\n",mid);
		break;
		}
	}	
			if(left>right)
		{
			printf("找不到\n");
		}
	return 0;
}