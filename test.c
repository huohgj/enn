#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>	
#include <string.h>
//�ṹ��
	//˵��һ���ˣ�����+���+����+���֤����
	//˵��һ���飺����+������+����+���
	//����һ�ָ��Ӷ��� -- �ṹ�� -- �����Լ����������һ������
	//struct
struct BOOK
	{
		//������Ҫ�Ķ�����������
		char name [20];//��char��������һ������
		short price;
	
	};
int main ()
{
	//Ȼ����main������������дֵ
	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
	struct BOOK b1 = {"c���Գ������",55};//�����struct BOOKһ�����ֽ�b1
	//printf ("����:%s\n",b1.name);//Ȼ���ø�������b1����.����Ҫ��ӡ�Ķ�����
	//printf ("����%d\n",b1.price);
	 struct BOOK* pd = &b1;//���pd��ַ�����㴴���Ľṹ�������ǵ���struct��
	 printf("%s\n",(*pd).name);//���ô�ŵĵ�ַ�ҵ�b1Ȼ���ӡ����
	 printf("%s\n",pd->name);
	 //. �ǽṹ������ĳ�Ա
	 //-> ���ýṹ��ָ����ָ���Ա�ġ�
	 b1.price = 15;//һ����������ֱ�Ӹ����ݵ����鲻����ֱ�Ӹı���name��һ������
	 strcpy (b1.name,"c++");//strcpy -- string cupy -- �ַ������������ǰѺ���c++������b1.name��C���Գ�������滻����
	 //��Ϊstrcpy��һ���⺯��Ҫ��һ��ͷ�ļ��� include<string.h>
	 printf ("%s\n",pd ->name);

return 0;
}
