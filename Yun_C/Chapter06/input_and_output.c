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


//서식 지정

//int main(void)
//{
//	int myAge = 12;
//	printf("제 나이는 10진수로 %d살, 16진수로 %X살 입니다.", myAge, myAge);
//}


//8진수, 16진수 서식 지정

//int main(void)
//{
//	int num1 = 7, num2 = 13;
//	printf("%o %#o \n", num1, num1);
//	printf("%x %#x \n", num2, num2);
//}


//실수 서식지정

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


//문자열 서식

//int main(void)
//{
//	printf("%s, %s, %s \n", "AAA", "BBB", "CCC");
//
//	return 0;
//}


//필드 폭 지정

//int main(void)
//{
//	printf("%-8s %14s %5s \n", "이  름", "전공학과", "학년");
//	printf("%-8s %14s %5s \n", "김동수", "전자공학", "3");
//	printf("%-8s %14s %5s \n", "이을수", "컴퓨터공학", "2");
//	printf("%-8s %14s %5s \n", "한선영", "미술교육학", "4");
//	
//	return 0;
//}


//scanf

//int main(void)
//{
//	int num1, num2, num3;
//	printf("세 개의 정수 입력 : ");
//	scanf("%d %o %x", &num1, &num2, &num3);
//
//	printf("입력된 정수 10진수 출력 : ");
//	printf("%d %d %d \n", num1, num2, num3);
//
//	return 0;
//}


//실수 입력

int main(void)
{
	float num1;
	double num2;
	long double num3;

	printf("실수 입력1(e 표기법으로) : ");
	scanf("%f", &num1);
	printf("입력된 실수 %f \n", num1);

	printf("실수 입력2(e 표기법으로) : ");
	scanf("%lf", &num2);
	printf("입력된 실수 %f \n", num2);

	printf("실수 입력3(e 표기법으로) : ");
	scanf("%Lf", &num3);
	printf("입력된 실수 %Lf \n", num3);

	return 0;
}