#include <stdio.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6031)

//변수 사용

//int main(void)
//{
//	int num1, num2;
//	int num3 = 30, num4 = 40;
//
//	printf("num1 : %d, num2: %d \n", num1, num2); //책에서는 오류가 나지 않았으나 현재 컴파일러는 초기화 되지 않은 변수 사용시 에러
//
//	num1 = 10;
//	num2 = 20;
//
//	printf("num1 : %d, num2: %d \n", num1, num2);
//	printf("num3 : %d, num4: %d \n", num3, num4);
//}


//int main(void)
//{
//	int num1 = 3;
//	int num2 = 4;
//	int result = num1 + num2;
//
//	printf("덧셈 결과 : %d \n", result);
//	printf("%d + %d = %d\n", num1, num2, result);
//	printf("%d와(과) %d의 합은 %d입니다. \n", num1, num2, result);
//	return 0;
//}


//연산자

//int main(void)
//{
//	int num1 = 9;
//	int num2 = 2;
//
//	printf("%d + %d = %d\n", num1, num2, num1 + num2);
//	printf("%d - %d = %d\n", num1, num2, num1 - num2);
//	printf("%d x %d = %d\n", num1, num2, num1 * num2);
//	printf("%d / %d 의 몫 = %d\n", num1, num2, num1 / num2);
//	printf("%d / %d 의 나머지 = %d\n", num1, num2, num1 % num2);
//}


//복합 연산자

//int main(void)
//{
//	int num1 = 2;
//	int num2 = 4;
//	int num3 = 6;
//
//	num1 += 3;
//	num2 *= 4;
//	num3 %= 5;
//	printf("Result: %d, %d, %d\n", num1, num2, num3);
//	return 0;
//}


//부호

//int main(void)
//{
//	int num1 = +2;
//	int num2 = -4;
//
//	num1 = -num1;
//	printf("num1: %d\n", num1);
//	num2 = -num2;
//	printf("num2: %d\n", num2);
//	
//	return 0;
//}


//단항 연산자

//int main(void)
//{
//	int num1 = 12;
//	int num2 = 12;
//
//	printf("num1: %d\n", num1);
//	printf("num1++: %d\n", num1++);
//	printf("num1: %d\n\n", num1);
//
//	printf("num2: %d\n", num2);
//	printf("++num2: %d\n", ++num2);
//	printf("num2: %d\n", num2);
//	return 0;
//}


//int main(void)
//{
//	int num1 = 10;
//	int num2 = (num1--) + 2;
//
//	printf("num1: %d\n", num1);
//	printf("num2: %d\n", num2);
//}


//관계 연산자

//int main(void)
//{
//	int num1 = 10;
//	int num2 = 12;
//	int result1, result2, result3;
//
//	result1 = (num1 == num2);
//	result2 = (num1 <= num2);
//	result3 = (num1 >= num2);
//
//	printf("result1: %d\n", result1);
//	printf("result2: %d\n", result2);
//	printf("result3: %d\n", result3);
//}


//논리 연산자

//int main(void)
//{
//	int num1 = 10;
//	int num2 = 12;
//	int result1, result2, result3;
//
//	result1 = (num1 == 10 && num2 == 12);
//	result2 = (num1 < 12 || num2 > 12);
//	result3 = (!num1);
//
//	printf("result1 %d \n", result1);
//	printf("result2 %d \n", result2);
//	printf("result3 %d \n", result3);
//}


//콤마 연산자

//int main(void)
//{
//	int num1 = 1, num2 = 2;
//	printf("Hello "), printf("world!\n");
//	num1++, num2++;
//	printf("%d ", num1), printf("%d", num2), printf("\n");
//}


//입력

//int main(void)
//{
//	int result;
//	int num1, num2;
//
//	printf("정수 one : ");
//	scanf("%d", &num1);
//	printf("정수 two : ");
//	scanf("%d", &num2);
//
//	result = num1 + num2;
//	printf("%d + %d = %d \n", num1, num2, result);
//}


//int main(void)
//{
//	int result;
//	int num1, num2, num3;
//
//	printf("세 개의 정수 입력: ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//
//	result = num1 + num2 + num3;
//	printf("%d + %d + %d = %d \n", num1, num2, num3, result);
//}


//Practice 1

//int main(void)
//{
//	int num1, num2;
//
//	printf("두 정수를 입력하시오\n");
//	scanf("%d %d", &num1, &num2);
//
//	printf("두 수의 곱 : %d\n", num1 * num2);
//	printf("두 수의 차 : %d\n", num1 - num2);
//}


//Practice 2

//int main(void)
//{
//	int num1;
//	int num2;
//	int num3;
//
//	printf("세 정수를 입력하시오.\n");
//	scanf("%d %d %d", &num1, &num2, &num3);
//	
//	printf("%d x %d + %d = %d", num1, num2, num3, num1*num2 + num3);
//}


//Practice 3

//int main(void)
//{
//	int num1;
//	printf("정수를 입력하시오.\n");
//	scanf("%d", &num1);
//	printf("%d", num1*num1);
//}


//Practice 4

int main(void)
{
	int num1;
	int num2;

	printf("두 정수를 입력하시오.\n");
	scanf_s("%d %d", &num1, &num2);
	printf("몫 : %d, 나머지 : %d", num1 / num2, num1 % num2);
}


//Practice 5

//int main(void)
//{
//	int num1;
//	int num2;
//	int num3;
//
//	printf("세 정수를 입력하시오.\n");
//	scanf("%d %d %d", &num1, &num2, &num3);
//
//	printf("(%d - %d)x(%d + %d)x(%d %% %d) = %d", num1, num2, num2, num3, num3, num1, (num1 - num2) * (num2 + num3) * (num3 % num1));
//}