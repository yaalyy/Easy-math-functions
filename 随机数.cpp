#include<iostream>
#include<cstdlib>     //rand��srand�����Ŀ��ļ���Ҳ����д stdlib.h 
#include<ctime>        //����������Ӱ��յ�ǰ����ʱ�����ã� ���ԼӴ˿��ļ���Ҳ����д  time.h 
int random(int n)
{
	int m=rand()%n;
	return m;
}

int main()
{
	srand((unsigned)time(NULL));     //��������������ã�Ϊ��ʹ�÷��㣬���г��򶼿ɰ���ԭ�ı�д�롣ע��NULLҪȫ����д �Լ�����time���ļ� 
	int a;
	a=rand()%x;            //  �� a=random(x); x��ʾ������ķ�Χ������0-10�ķ�Χ�����Ǿͽ�xдΪ11 
}
/*  1-10�ķ�Χ     1+random(10-1+1)
    2-10�ķ�Χ    2+random(10-2+1)
	6-18�ķ�Χ      6+random(18-6+1)
	a-b�ķ�Χ        a+random(b-a+1)*/ 
