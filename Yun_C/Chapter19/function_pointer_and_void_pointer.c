#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)

//함수 포인터의 선언 및 대입

//void SimpleAdder(int n1, int n2);
//void ShowString(char *str);
//
//int main(void)
//{
//	char * str = "Function Pointer";
//	int num1 = 10, num2 = 20;
//
//	void(*fptr1) (int, int) = SimpleAdder;
//	void(*fptr2) (char *) = ShowString;
//
//	fptr1(num1, num2);
//	fptr2(str);
//
//	return 0;
//}
//
//void SimpleAdder(int n1, int n2)
//{
//	printf("%d + %d = %d \n", n1, n2, n1 + n2);
//}
//
//void ShowString(char *str)
//{
//	printf("%s \n", str);
//}


//함수포인터

//int WhoIsFirst(int age1, int age2, int(*cmp)(int n1, int n2));
//int OlderFirst(int age1, int age2);
//int YoungerFirst(int age1, int age2);
//
//int main(void)
//{
//	int age1 = 20;
//	int age2 = 30;
//	int first;
//
//	printf("입장순서 1 \n");
//	first = WhoIsFirst(age1, age2, OlderFirst);
//	printf("%d세와 %세 중 %세가 먼저 입장! \n\n", age1, age2, first);
//
//	printf("입장순서 2 \n");
//	first = WhoIsFirst(age1, age2, YoungerFirst);
//	printf("%d세와 %세 중 %사가 먼저 입장! \n\n", age1, age2, first);
//
//	return 0;
//}
//
//int WhoIsFirst(int age1, int age2, int(*cmp)(int n1, int n2))
//{
//	return cmp(age1, age2);
//}
//
//int OlderFirst(int age1, int age2)
//{
//	if (age1 > age2)
//		return age1;
//	else if (age1 < age2)
//		return age2;
//	else
//		return 0;
//}
//
//int YoungerFirst(int age1, int age2)
//{
//	if (age1 < age2)
//		return age1;
//	else if (age1 > age2)
//		return age2;
//	else
//		return 0;
//}


//void 포인터

//void SoSimpleFunc(void);
//
//int main(void)
//{
//	int num = 20;
//	void * p;
//
//	p = &num;
//	printf("%p \n", p);
//
//	p = SoSimpleFunc;
//	printf("%p \n", p);
//
//	return 0;
//}
//
//void SoSimpleFunc(void)
//{
//	printf("I'm so simple");
//}


//main 함수를 통한 인자 전달

//int main(int argc, char *argv[])
//{
//	printf("전달된 문자열의 수 : %d \n", argc);
//
//	for (int i = 0; i < argc; i++)
//		printf("%d번째 문자열 : %s \n", i + 1, argv[i]);
//
//	return 0;
//}


//포인터 배열을 받는 더블포인터

void ShowAllString(int argc, char* argv[]);

int main(void)
{
	char* str[3] =
	{
		"C Programming",
		"C++ programming",
		"java programming"
	};
	ShowAllString(3, str);

	return 0;
}

void ShowAllString(int argc, char* argv[])
{
	for (int i = 0; i < argc; i++)
		printf("%s \n", argv[i]);
}