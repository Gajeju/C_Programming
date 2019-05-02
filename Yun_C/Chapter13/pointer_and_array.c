#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)

//배열의 이름

//int main(void)
//{
//	int arr[3] = { 0,1,2 };
//	printf("배열의 이름 : %p \n", arr);
//	printf("첫 번째 요소 %p \n", &arr[0]);
//	printf("두 번째 요소 %p \n", &arr[1]);
//	printf("세 번째 요소 %p \n", &arr[2]);
//
//	return 0;
//}


//배열이름 포인터 연산

//int main(void)
//{
//	int arr1[3] = { 1,2,3 };
//	double arr2[3] = { 1.1, 2.2, 3.3 };
//
//	printf("%d %g \n", *arr1, *arr2);
//	*arr1 += 100;
//	*arr2 += 120.5;
//	printf("%d %g \n", arr1[0], arr2[0]);
//
//	return 0;
//}


//포인터로 배열접근

//int main(void)
//{
//	int arr[3] = { 15, 25, 35 };
//	int * ptr = &arr[0];
//
//	printf("%d %d \n", ptr[0], arr[0]);
//	printf("%d %d \n", ptr[1], arr[1]);
//	printf("%d %d \n", ptr[1], arr[1]);
//	printf("%d %d \n", *ptr, *arr);
//
//	return 0;
//}


//포인터 증감연산

//int main(void)
//{
//	int * ptr1 = 0x0010;
//	double * ptr2 = 0x0010;
//
//	printf("%p %p \n", ptr1 + 1, ptr1 + 2);
//	printf("%p %p \n", ptr2 + 1, ptr2 + 2);
//
//	printf("%p %p \n", ptr1, ptr2);
//	ptr1++;
//	ptr2++;
//
//	printf("%p %p \n", ptr1, ptr2);
//
//	return 0;
//}


//포인터 연산을 이용한 배열 접근

//int main(void)
//{
//	int arr[3] = { 11, 22, 33 };
//	int * ptr = arr;
//	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));
//
//	printf("%d ", *ptr); ptr++;
//	printf("%d ", *ptr); ptr++;
//	printf("%d ", *ptr); ptr--;
//	printf("%d ", *ptr); ptr--;
//	printf("%d ", *ptr); 
//	puts("");
//
//	return 0;
//}


//practice 1

//int main(void)
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int *p = arr;
//
//	for (int i = 0; i < 5; i++)
//	{
//		*p += 2;
//		p += 1;
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//practice 2

//int main(void)
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int *p = arr;
//	
//	for (int i = 0; i < 5; i++)
//	{
//		*(p + i) += 2;
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//practice 3

//int main(void)
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int * ptr = &arr[4];
//	int sum = 0;
//
//	for (int i = 0; i < 5; i++)
//	{
//		sum += *ptr;
//		ptr--;
//	}
//	printf("sum : %d", sum);
//
//	return 0;
//}


//practice 4

//int main(void)
//{
//	int arr[6] = { 1, 2, 3, 4, 5, 6 };
//	int *pf, *pb;
//	int temp;
//
//	pf = arr;
//	pb = &arr[5];
//
//	for (int i = 0; i < 3; i++)
//	{
//		temp = *pf;
//		*pf = *pb;
//		*pb = temp;
//		pf++;
//		pb--;
//	}
//
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//상수형태의 문자열

int main(void)
{
	char str1[] = "My String";
	char* str2 = "Your String";
	printf("%s %s \n", str1, str2);

	str2 = "Our String";
	printf("%s %s \n", str1, str2);

	str1[0] = 'X';
	//str2[0] = 'X'; 상수형태 문자열의 내용변경 불가
	printf("%s %s \n", str1, str2);

	return 0;
}


//포인터 배열

//int main(void)
//{
//	int num1 = 10, num2 = 20, num3 = 30;
//	int * arr[3] = { &num1, &num2, &num3 };
//
//	printf("%d \n", *arr[0]);
//	printf("%d \n", *arr[1]);
//	printf("%d \n", *arr[2]);
//
//	return 0;
//}


//문자열 배열 포인터

//int main(void)
//{
//	char * strArr[3] = { "Simple", "String", "Array" };
//	printf("%s \n", strArr[0]);
//	printf("%s \n", strArr[1]);
//	printf("%s \n", strArr[2]);
//
//	return 0;
//}