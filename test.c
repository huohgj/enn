#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i =0;
	//����ʼ�����жϣ�������
	for(i=1;i<=10;i++)
	{
		if(5 == i)
		break;
		printf("%d\n",i);
	}


	//int ch= 0;
	//int sb= 0;
	//char passwork [20] ={0};
	//printf("���������룺");
	//scanf("%s",passwork);
	///*getchar();*/
	//while ((sb = getchar()) != '\n')//�����������123456�ո�aaaaaa����������Ҫ��whileѭ��getchar������6����Ķ���ȡ������\n
	//{
	//		;//�������ִ��ʲô���
	//}
	//
	////����������123456��scanfֻ���������123456��ȡ�ˣ���ΪҪ���س������ڻ�����������123456\n��\n==10
	////ch�ͻ��\n��ȡ�����Ի�ֱ�ӽ���if�����Ϊ10 ��=1���Ի�ֱ���ж�Ϊ����ȷ�ϡ�����ֻ��Ҫ��ǰ��Ӹ�getchar������

	//
	//printf("�Ƿ�ȷ��(1/0)");
	//ch= getchar();
	//if(ch == '1')//�ǵô��ַ�Ҫ��''
	//{
	//	printf("��¼�ɹ�");
	//}
	//else
	//{
	//		printf("����ȷ��");
	//}
			return 0;
}