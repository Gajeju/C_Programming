#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)

//while ��

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
//	printf("�� ��? : ");
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
//	printf("�ݺ��� Ƚ���� �Է��Ͻÿ� : ");
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
//	printf("����� 3�� ����� ������ �Է��Ͻÿ� : ");
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
//	printf("������ �Է��Ͻÿ� \n");
//	
//
//	while (num != 0)
//	{
//		scanf("%d", &num);
//		result += num;
//	}
//	
//	printf("��� : %d", result);
//}


//Practice4

//int main(void)
//{
//	int dan;
//	int num = 9;
//
//	printf("�� ���� ����ϰڽ��ϱ� : ");
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
//	printf("�� ���� ������ ���� ����� ���Ͻðڽ��ϱ� : ");
//	scanf("%d", &ty);
//
//	while (i <= ty)
//	{
//		printf("%d ��° ������ �Է��ϼ��� : ", i);
//		scanf("%d", &number);
//		result += number;
//		i++;
//	}
//	printf("���� %d ���� ���� ��� : %f ", ty, result / ty);
//}


//while�� ��ø

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
//		printf("%d ��° ������ �Է��Ͻÿ� : ", i + 1);
//		scanf("%d", &input);
//		while (input < 1)
//		{
//			printf("1 �̻��� ������ �ٽ� �Է��Ͻÿ� : ");
//			scanf("%d", &input);
//		}
//		res += input;
//		i++;
//	}
//	printf("������ �� : %d", res);
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
//		printf("���� �Է�(0 to quit) : ");
//		scanf("%d", &num);
//		total += num;
//	} while (num != 0);
//	printf("�հ� : %d \n", total);
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
//		printf("���� �Է�(0 to quit) : ");
//		scanf("%d", &num);
//		total += num;
//	}
//	printf("�հ� : %d \n", total);
//
//	return 0;
//}

//int main(void)
//{
//	int total = 0, num = 0;
//
//	printf("���� �Է�(0 to quit) : ");
//	scanf("%d", &num);
//	total += num;
//
//	while (num != 0)
//	{
//		printf("���� �Է�(0 to quit) : ");
//		scanf("%d", &num);
//		total += num;
//	}
//	printf("�հ� : %d", total);
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
//	printf("0 ���� 100���� ¦������ �� : %d \n", result);
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


//for��

//int main(void)
//{
//	int total = 0;
//	int i, num;
//
//	printf("0���� num������ ����, num���� �Է��Ͻÿ� : ");
//	scanf("%d", &num);
//
//	for (i = 0; i < num + 1; i++)
//	{
//		total += i;
//	}
//	printf("0���� %d���� ������� : %d \n", num, total);
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
//		printf("�Ǽ� ����(minus to quit) : ");
//		scanf("%lf", &input);
//		num++;
//	}
//	printf("��� : %f \n", total / (num-1));
//}


//Practice1

//int main(void)
//{
//	int a, b, dx;
//	int total = 0;
//
//	printf("���� 2���� �Է��Ͻÿ� : ");
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
//	printf("%d ���� %d ������ �� : %d", a, b, total);
//
//	return 0;
//}


//Practice2

int main(void)
{
	int n;
	int total = 1;

	printf("���� n�� �Է��Ͻÿ� : ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		total *= i;
	}
	printf("%d! = %d", n, total);
}