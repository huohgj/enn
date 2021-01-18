#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i =0;
	//（初始化；判断；调整）
	for(i=1;i<=10;i++)
	{
		if(5 == i)
		break;
		printf("%d\n",i);
	}


	//int ch= 0;
	//int sb= 0;
	//char passwork [20] ={0};
	//printf("请输入密码：");
	//scanf("%s",passwork);
	///*getchar();*/
	//while ((sb = getchar()) != '\n')//如果密码输入123456空格aaaaaa，那我们需要用while循环getchar（）把6后面的都读取掉包括\n
	//{
	//		;//这代表不用执行什么命令；
	//}
	//
	////我输入密码123456，scanf只把我输入的123456提取了，因为要按回车所以在缓冲区会留下123456\n，\n==10
	////ch就会把\n提取，所以会直接进入if语句因为10 ！=1所以会直接判断为放弃确认。我们只需要在前面加个getchar（）；

	//
	//printf("是否确认(1/0)");
	//ch= getchar();
	//if(ch == '1')//记得打字符要打''
	//{
	//	printf("登录成功");
	//}
	//else
	//{
	//		printf("放弃确认");
	//}
			return 0;
}