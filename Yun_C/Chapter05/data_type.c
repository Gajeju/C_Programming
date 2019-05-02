#include <stdio.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6031)
#include <stdlib.h>		//정수 자료형 연산함수 지원
//SizeOf 연산자 활용

//int main(void)
//{
//	char ch = 9;
//	int inum = 1052;
//	double dnum = 3.1415;
//	
//	printf("변수 ch의 크기 : %d\n", sizeof(ch));
//	printf("변수 inum의 크기 : %d\n", sizeof(inum));
//	printf("변수 dnum의 크기 : %d\n", sizeof(dnum));
//
//	printf("자료형 char의 크기 : %d\n", sizeof(char));
//	printf("자료형 int의 크기 : %d\n", sizeof(int));
//	printf("자료형 long의 크기 : %d\n", sizeof(long));
//	printf("자료형 long long의 크기 : %d\n", sizeof(long long));
//	printf("자료형 float의 크기 : %d\n", sizeof(float));
//	printf("자료형 double의 크기 : %d\n", sizeof(double));
//}


// 자료형의 선택

//int main(void)
//{
//	char num1 = 1, num2 = 2, result1 = 0;
//	short num3 = 300, num4 =400, result2 = 0;
//
//	printf("size of num1 & num2 : %d, %d \n", sizeof(num1), sizeof(num2));
//	printf("size of num1 & num2 : %d, %d \n", sizeof(num3), sizeof(num4));
//
//	printf("size of char add : %d \n", sizeof(num1 + num2));
//	printf("size of char short : %d \n", sizeof(num3 + num4));
//
//	result1 = num1 + num2;
//	result2 = num3 + num4;
//	printf("size of result & result2 : %d, %d \n", sizeof(result1), sizeof(result2));
//	return 0;
//}


//double 자료형 활용

//int main(void)
//{
//	double rad;
//	double area;
//	printf("원의 반지름 입력 : ");
//	scanf("%lf", &rad);
//
//	area = rad * rad * 3.1415;
//	printf("원의 넓이 : %f \n", area);
//	return 0;
//}


//문자표현

//int main(void)
//{
//	char ch1 = 'A', ch2 = 65;
//	char ch3 = 'Z', ch4 = 90;
//
//	printf("%c %d \n", ch1, ch1);
//	printf("%c %d \n", ch2, ch2);
//	printf("%c %d \n", ch3, ch3);
//	printf("%c %d \n", ch4, ch4);
//
//	return 0;
//}


//대소문자 변환

//int main(void)
//{
//	char num;
//	printf("문자 입력 : ");
//	scanf("%c", &num);
//	printf("대소문자 변환 후 : %c", num ^ 32);
//}


//Practice1

//int main(void)
//{
//	int x1, y1;
//	int x2, y2;
//	int area;
//
//	printf("좌 상단의 x, y 좌표 : ");
//	scanf("%d %d", &x1, &y1);
//	printf("우 하단의 x, y 좌표 : ");
//	scanf("%d %d", &x2, &y2);
//
//	area = abs(x2 - x1) * abs(y2 - y1);
//
//	printf("두 점이 이루는 직사각형의 넓이는 %d입니다.", area);
//}

//Practice2

//int main(void)
//{
//	double num1;
//	double num2;
//
//	printf("두 실수를 입력하시오 : ");
//	scanf("%lf %lf", &num1, &num2);
//
//	puts("------사칙연산 결과-------");
//	printf("덧셈 : %f\n", num1 + num2);
//	printf("뺄셈 : %f\n", num1 - num2);
//	printf("곱셈 : %f\n", num1 * num2);
//	
//	if (num2 != 0)
//		printf("나눗셈 : %f\n", num1 / num2);
//	else
//		printf("영으로 나누었습니다.\n");
//	
//	return 0;
//}

//Practice3

//int main(void)
//{
//	int num;
//	printf("정수를 입력하시오 : ");
//	scanf("%d", &num);
//	printf("ASCII코드 변환 결과 : %c", num);
//}


//리터럴의 크기

//int main(void)
//{
//	printf("literal int size : %d\n", sizeof(7));
//	printf("literal double size : %d\n", sizeof(7.14));
//	printf("literal char size : %d\n", sizeof('A'));
//	
//	return 0;
//}


//자동 형변환

//int main(void)
//{
//	double num1 = 245;
//	int num2 = 3.1415;
//	int num3 = 129;
//	char ch = num3;
//
//	printf("정수 245를 실수로 : %f\n", num1);
//	printf("실수 3.1415를 정수로 : %d\n", num2);
//	printf("큰 정수 129를 작은 정수로 : %d\n", ch);
//	return 0;
//}

//명시적 형변환

int main(void)
{
	int num1 = 3, num2 = 4;
	double divResult;
	divResult = (double)num1 / num2;
	printf("나눗셈 결과 : %f \n", divResult);
	return 0;
}