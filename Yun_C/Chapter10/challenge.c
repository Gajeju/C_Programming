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
//	printf("10진수 입력 : ");
//	scanf("%d", &n);
//	printf("16진수 출력 : %x", n);
//}


//구구단 출력

//void Func(int a, int b)
//{
//	int rx;
//	if (b > a)		//입력순서와 무관
//	{
//		rx = a;
//		a = b;
//		b = rx;
//	}
//
//	printf("\n----------------------------\n구구단 출력\n");
//	for (int i = b; i <= a; i++)	//구구단 출력
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
//	printf("두 정수를 입력하시오 : ");
//	scanf("%d %d", &a, &b);
//	Func(a, b);
//}


//공약수 출력

//int main(void)
//{
//	int a, b;
//	int res;
//
//	printf("두 개의 정수 입력 : ");
//	scanf("%d %d", &a, &b);
//
//	for (int i = 1; i <= a; i++)
//	{
//		if (a % i == 0 && b % i == 0)
//			res = i;
//	}
//	printf("두 수의 최대공약수 : %d \n", res);
//}


//유클리드 호제법

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
//	printf("두 개의 정수 입력 : ");
//	scanf("%d %d", &a, &b);
//
//	printf("두 수의 최대공약수 : %d", Func(a, b));
//	return 0;
//}


//경우의 수 계산
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
//					printf("크림빵 %d개, 새우깡 %d개, 콜 라 %d개 \n", i + 1, j + 1, k + 1);
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


//10개의 소수 출력

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


//초를 시분초로 나누기

//void SecToTime(int sec);
//
//int main(void)
//{
//	int sec;
//
//	printf("초(second) 입력: ");
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


//2^k <= n 을 만족하는 최대값 k 구하기

//void MaxK(int n);
//
//int main(void)
//{
//	int n;
//
//	printf("상수 n 입력 : ");
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
//	printf("공식을 만족하는 k의 최댓값은 %d \n", maxk);
//}


//2의 n승 구하기

int NSqure(int);

int main(void)
{
	int n;

	printf("정수 입력 : ");
	scanf("%d", &n);
	printf("2의 %d 승은 %d",n,NSqure(n));
}

int NSqure(int n)
{
	if (n == 0)
		return 1;
	else
		return 2 * NSqure(n - 1);
}