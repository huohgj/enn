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
		printf("���������룺 ");
		scanf("%s",password);
		if(strcmp(password,"13537986917")==0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("����������������룡\n");
		}
	}
	if(i == 3)
	{
		printf("��������Ѵ����Σ��Զ��˳�\n");

	}



	//char arr1[]="come on baby !!!!";
	//char arr2[]="#################";
	//int left = 0;
	//int right = strlen(arr1)-1;//�����ַ�������������ͷ�ļ�string.h
	//while(left<=right)
	//{
	//arr2[left]=arr1[left];
	//arr2[right]=arr1[right];
	//Sleep(1000);//����,Ҫ��ͷ�ļ�Windows.h
	//printf("%s\n",arr2);
	//left++;
	//right--;
	///*system("cls");*/
	//}
	return 0;

}