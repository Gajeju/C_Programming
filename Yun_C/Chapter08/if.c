#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)

//if��

//int main(void)
//{
//	int num;
//	printf("���� �Է� : ");
//	scanf("%d", &num);
//
//	if (num < 0)
//		printf("�Է� ���� 0���� �۴�. \n");
//	if (num > 0)
//		printf("�Է� ���� 0���� ũ��. \n");
//	if (num == 0)
//		printf("�Է� ���� 0�̴�. \n");
//
//	return 0;
//}

//int main(void)
//{
//	int opt;
//	double num1, num2;
//	double result;
//	
//	printf("1.���� 2.���� 3.���� 4.������ \n ");
//	printf("�����Ͻÿ� : ");
//	scanf("%d", &opt);
//	printf("�� ���� �Ǽ� �Է� : ");
//	scanf("%lf %lf", num1, num2);
//
//	if (opt == 1)
//		result = num1 + num2;
//	if (opt == 2)
//		result = num1 - num2;
//	if (opt == 3)
//		result = num1 * num2;
//	if ((opt == 4) && (num2 != 0))
//		result = num1 / num2;
//	else if ((opt == 4) && (num2 == 0))
//		printf("0���� ���������ϴ�.");
//
//	return 0;
//}

//int main(void)
//{
//	int num;
//	for (num = 1; num < 100; num++)
//	{
//		if (num % 3 == 0 || num % 4 == 0)
//			printf("3 �Ǵ� 4�� ��� : %d \n", num);
//	}
//	return 0;
//}


//if ~ else

//int main(void)
//{
//	int num;
//	printf("���� �Է� : ");
//	scanf("%d", &num);
//
//	if (num < 0)
//		printf("�Է� ���� 0���� �۴�. \n");
//	else
//		printf("�Է� ���� 0���� ���� �ʴ�. \n");
//
//	return 0;
//}

//int main(void)
//{
//	int opt;
//	double num1, num2;
//	double result;
//
//	printf("1.���� 2.���� 3.���� 4.������ \n");
//	printf("����? : ");
//	scanf("%d", &opt);
//	printf("�� ���� �Ǽ� �Է� : ");
//	scanf("%lf %lf", &num1, &num2);
//
//	if (opt == 1)
//		result = num1 + num2;
//	else if (opt == 2)
//		result = num1 - num2;
//	else if (opt == 3)
//		result = num1 * num2;
//	else if (opt == 4 && num2 != 0)
//		result = num1 / num2;
//	else if (opt == 4 && num2 == 0)
//		printf("0���� ���������ϴ�. \n");
//	
//	printf("��� : %f \n", result);
//
//	return 0;
//}


//���� ������

//int main(void)
//{
//	int num, abs;
//	printf("���� �Է� : ");
//	scanf("%d", &num);
//
//	abs = num > 0 ? num : num * (-1);
//	printf("���� : %d \n", abs);
//	
//	return 0;
//}


//Practice1

//int main(void)
//{
//	for (int i = 0; i < 100; i++)
//	{
//		if (i % 7 == 0)
//			printf("7 �Ǵ� 9�� ��� : %d \n", i);
//		else if (i % 9 == 0)
//			printf("7 �Ǵ� 9�� ��� : %d \n", i);
//	}
//	return 0;
//}


//Practice2

//int main(void)
//{
//	int a, b;
//	int result = 0;
//
//	printf("�� ������ �Է��Ͻÿ� : ");
//	scanf("%d %d", &a, &b);
//
//	if (a > b)
//		result = a - b;
//	else
//		result = b - a;
//	
//	printf("�� ���� �� : %d \n", result);
//
//	return 0;
//}


//Practice3

//int main(void)
//{
//	int num;
//	int tot = 0;
//
//	char sub[3][10] = { "����", "����", "����" };
//	
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%s�� ������ �Է��Ͻÿ� : ", sub[i]);
//		scanf("%d", &num);
//		tot += num;
//	}
//	
//	if (tot / 3 >= 90)
//		printf("���� : A");
//	else if (80 <= tot)
//		printf("���� : B");
//	else if (70 <= tot)
//		printf("���� : C");
//	else if (50 <= tot)
//		printf("���� : D");
//	else
//		printf("���� : F");
//
//	return 0;
//}

