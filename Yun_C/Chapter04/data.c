#include <stdio.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6031)

//8진수와 16진수

//int main(void)
//{
//	int num1 = 0xA7, num2 = 0x44;
//	int num3 = 032,  num4 = 024;
//
//	printf("0xA7의 10진수 정수 값: %d \n", num1);
//	printf("0x43의 10진수 정수 값: %d \n", num2);
//	printf("032의 10진수 정수 값: %d \n", num3);
//	printf("024의 10진수 정수 값: %d \n", num4);
//
//	printf("%d - %d = %d\n", num1, num2, num1 - num2);
//	printf("%d + %d = %d\n", num3, num4, num3 + num4);
//}


//소수의 오차

//int main(void)
//{
//	int i;
//	float num = 0.0;			//0.0을 표현할 수 없다.
//
//	for (i = 0; i < 100; i++)
//		num += 0.1;
//	printf("0.1을 100번 더한 결과 : %f \n", num);
//}


// 비트연산

//int main(void)
//{
//	int num1 = 15;
//	int num2 = 20;
//	int num3 = num1 & num2;
//	printf("AND 연산의 결과 : %d\n", num3);
//	return 0;
//}

//int main(void)
//{
//	int num1 = 15;
//	int num2 = 20;
//	int num3 = num1 | num2;
//	printf("OR 연산 결과 : %d\n", num3);
//	return 0;
//}

//int main(void)
//{
//	int num1 = 15;
//	int num2 = 20;
//	int num3 = num1 ^ num2;
//	printf("XOR 연산의 결과 : %d\n", num3);
//	return 0;
//}

//int main(void)
//{
//	int num1 = 15;
//	int num2 = ~num1;
//	printf("NOT 연산의 결과 : %d\n", num2);
//	return 0;
//}

//int main(void)
//{
//	int num = 15;
//
//	int result1 = num << 1;
//	int result2 = num << 2;
//	int result3 = num << 3;
//
//	printf("1칸 이동 결과 : %d\n", result1);
//	printf("2칸 이동 결과 : %d\n", result2);
//	printf("3칸 이동 결과 : %d\n", result3);
//	
//	return 0;
//}

//int main(void)
//{
//	int num = -16;
//	printf("2칸 오른쪽 이동의 결과 : %d\n", num >> 2);
//	printf("3칸 오른쪽 이동의 결과 : %d\n", num >> 3);
//	return 0;
//}


//Practice 1
int main(void)
{
	int num;
	printf_s("정수를 입력하시오 : ");
	scanf("%d", &num);
	printf("부호를 바꾼 결과 : %d\n", (~num) + 1);
}

//Practice 2
//int main(void)
//{
//	printf("3 x 8 / 4 = %d", 3 << 3 >> 2);
//}