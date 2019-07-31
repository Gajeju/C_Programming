#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6001)
#pragma warning (disable : 6031)


//practice 1 : 도서프로그램

//typedef struct library
//{
//	char name[20];
//	char title[20];
//	int page;
//} Book;
//
//void Print(Book book);
//
//int main(void)
//{
//	Book bookList[3];
//
//	puts("도서 정보 입력");
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("저자 : ");
//		scanf("%s", bookList[i].name);
//		getchar();
//		printf("제목 : ");
//		gets(bookList[i].title, stdin);
//		printf("페이지 수 : ");
//		scanf("%d", &bookList[i].page);
//	}
//
//	for (int i = 0; i < 3; i++)
//		Print(bookList[i]);
//
//	return 0;
//}
//
//void Print(Book book)
//{
//	printf("저자 : %s \n", book.name);
//	printf("제목 : %s \n", book.title);
//	printf("페이지 수 : %d \n", book.page);
//}


//practice 2 : 도서프로그램 동적할당

//typedef struct library
//{
//	char name[20];
//	char title[20];
//	int page;
//} Book;
//
//void Print(Book * book);
//
//int main(void)
//{
//	Book * bookList[3];
//
//	puts("도서 정보 입력");
//
//	for (int i = 0; i < 3; i++)
//	{
//		bookList[i] = (Book*)malloc(sizeof(Book));
//
//		printf("저자 : ");
//		scanf("%s", bookList[i] -> name);
//		getchar();
//		printf("제목 : ");
//		gets(bookList[i] -> title, stdin);
//		printf("페이지 수 : ");
//		scanf("%d", &(bookList[i] -> page));
//	}
//
//	for (int i = 0; i < 3; i++)
//		Print(bookList[i]);
//
//	free(bookList[0]);
//	free(bookList[1]);
//	free(bookList[2]);
//
//	return 0;
//}
//
//void Print(Book * book)
//{
//	printf("저자 : %s \n", book->name);
//	printf("제목 : %s \n", book->title);
//	printf("페이지 수 : %d \n", book->page);
//}


//practice 3

//typedef struct Complex
//{
//	double real;
//	double imagin;
//} Com;
//
//Com Add(Com num1, Com num2)
//{
//	Com result;
//	result.real = num1.real + num2.real;
//	result.imagin = num1.imagin + num2.imagin;
//	
//	return result;
//}
//
//Com Mul(Com num1, Com num2)
//{
//	Com result;
//	result.real = (num1.real * num2.real) - (num1.imagin * num2.imagin);
//	result.imagin = (num1.imagin * num2.real) + (num1.real * num2.imagin);
//
//	return result;
//}
//
//void Print(Com add, Com mul)
//{
//	printf("합의 결과] 실수: %f, 허수: %f \n", add.real, add.imagin);
//	printf("곱의 결과] 실수: %f, 허수: %f \n", mul.real, mul.imagin);
//}
//
//int main(void)
//{
//	Com list[2];
//	Com AddResult;
//	Com MulRestul;
//
//	printf("복소수 입력1[실수 허수]: ");
//	scanf("%lf %lf", &list[0].real, &list[0].imagin);
//	printf("복소수 입력2[실수 허수]: ");
//	scanf("%lf %lf", &list[1].real, &list[1].imagin);
//
//	AddResult = Add(list[0], list[1]);
//	MulRestul = Mul(list[0], list[1]);
//
//	Print(AddResult, MulRestul);
//
//	return 0;
//}


//practice 4

int main(void)
{
	FILE* fp = fopen("text.txt", "rt");


	return 0;
}

//파일 입출력 예제


