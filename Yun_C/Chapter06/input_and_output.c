#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6031)

//printf

//int main(void)
//{
//	printf("I like Programming \n");
//	printf("I love puppy!\n");
//	printf("I am so happy \n");
//	
//	char ch = '\n';
//	printf("%c", ch);
//
//	return 0;
//}


//���� ����

//int main(void)
//{
//	int myAge = 12;
//	printf("�� ���̴� 10������ %d��, 16������ %X�� �Դϴ�.", myAge, myAge);
//}


//8����, 16���� ���� ����

//int main(void)
//{
//	int num1 = 7, num2 = 13;
//	printf("%o %#o \n", num1, num1);
//	printf("%x %#x \n", num2, num2);
//}


//�Ǽ� ��������

//int main(void)
//{
//	printf("%f \n", 0.1234);
//	printf("%e \n", 0.1234);
//	printf("%f \n", 0.12345678);
//	printf("%e \n", 0.12345678);
//
//	return 0;
//}

//int main(void)
//{
//	double d1 = 1.23e-3;
//	double d2 = 1.23e-4;
//	double d3 = 1.23e-5;
//	double d4 = 1.23e-6;
//
//	printf("%g \n", d1);
//	printf("%g \n", d2);
//	printf("%g \n", d3);
//	printf("%g \n", d4);
//
//	return 0;
//}


//���ڿ� ����

//int main(void)
//{
//	printf("%s, %s, %s \n", "AAA", "BBB", "CCC");
//
//	return 0;
//}


//�ʵ� �� ����

//int main(void)
//{
//	printf("%-8s %14s %5s \n", "��  ��", "�����а�", "�г�");
//	printf("%-8s %14s %5s \n", "�赿��", "���ڰ���", "3");
//	printf("%-8s %14s %5s \n", "������", "��ǻ�Ͱ���", "2");
//	printf("%-8s %14s %5s \n", "�Ѽ���", "�̼�������", "4");
//	
//	return 0;
//}


//scanf

//int main(void)
//{
//	int num1, num2, num3;
//	printf("�� ���� ���� �Է� : ");
//	scanf("%d %o %x", &num1, &num2, &num3);
//
//	printf("�Էµ� ���� 10���� ��� : ");
//	printf("%d %d %d \n", num1, num2, num3);
//
//	return 0;
//}


//�Ǽ� �Է�

int main(void)
{
	float num1;
	double num2;
	long double num3;

	printf("�Ǽ� �Է�1(e ǥ�������) : ");
	scanf("%f", &num1);
	printf("�Էµ� �Ǽ� %f \n", num1);

	printf("�Ǽ� �Է�2(e ǥ�������) : ");
	scanf("%lf", &num2);
	printf("�Էµ� �Ǽ� %f \n", num2);

	printf("�Ǽ� �Է�3(e ǥ�������) : ");
	scanf("%Lf", &num3);
	printf("�Էµ� �Ǽ� %Lf \n", num3);

	return 0;
}