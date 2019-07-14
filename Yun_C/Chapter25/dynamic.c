#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6031)
#pragma warning (disable : 6001)

//메모리 동적할당의 필요성

//char* ReadUserName(void)
//{
//	char name[10];
//	printf("What's your name?");
//	gets(name);
//	return name;
//}
//
//int main(void)
//{
//	char* name1;
//	char* name2;
//	name1 = ReadUserName();
//	printf("name1 : %s \n", name1);
//	name2 = ReadUserName();
//	printf("name2 : %s \n", name2);
//
//	return 0;
//}


//동적할당의 필요성2

//char name[30];
//
//char* ReadUsername(void)
//{
//	printf("What's your name? ");
//	gets(name);
//	return name;
//}
//
//int main(void)
//{
//	char* name1;
//	char* name2;
//	name1 = ReadUsername();
//	printf("name1 : %s \n", name1);
//	name2 = ReadUsername();
//	printf("name2 : %s \n", name2);
//
//	printf("name1 : %s \n", name1);
//	printf("name2 : %s \n", name2);
//
//	return 0;
//}


//할당 및 접근

//int main(void)
//{
//	int* p1 = (int*)malloc(sizeof(int));
//	int* p2 = (int*)malloc(sizeof(int)*7);
//
//	*p1 = 20;
//	for (int i = 0; i < 7; i++)
//		p2[i] = i + 1;
//
//	printf("%d \n", *p1);
//	for (int i = 0; i < 7; i++)
//		printf("%d ", p2[i]);
//	
//	free(p1);
//	free(p2);
//
//	return 0;
//}


//동적 할당을 이용한 해결

//char* ReadUsername(void)
//{
//	char* name = (char*)malloc(sizeof(char) * 30);
//	printf("What's your name? ");
//	gets(name);
//	return name;
//}
//
//int main(void)
//{
//	char* name1;
//	char* name2;
//	name1 = ReadUsername();
//	printf("name1 : %s \n", name1);
//	name2 = ReadUsername();
//	printf("name2 : %s \n", name2);
//
//	printf("again name1 : %s \n", name1);
//	printf("again name2 : %s \n", name2);
//
//	free(name1);
//	free(name2);
//
//	return 0;
//}


//practice 1

//char* ReadString(int n)
//{
//	char* str = (char*)malloc(sizeof(char) * n);
//	printf("문자열 입력 : ");
//	gets(str);
//	return str;
//}
//
//void swapStrint(char* str)
//{
//	for (int i = strlen(str); i >= 0; i--)
//	{
//		if (str[i] == ' ')
//		{
//			printf("%s ", &str[i + 1]);
//			str[i] = NULL;
//		}
//	}
//	printf("%s", str);
//}
//
//int main(void)
//{
//	int strLength;
//	char* str;
//
//	printf("물자열의 길이 : ");
//	scanf("%d", &strLength);
//	getchar();
//	str = ReadString(strLength);
//	swapStrint(str);
//	
//	free(str);
//
//	return 0;
//}


//practice 2

//int main(void)
//{
//	int ty = 0;
//	int arrlen = 5;
//	int* arr = (int*)malloc(sizeof(int) * arrlen);
//
//	while (1)
//	{
//		printf("정수 입력 : ");
//		scanf("%d", &arr[ty]);
//
//		if (arr[ty] == -1)
//			break;
//
//		if (arrlen == ty + 1)
//		{
//			arrlen += 3;
//			arr = (int*)realloc(arr, sizeof(int) * arrlen);
//		}
//		ty++;
//
//	}
//	for (int i = 0; i < ty; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	free(arr);
//
//	return 0;
//}


