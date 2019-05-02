#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)

//while 문

//int main(void)
//{
//	int num = 0;
//
//	while (num < 5)
//	{
//		printf("Hello world! %d \n", num);
//		num++;
//	}
//	return 0;
//}

//int main(void)
//{
//	int dan = 0, num = 1;
//	printf("몇 단? : ");
//	scanf("%d", &dan);
//
//	while (num < 10)
//	{
//		printf("%d x %d = %d \n", dan, num, dan*num);
//		num++;
//	}
//	return 0;
//}


//Practice1

//int main(void)
//{
//	int num = 0;
//	
//	printf("반복할 횟수를 입력하시오 : ");
//	scanf("%d", &num);
//
//	while (num > 0)
//	{
//		printf("Hello world! \n");
//		num--;
//	}
//}


//Practice2

//int main(void)
//{
//	int ty = 1;
//	int input = 0;
//
//	printf("출력할 3의 배수의 개수를 입력하시오 : ");
//	scanf("%d", &input);
//
//	while (ty <= input)
//	{
//		printf("%d ", 3 * ty);
//		ty++;
//	}
//}

//Practice3

//int main(void)
//{
//	int num = 1;
//	int result = 0;
//
//	printf("정수를 입력하시오 \n");
//	
//
//	while (num != 0)
//	{
//		scanf("%d", &num);
//		result += num;
//	}
//	
//	printf("결과 : %d", result);
//}


//Practice4

//int main(void)
//{
//	int dan;
//	int num = 9;
//
//	printf("몇 단을 출력하겠습니까 : ");
//	scanf("%d", &dan);
//
//	while (num > 0)
//	{
//		printf("%d x %d = %d \n", dan, num, dan*num);
//		num--;
//	}
//}


//Practice5

//int main(void)
//{
//	int ty;
//	int number;
//	int i = 1;
//	double result = 0;
//
//	printf("몇 개의 정수에 대한 평균을 구하시겠습니까 : ");
//	scanf("%d", &ty);
//
//	while (i <= ty)
//	{
//		printf("%d 번째 정수를 입력하세요 : ", i);
//		scanf("%d", &number);
//		result += number;
//		i++;
//	}
//	printf("정수 %d 개에 대한 평균 : %f ", ty, result / ty);
//}


//while문 중첩

//int main(void)
//{
//	int cur = 2;
//	int is = 0;
//
//	while (cur < 10)
//	{
//		is = 1;
//		while (is < 10)
//		{
//			printf("%d * %d = %d \n", cur, is, cur*is);
//			is++;
//		}
//		cur++;
//	}
//	return 0;
//}


//Pracitce1

//int main(void)
//{
//	int input;
//	int i = 0;
//	int res = 0;
//
//	while (i < 5)
//	{
//		printf("%d 번째 정수를 입력하시오 : ", i + 1);
//		scanf("%d", &input);
//		while (input < 1)
//		{
//			printf("1 이상의 정수로 다시 입력하시오 : ");
//			scanf("%d", &input);
//		}
//		res += input;
//		i++;
//	}
//	printf("정수의 합 : %d", res);
//
//	return 0;
//}


//Practice2

//int main(void)
//{
//	int i = 0;
//	int k;
//
//	while (i < 5)
//	{
//		k = 0;
//		while (k < i)
//		{
//			printf("o ");
//			k++;
//		}
//		printf("*\n");
//		i++;
//	}
//
//	return 0;
//}


//do while

//int main(void)
//{
//	int total = 0, num = 0;
//
//	do
//	{
//		printf("정수 입력(0 to quit) : ");
//		scanf("%d", &num);
//		total += num;
//	} while (num != 0);
//	printf("합계 : %d \n", total);
//
//	return 0;
//}


//Practice1

//int main(void)
//{
//	int total = 0, num = 1;
//
//	while (num != 0)
//	{
//		printf("정수 입력(0 to quit) : ");
//		scanf("%d", &num);
//		total += num;
//	}
//	printf("합계 : %d \n", total);
//
//	return 0;
//}

//int main(void)
//{
//	int total = 0, num = 0;
//
//	printf("정수 입력(0 to quit) : ");
//	scanf("%d", &num);
//	total += num;
//
//	while (num != 0)
//	{
//		printf("정수 입력(0 to quit) : ");
//		scanf("%d", &num);
//		total += num;
//	}
//	printf("합계 : %d", total);
//
//	return 0;
//}


//Practice2

//int main(void)
//{
//	int i = 0;
//	int result = 0;
//
//	do
//	{
//		result += i;
//		i += 2;
//	} while (i <= 100);
//	printf("0 부터 100까지 짝수들의 합 : %d \n", result);
//
//	return 0;
//}


//Practice3

//int main(void)
//{
//	int cur = 2;
//	int is = 0;
//
//	do
//	{
//		is = 1;
//		do
//		{
//			
//			printf("%d x %d = %d \n", cur, is, cur*is);
//			is++;
//		} while (is < 10);
//		cur++;
//	} while (cur < 10);
//}


//for문

//int main(void)
//{
//	int total = 0;
//	int i, num;
//
//	printf("0부터 num까지의 덧셈, num값을 입력하시오 : ");
//	scanf("%d", &num);
//
//	for (i = 0; i < num + 1; i++)
//	{
//		total += i;
//	}
//	printf("0부터 %d까지 덧셈결과 : %d \n", num, total);
//
//	return 0;
//}

//int main(void)
//{
//	double total = 0.0;
//	double input = 0.0;
//	int num = 0;
//
//	for ( ; input >= 0.0 ; )
//	{
//		total += input;
//		printf("실수 업력(minus to quit) : ");
//		scanf("%lf", &input);
//		num++;
//	}
//	printf("평균 : %f \n", total / (num-1));
//}


//Practice1

//int main(void)
//{
//	int a, b, dx;
//	int total = 0;
//
//	printf("정수 2개를 입력하시오 : ");
//	scanf("%d %d", &a, &b);
//
//	if (b < a)
//	{
//		dx = b;
//		b = a;
//		a = dx;
//	}
//
//	for (int i = a; i <= b; i++)
//	{
//		total += i;
//	}
//	printf("%d 부터 %d 까지의 합 : %d", a, b, total);
//
//	return 0;
//}


//Practice2

int main(void)
{
	int n;
	int total = 1;

	printf("정수 n을 입력하시오 : ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		total *= i;
	}
	printf("%d! = %d", n, total);
}