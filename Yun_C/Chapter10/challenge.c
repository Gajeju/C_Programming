#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6031)

//10 to 16

//int main(void)
//{
//	int n;
//	
//	printf("10���� �Է� : ");
//	scanf("%d", &n);
//	printf("16���� ��� : %x", n);
//}


//������ ���

//void Func(int a, int b)
//{
//	int rx;
//	if (b > a)		//�Է¼����� ����
//	{
//		rx = a;
//		a = b;
//		b = rx;
//	}
//
//	printf("\n----------------------------\n������ ���\n");
//	for (int i = b; i <= a; i++)	//������ ���
//	{
//		for (int j = 1; j < 10; j++)
//			printf("%d x %d = %d \n", i, j, i*j);
//	}
//}
//
//
//int main(void)
//{
//	int a, b;
//	printf("�� ������ �Է��Ͻÿ� : ");
//	scanf("%d %d", &a, &b);
//	Func(a, b);
//}


//����� ���

//int main(void)
//{
//	int a, b;
//	int res;
//
//	printf("�� ���� ���� �Է� : ");
//	scanf("%d %d", &a, &b);
//
//	for (int i = 1; i <= a; i++)
//	{
//		if (a % i == 0 && b % i == 0)
//			res = i;
//	}
//	printf("�� ���� �ִ����� : %d \n", res);
//}


//��Ŭ���� ȣ����

//int Func(int a, int b)
//{
//	if (a % b == 0)
//		return b;
//	else
//		Func(b, a%b);
//}
//
//int main(void)
//{
//	int a, b;
//
//	printf("�� ���� ���� �Է� : ");
//	scanf("%d %d", &a, &b);
//
//	printf("�� ���� �ִ����� : %d", Func(a, b));
//	return 0;
//}


//����� �� ���
//void Func(int a)
//{
//	int money = a - 1600;
//
//	for (int i = 0; i < 100; i++)
//	{
//		for (int j = 0; j < 100; j++)
//		{
//			for (int k = 0; k < 100; k++)
//			{
//				if ((500 * i) + (700 * j) + (400 * k) == money)
//					printf("ũ���� %d��, ����� %d��, �� �� %d�� \n", i + 1, j + 1, k + 1);
//			}
//		}
//	}
//}
//
//int main(void)
//{
//	Func(3500);
//	return 0;
//}


//10���� �Ҽ� ���

//int main(void)
//{
//	int dx = 1;
//	int try;
//	for (int i = 2; i< 1000; i++)
//	{
//		try = 0;
//
//		for (int j = 2; j <= i; j++)
//		{
//			if (i % j == 0)
//				try ++;
//		}
//		if (try == 1)
//		{
//			printf("%d ", i);
//			dx++;
//		}
//		if (dx == 10)
//			break;
//	}
//
//	return 0;
//}


//�ʸ� �ú��ʷ� ������

//void SecToTime(int sec);
//
//int main(void)
//{
//	int sec;
//
//	printf("��(second) �Է�: ");
//	scanf("%d", &sec);
//	SecToTime(sec);
//
//	return 0;
//}
//
//void SecToTime(int sec)
//{
//	int h, m, s;
//	
//	h = sec / 3600;
//	m = (sec % 3600) / 60;
//	s = (sec % 3600) % 60;
//	printf("[h : %d, m : %d, s : %d] \n", h, m, s);
//}


//2^k <= n �� �����ϴ� �ִ밪 k ���ϱ�

//void MaxK(int n);
//
//int main(void)
//{
//	int n;
//
//	printf("��� n �Է� : ");
//	scanf("%d", &n);
//	MaxK(n);
//
//	return 0;
//}
//
//void MaxK(int n)
//{
//	int k = 1;
//	int maxk = 0;
//
//	for (;;)
//	{
//		if (pow(2,k) <= n)
//		{
//			maxk = k;
//		}
//		if (k == n)
//			break;
//		k++;
//	}
//	printf("������ �����ϴ� k�� �ִ��� %d \n", maxk);
//}


//2�� n�� ���ϱ�

int NSqure(int);

int main(void)
{
	int n;

	printf("���� �Է� : ");
	scanf("%d", &n);
	printf("2�� %d ���� %d",n,NSqure(n));
}

int NSqure(int n)
{
	if (n == 0)
		return 1;
	else
		return 2 * NSqure(n - 1);
}