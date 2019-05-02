#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)

//배열접근

//void ShowArayElem(int * param, int len)
//{
//	int i;
//	for (i = 0; i < len; i++)
//		printf("%d ", param[i]);
//	puts("");
//}
//
//int main(void)
//{
//	int arr1[3] = { 1, 2, 3 };
//	int arr2[5] = { 4, 5, 6, 7, 8 };
//	ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
//	ShowArayElem(arr2, sizeof(arr2) / sizeof(int));
//
//	return 0;
//}


//배열 변경

//void ShowArayElem(int * param, int len)
//{
//	int i;
//	for (i = 0; i < len; i++)
//		printf("%d ", param[i]);
//	puts("");
//}
//
//void AddArayElem(int * param, int len, int add)
//{
//	for (int i = 0; i < len; i++)
//		param[i] += add;
//}
//
//int main(void)
//{
//	int arr[3] = { 1, 2, 3 };
//	AddArayElem(arr, sizeof(arr) / sizeof(int), 1);
//	ShowArayElem(arr, sizeof(arr) / sizeof(int));
//
//	AddArayElem(arr, sizeof(arr) / sizeof(int), 2);
//	ShowArayElem(arr, sizeof(arr) / sizeof(int));
//	
//	AddArayElem(arr, sizeof(arr) / sizeof(int), 3);
//	ShowArayElem(arr, sizeof(arr) / sizeof(int));
//
//	return 0;
//}


//값 호출

//void Swap(int n1, int n2)
//{
//	int temp = n1;
//	n1 = n2;
//	n2 = temp;
//	printf("n1 : %d, n2 : %d \n", n1, n2);
//}
//
//int main(void)
//{
//	int num1 = 10;
//	int num2 = 20;
//	printf("num1 : %d, num2 : %d \n", num1, num2);
//
//	Swap(num1, num2);
//	printf("num1 : %d, num2 : %d \n", num1, num2);
//
//	return 0;
//}


//참조 호출

//void Swap(int * p1, int * p2)
//{
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//
//int main(void)
//{
//	int num1 = 10;
//	int num2 = 20;
//	printf("num1 : %d, num2 : %d \n", num1, num2);
//	Swap(&num1, &num2);
//	printf("num1 ; %d, num2 : %d \n", num1, num2);
//
//	return 0;
//}


//practice 1

//int SquareByValue(int n)
//{
//	return n * n;
//}
//
//void SquareByReference(int * p)
//{
//	*p = *p * *p;
//}
//
//int main(void)
//{
//	int num;
//	printf("정수 입력 : ");
//	scanf("%d", &num);
//
//	num = SquareByValue(num);
//	printf("num : %d \n", num);
//	SquareByReference(&num);
//	printf("num : %d \n", num);
//	
//	return 0;
//}


//practice 2

void Swap(int *p1, int *p2, int *p3)
{
	int temp = *p3;
	*p3 = *p2;
	*p2 = *p1;
	*p1 = temp;
}

int main(void)
{
	int n1 = 10;
	int n2 = 20;
	int n3 = 30;
	
	Swap(&n1, &n2, &n3);

	printf("n1 : %d, n2 : %d, n3 : %d \n", n1, n2, n3);

	return 0;
}