//Pracitce4

//int main(void)
//{
//	int a, b;
//	int result;
//
//	printf("�� ���� ������ �Է��Ͻÿ� : ");
//	scanf("%d %d", &a, &b);
//
//	result = a > b ? a - b : b - a;
//
//	printf("�� ���� �� : %d", result);
//
//	return 0;
//}


//break��

//int main(void)
//{
//	int sum = 0, num = 0;
//
//	while (1)
//	{
//		sum += num;
//		if (sum > 5000)
//		{
//			break;
//		}
//		num++;
//	}
//	printf("sum : %d \n", sum);
//	printf("num : %d \n", num);
//
//	return 0;
//}


//continue

//int main(void)
//{
//	int num;
//	printf("start! ");
//
//	for (num = 1; num < 20; num++)
//	{
//		if (num % 2 == 0 || num % 3 == 0)
//			continue;
//		printf("%d ", num);
//	}
//	printf("end! \n");
//
//	return 0;
//}


//Pracitce1

//int main(void)
//{
//	for (int i = 2; i < 10; i++)
//	{
//		if (i % 2 != 0)
//			continue;
//			
//		for (int j = 1; j < 10; j++)
//		{
//			if (i < j)
//				break;
//			printf("%d x %d = %d \n", i , j, i*j);
//		}	
//	}
//	return 0;
//}

//Practice2

//int main(void)
//{
//	for (int A = 0; A < 10; A++)
//	{
//		for (int Z = 0; Z < 10; Z++)
//		{
//			if ((A * 11) + (Z * 11) == 99)
//				printf("A = %d, Z = %d \n", A, Z);
//		}
//	}
//
//	return 0;
//}

//Practice ����

//int main(void)
//{
//	int A, Z;
//	int result;
//
//	for (A = 0; A < 10; A++)
//	{
//		for (Z = 0; Z < 10; Z++)
//		{
//			if (A == Z)
//				continue;
//			result = (A * 10 + Z) + (Z * 10 + A);
//			if (result == 99)
//				printf("%d%d + %d%d = %d \n", A, Z, Z, A, result);
//		}
//	}
//	return 0;
//}

//switch

//int main(void)
//{
//	int num;
//	printf("1�̻� 5������ ���� �Է�: ");
//	scanf("%d", &num);
//
//	switch (num)
//	{
//	case 1:
//		printf("1�� one \n");
//		break;
//	case 2:
//		printf("2�� two \n");
//		break;
//	case 3:
//		printf("3�� three \n");
//		break;
//	case 4:
//		printf("4�� four \n");
//		break;
//	case 5:
//		printf("5�� five \n");
//		break;
//	default:
//		printf("I don't know! \n");
//	}
//	return 0;
//}


//switch (without break)

//int main(void)
//{
//	char sel;
//	printf("M ����, A ����, E ���� \n");
//	printf("�Է� : ");
//	scanf("%c", &sel);
//
//	switch (sel)
//	{
//	case 'M':
//	case 'm':
//		printf("Morning \n");
//		break;
//	case 'a':
//	case 'A':
//		printf("Afternoon \n");
//		break;
//	}
//	return 0;
//}

int main(void)
{
	int num;
	printf("�ڿ��� �Է� : ");
	scanf("%d", &num);

	if (num == 1)
		goto ONE;
	else if (num == 2)
		goto TWO;
	else
		goto OTHER;

ONE:
	printf("1�� �Է��ϼ̽��ϴ�! \n");
	goto END;
TWO:
	printf("2�� �Է��ϼ̽��ϴ�! \n");
	goto END;
OTHER:
	printf("3Ȥ�� �ٸ� ���� �Է��ϼ̽��ϴ�! \n");
END:
	return 0;
}