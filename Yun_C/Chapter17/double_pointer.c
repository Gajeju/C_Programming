#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)

//더블 포인터

//int main(void)
//{
//	double num = 3.14;
//	double *p = &num;
//	double **dp = &p;
//	double *p2;
//
//	printf("%9p %9p \n", p, *dp);
//	printf("%9g %9g \n", num, **dp);
//	
//	p2 = *dp;
//	*p2 = 10.99;
//
//	printf("%9g %9g \n", num, **dp);
//
//	return 0;
//}


//swap1 (오류)

//void SwapIntPtr(int *p1, int *p2)
//{
//	int * temp = p1;
//	p1 = p2;
//	p2 = temp;
//}
//
//int main(void)
//{
//	int num1 = 10, num2 = 20;
//	int *ptr1, *ptr2;
//	ptr1 = &num1, ptr2 = &num2;
//	printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);
//
//	SwapIntPtr(ptr1, ptr2);
//	printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);
//
//	return 0;
//}


//포인터 접근

//void SwapIntPtr(int **p1, int **p2);
//
//int main(void)
//{
//	int num1 = 10;
//	int num2 = 20;
//	int *ptr1, *ptr2;
//	ptr1 = &num1, ptr2 = &num2;
//	printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);
//
//	SwapIntPtr(&ptr1, &ptr2);
//	printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);
//
//	return 0;
//}
//
//void SwapIntPtr(int **p1, int **p2)
//{
//	int *temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}


//포인터 배열

//int main(void)
//{
//	int num1 = 10, num2 = 20, num3 = 30;
//	int *ptr1 = &num1;
//	int *ptr2 = &num2;
//	int *ptr3 = &num3;
//
//	int * ptrArr[] = { ptr1, ptr2, ptr3 };
//	int ** dptr = ptrArr;
//
//	printf("%d %d %d \n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
//	printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *(dptr[2]));
//
//	return 0;
//}


//삼중 포인터

//int main(void)
//{
//	int num = 100;
//	int *ptr = &num;
//	int **dptr = &ptr;
//	int ***tptr = &dptr;
//
//	printf("%d %d \n", **dptr, ***tptr);
//
//	return 0;
//}


//practice

//MaxAndMin(int * p1, int **dp1, int **dp2);
//
//int main(void)
//{
//	int *maxPtr;
//	int *minPtr;
//	int arr[5];
//	
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d번째 정수 입력 : ", i + 1);
//		scanf("%d", &arr[i]);
//	}
//
//	MaxAndMin(arr, &maxPtr, &minPtr);
//	printf("*maxPtr : %d \n*minPtr : %d", *maxPtr, *minPtr);
//
//	return 0;
//}
//
//MaxAndMin(int * p, int **maxp, int **minp)
//{
//	int max = p[0];
//	int min = p[0];
//
//	for (int i = 0; i < 5; i++)
//	{
//		if (max < p[i])
//			max = p[i];
//		if (min > p[i])
//			min = p[i];
//	}
//	*maxp = &max;
//	*minp = &min;
//}

//더블 포인터

//int main(void)
//{
//	double num = 3.14;
//	double *p = &num;
//	double **dp = &p;
//	double *p2;
//
//	printf("%9p %9p \n", p, *dp);
//	printf("%9g %9g \n", num, **dp);
//	
//	p2 = *dp;
//	*p2 = 10.99;
//
//	printf("%9g %9g \n", num, **dp);
//
//	return 0;
//}


//swap1 (오류)

//void SwapIntPtr(int *p1, int *p2)
//{
//	int * temp = p1;
//	p1 = p2;
//	p2 = temp;
//}
//
//int main(void)
//{
//	int num1 = 10, num2 = 20;
//	int *ptr1, *ptr2;
//	ptr1 = &num1, ptr2 = &num2;
//	printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);
//
//	SwapIntPtr(ptr1, ptr2);
//	printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);
//
//	return 0;
//}


//포인터 접근

//void SwapIntPtr(int **p1, int **p2);
//
//int main(void)
//{
//	int num1 = 10;
//	int num2 = 20;
//	int *ptr1, *ptr2;
//	ptr1 = &num1, ptr2 = &num2;
//	printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);
//
//	SwapIntPtr(&ptr1, &ptr2);
//	printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);
//
//	return 0;
//}
//
//void SwapIntPtr(int **p1, int **p2)
//{
//	int *temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}


//포인터 배열

//int main(void)
//{
//	int num1 = 10, num2 = 20, num3 = 30;
//	int *ptr1 = &num1;
//	int *ptr2 = &num2;
//	int *ptr3 = &num3;
//
//	int * ptrArr[] = { ptr1, ptr2, ptr3 };
//	int ** dptr = ptrArr;
//
//	printf("%d %d %d \n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
//	printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *(dptr[2]));
//
//	return 0;
//}


//삼중 포인터

//int main(void)
//{
//	int num = 100;
//	int *ptr = &num;
//	int **dptr = &ptr;
//	int ***tptr = &dptr;
//
//	printf("%d %d \n", **dptr, ***tptr);
//
//	return 0;
//}


//practice

MaxAndMin(int * p1, int **dp1, int **dp2);

int main(void)
{
	int *maxPtr;
	int *minPtr;
	int arr[5];
	
	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 정수 입력 : ", i + 1);
		scanf("%d", &arr[i]);
	}

	MaxAndMin(arr, &maxPtr, &minPtr);
	printf("*maxPtr : %d \n*minPtr : %d", *maxPtr, *minPtr);

	return 0;
}

MaxAndMin(int * p, int **maxp, int **minp)
{
	int max = p[0];
	int min = p[0];

	for (int i = 0; i < 5; i++)
	{
		if (max < p[i])
			max = p[i];
		if (min > p[i])
			min = p[i];
	}
	*maxp = &max;
	*minp = &min;
}