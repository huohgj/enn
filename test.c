#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	char password[]={0};
	
	for(i=0;i<3;i++)
	{
		printf("请输入密码： ");
		scanf("%s",password);
		if(strcmp(password,"13537986917")==0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入！\n");
		}
	}
	if(i == 3)
	{
		printf("密码次数已达三次，自动退出\n");

	}



	//char arr1[]="come on baby !!!!";
	//char arr2[]="#################";
	//int left = 0;
	//int right = strlen(arr1)-1;//计算字符串的数量，用头文件string.h
	//while(left<=right)
	//{
	//arr2[left]=arr1[left];
	//arr2[right]=arr1[right];
	//Sleep(1000);//毫秒,要用头文件Windows.h
	//printf("%s\n",arr2);
	//left++;
	//right--;
	///*system("cls");*/
	//}
	return 0;

}