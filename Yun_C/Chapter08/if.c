#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)

//if문

//int main(void)
//{
//	int num;
//	printf("정수 입력 : ");
//	scanf("%d", &num);
//
//	if (num < 0)
//		printf("입력 값은 0보다 작다. \n");
//	if (num > 0)
//		printf("입력 값은 0보다 크다. \n");
//	if (num == 0)
//		printf("입력 값은 0이다. \n");
//
//	return 0;
//}

//int main(void)
//{
//	int opt;
//	double num1, num2;
//	double result;
//	
//	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n ");
//	printf("선택하시오 : ");
//	scanf("%d", &opt);
//	printf("두 개의 실수 입력 : ");
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
//		printf("0으로 나누었습니다.");
//
//	return 0;
//}

//int main(void)
//{
//	int num;
//	for (num = 1; num < 100; num++)
//	{
//		if (num % 3 == 0 || num % 4 == 0)
//			printf("3 또는 4의 배수 : %d \n", num);
//	}
//	return 0;
//}


//if ~ else

//int main(void)
//{
//	int num;
//	printf("정수 입력 : ");
//	scanf("%d", &num);
//
//	if (num < 0)
//		printf("입력 값은 0보다 작다. \n");
//	else
//		printf("입력 값은 0보다 작지 않다. \n");
//
//	return 0;
//}

//int main(void)
//{
//	int opt;
//	double num1, num2;
//	double result;
//
//	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
//	printf("선택? : ");
//	scanf("%d", &opt);
//	printf("두 개의 실수 입력 : ");
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
//		printf("0으로 나누었습니다. \n");
//	
//	printf("결과 : %f \n", result);
//
//	return 0;
//}


//삼항 연산자

//int main(void)
//{
//	int num, abs;
//	printf("정수 입력 : ");
//	scanf("%d", &num);
//
//	abs = num > 0 ? num : num * (-1);
//	printf("절댓값 : %d \n", abs);
//	
//	return 0;
//}


//Practice1

//int main(void)
//{
//	for (int i = 0; i < 100; i++)
//	{
//		if (i % 7 == 0)
//			printf("7 또는 9의 배수 : %d \n", i);
//		else if (i % 9 == 0)
//			printf("7 또는 9의 배수 : %d \n", i);
//	}
//	return 0;
//}


//Practice2

//int main(void)
//{
//	int a, b;
//	int result = 0;
//
//	printf("두 정수를 입력하시오 : ");
//	scanf("%d %d", &a, &b);
//
//	if (a > b)
//		result = a - b;
//	else
//		result = b - a;
//	
//	printf("두 수의 차 : %d \n", result);
//
//	return 0;
//}


//Practice3

//int main(void)
//{
//	int num;
//	int tot = 0;
//
//	char sub[3][10] = { "국어", "영어", "수학" };
//	
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%s의 성적을 입력하시오 : ", sub[i]);
//		scanf("%d", &num);
//		tot += num;
//	}
//	
//	if (tot / 3 >= 90)
//		printf("학점 : A");
//	else if (80 <= tot)
//		printf("학점 : B");
//	else if (70 <= tot)
//		printf("학점 : C");
//	else if (50 <= tot)
//		printf("학점 : D");
//	else
//		printf("학점 : F");
//
//	return 0;
//}

//Pracitce4

//int main(void)
//{
//	int a, b;
//	int result;
//
//	printf("두 개의 정수를 입력하시오 : ");
//	scanf("%d %d", &a, &b);
//
//	result = a > b ? a - b : b - a;
//
//	printf("두 수의 차 : %d", result);
//
//	return 0;
//}


//break문

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

//Practice 답지

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
//	printf("1이상 5이하의 정수 입력: ");
//	scanf("%d", &num);
//
//	switch (num)
//	{
//	case 1:
//		printf("1은 one \n");
//		break;
//	case 2:
//		printf("2는 two \n");
//		break;
//	case 3:
//		printf("3은 three \n");
//		break;
//	case 4:
//		printf("4는 four \n");
//		break;
//	case 5:
//		printf("5는 five \n");
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
//	printf("M 오전, A 오후, E 저녁 \n");
//	printf("입력 : ");
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
	printf("자연수 입력 : ");
	scanf("%d", &num);

	if (num == 1)
		goto ONE;
	else if (num == 2)
		goto TWO;
	else
		goto OTHER;

ONE:
	printf("1을 입력하셨습니다! \n");
	goto END;
TWO:
	printf("2을 입력하셨습니다! \n");
	goto END;
OTHER:
	printf("3혹은 다른 값을 입력하셨습니다! \n");
END:
	return 0;
}