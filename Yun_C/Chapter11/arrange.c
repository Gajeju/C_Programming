#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)

//배열

//int main(void)
//{
//	int arr[5];
//	int sum = 0, i;
//
//	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;
//
//	for (i = 0; i < 5; i++)
//		sum += arr[i];
//	printf("배열요소에 저장된 값의 합 : %d \n", sum);
//
//	return 0;
//}


//배열 초기화

//int main(void)
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,4,5,6,7 };
//	int arr3[5] = { 1,2 };
//	int ar1Len, ar2Len, ar3Len, i;
//
//	printf("배열 arr1의 크기 : %d \n", sizeof(arr1));
//	printf("배열 arr2의 크기 : %d \n", sizeof(arr2));
//	printf("배열 arr3의 크기 : %d \n", sizeof(arr3));
//
//	ar1Len = sizeof(arr1) / sizeof(int);
//	ar2Len = sizeof(arr2) / sizeof(int);
//	ar3Len = sizeof(arr3) / sizeof(int);
//
//	for (i = 0; i < ar1Len; i++)
//		printf("%d ", arr1[i]);
//	printf("\n");
//
//	for (i = 0; i < ar2Len; i++)
//		printf("%d ", arr2[i]);
//	printf("\n");
//
//	for (i = 0; i < ar3Len; i++)
//		printf("%d ", arr3[i]);
//	printf("\n");
//
//	return 0;
//}


//practice 1

//void Input(int *arr);
//void Output(int * arr);
//void Max(int *arr);
//void Min(int *arr);
//void SumAll(int *arr);
//
//int main(void)
//{
//	int arr[5];
//	Input(arr);
//	//Output(arr);
//	Max(arr);
//	Min(arr);
//	SumAll(arr);
//
//	return 0;
//}
//
//void Input(int *arr)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d번째 정수 입력 : ", i + 1);
//		scanf("%d", &arr[i]);
//	}
//}
//
//void Output(int * arr)
//{
//	for (int i = 0; i < 5; i++)
//		printf("%d ", arr[i]);
//}
//
//void Max(int *arr)
//{
//	int max = arr[0];
//
//	for (int i = 1; i < 5; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("최대값 : %d \n", max);
//}
//
//void Min(int *arr)
//{
//	int min = arr[0];
//
//	for (int i = 1; i < 5; i++)
//	{
//		if (min > arr[i])
//			min = arr[i];
//	}
//	printf("최소값 : %d \n", min);
//}
//
//void SumAll(int *arr)
//{
//	int sum = 0;
//
//	for (int i = 0; i < 5; i++)
//		sum += arr[i];
//	printf("총 합 : %d \n", sum);
//}


//practice 2

//int main(void)
//{
//	char str[] = {'G','o','o','d',' ','t','i','m','e'};
//
//	for (int i = 0; i < (sizeof(str) / sizeof(char)); i++)
//		printf("%c", str[i]);
//
//	return 0;
//}


//문자열

//int main(void)
//{
//	char str[] = "Good morning!";
//	printf("배열 str의 크기 : %d \n", sizeof(str));
//	printf("널 문자 문자형 출력 : %c \n", str[13]);
//	printf("널 문자 정수형 출력 : %d \n", str[13]);
//
//	str[12] = '?';
//	printf("문자열 출력 : %s \n", str);
//
//	return 0;
//}


//문자열 입력

//int main(void)
//{
//	char str[50];
//	int idx = 0;
//
//	printf("문자열 입력 : ");
//	scanf("%s", str);
//	printf("입력 받은 문자열 : %s \n", str);
//
//	printf("문자 단위 출력 : ");
//	while (str[idx] != '\0')
//	{
//		printf("%c", str[idx]);
//		idx++;
//	}
//	printf("\n");
//
//	return 0;
//}


//문자열의 null 문자

//int main(void)
//{
//	char str[50] = "I like C programming";
//	printf("string : %s \n", str);
//
//	str[8] = '\0';
//	printf("string : %s \n", str);
//
//	str[6] = '\0';
//	printf("string : %s \n", str);
//
//	str[1] = '\0';
//	printf("string : %s \n", str);
//
//	return 0;
//}


//practice 1

//int main(void)
//{
//	char str[50];
//	int dx = 0;
//
//	printf("단어 입력 : ");
//	scanf("%s", str);
//	
//	while (str[dx] != '\0')
//		dx++;
//	printf("%d", dx);
//
//	return 0;
//}


//practice 2

//void Input(char*);
//void Output(char*);
//void Change(char*);
//
//int main(void)
//{
//	char str[50];
//
//	Input(str);
//	Change(str);
//	Output(str);
//
//	return 0;
//}
//
//void Input(char *str)
//{
//	printf("문자열 입력 : ");
//	scanf("%s", str);
//}
//
//void Output(char *str)
//{
//	printf("문자열 출력 : %s", str);
//}
//
//void Change(char *str)
//{
//	char im[50];
//
//	for (int i = 0; i < 50; i++)
//	{
//		im[i] = str[i];
//
//		if (str[i] == '\0')
//		{
//			for (int j = 0; j < i; j++)
//			{
//				str[j] = im[(i - 1) - j];
//			}
//		}
//	}
//}


//답지 - 다른정렬

int main(void)
{
	char voca[100];
	int len = 0, i;
	char temp;

	printf("영단어 입력 : ");
	scanf("%s", voca);

	while (voca[len] != 0)
		len++;

	for (i = 0; i < len / 2; i++)
	{
		temp = voca[i];
		voca[i] = voca[(len - i) - 1];
		voca[(len - i) - 1] = temp;
	}

	return 0;
}


//practice 3

//int main(void)
//{
//	char str[50];
//	int dx = 0;
//	int max;
//	printf("영단어 입력 : ");
//	scanf("%s", str);
//
//	max = str[0];
//	while (str[dx] != '\0')
//	{
//		if (max < str[dx])
//			max = str[dx];
//		dx++;
//	}
//	printf("%c", max);
//}