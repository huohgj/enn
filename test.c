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


//ΪʲôҪ�õ�ַ���� ����Ϊ�����������ʽ����������ʵ��ʵ�ʲ�����һ����ʱ���������ܸĵ�������Ĳ�����
//��������õ�ַ�ķ�ʽ���ȥ����ַ���ã��Ϳ��Ը��ݵ�ַ�ĵ�����Ĳ���
//�����������x,y��ôx��y�����ⴴ��һ���µĵ�ַ��a��b��ͬ��
int add(int* pa,int* pb)
{
		int tam =0;
		tam = *pa;
		*pa = *pb;
		*pb=tam;
		
}

int main()
{
	//��a��b��ֵ����
	int a = 10;
	int b = 20;
	printf("a=%d b=%d",a,b);
	add(&a,&b);
	printf("a=%d b=%d",a,b);


	////��100��200֮���  ����
	//int i = 0;
	//for(i=100;i<=200;i++)
	//{
	//	//�����ǲ���һ������
	//	if(is_prime(i) == 1 )
	//		printf("%d",i);
	//	
	//}
	return 0;
}