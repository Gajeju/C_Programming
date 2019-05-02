#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6031)

//10개 입력 후 홀수 짝수 구분

//void Odd(int *par)
//{	
//	printf("홀수 출력 : ");
//	for (int i = 0; i < 10; i++)
//	{
//		if (par[i] % 2 == 1)
//			printf("%d, ", par[i]);
//	}
//	puts("");
//}
//
//void Even(int *par)
//{
//	printf("홀짝 출력 : ");
//	for (int i = 0; i < 10; i++)
//	{
//		if (par[i] % 2 == 0)
//			printf("%d, ", par[i]);
//	}
//	puts("");
//}
//
//int main(void)
//{
//	int arr[10];
//	
//	printf("총 10개의 숫자 입력 \n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("입력 : ");
//		scanf("%d", &arr[i]);
//	}
//	Odd(arr);
//	Even(arr);
//
//	return 0;
//}


//10진수 2진수 변환

//void DeToBin(int n)
//{
//	int position = 0;
//	int arr[20] = {0,};
//
//	for (;;)
//	{
//		arr[position] = n % 2;
//		n = n / 2;
//		position++;
//		if (n == 0)
//			break;
//	}
//	for (int i = 0; i <= position; i++)
//	{
//		printf("%d", arr[position - i]);
//	}
//}
//
//int main(void)
//{
//	int num;
//
//	printf("10진수 정수 입력 : ");
//	scanf("%d", &num);
//	DeToBin(num);
//
//	return 0;
//}


//배열 정렬

//int main(void)
//{
//	int arr[10];
//	int odd[10] = { 0, };
//	int even[10] = { 0, };
//	int posOdd = 0;
//	int posEven = 0;
//	int temp;
//
//	for (int i = 0; i < 10; i++)	//사용자 입력
//	{
//		printf("입력 : ");
//		scanf("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < 10; i++)	//홀수 추출
//	{
//		if (arr[i] % 2 == 1)
//		{
//			odd[posOdd] = arr[i];
//			posOdd++;
//		}
//	}
//
//	for (int i = 0; i < posOdd; i++)	//홀수 정렬
//	{
//		int temp;
//
//		for (int j = 0; j < posOdd; j++)
//		{
//			if (odd[i] < odd[j])
//			{
//				temp = odd[i];
//				odd[i] = odd[j];
//				odd[j] = temp;
//			}
//		}
//	}
//
//	for (int i = 0; i < 10; i++)	//짝수 추출
//	{
//		if (arr[i] % 2 == 0)
//		{
//			even[posEven] = arr[i];
//			posEven++;
//		}
//	}
//
//	for (int i = 0; i < posEven; i++)	//짝수 정렬
//	{
//		int temp;
//
//		for (int j = 0; j < posEven; j++)
//		{
//			if (even[i] > even[j])
//			{
//				temp = even[i];
//				even[i] = even[j];
//				even[j] = temp;
//			}
//		}
//	}
//
//	//출력
//
//	printf("배열 요소의 출력 : ");
//
//	for (int i = 0; i < posOdd; i++)
//	{
//		printf("%d ", odd[i]);
//	}
//
//	for (int i = 0; i < posEven; i++)
//	{
//		printf("%d ", even[i]);
//	}
//
//	return 0;
//}


//화문 판독

#include <string.h>

//void Palindrome(char * string)
//{
//	int n = strlen(string);
//
//	for (int i = 0; i < n/2; i++)
//	{
//		if (string[i] != string[n - 1 - i])
//		{
//			printf("화문이 아닙니다.");
//			return;
//		}	
//	}
//	printf("화문 입니다.");
//}
//
//int main(void)
//{
//	char str[20];
//	printf("문자열 입력 : ");
//	scanf("%s", str);
//
//	Palindrome(str);
//
//	return 0;
//}


//버블정렬

//void BubbleSort(int ary[], int len);
//
//int main(void)
//{
//	int arr[4] = { 3, 2, 4, 1 };
//
//	BubbleSort(arr, sizeof(arr) / sizeof(int));
//	for (int i = 0; i < 4; i++)
//		printf("%d ", arr[i]);
//	puts("");
//
//	return 0;
//}
//
//void BubbleSort(int ary[], int len)
//{
//	int temp;
//
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < (len - i) - 1; j++)
//		{
//			if (ary[j] > ary[j + 1])
//			{
//				temp = ary[j];
//				ary[j] = ary[j + 1];
//				ary[j + 1] = temp;
//			}
//		}
//	}
//}


//내림차순

void DesSort(int p[], int len)
{
	int temp;

	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < (len - i - 1); j++)
		{
			if (p[j] < p[j + 1])
			{
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
}

int main(void)
{
	int arr[7];

	for (int i = 0; i < 7; i++)
	{
		printf("입력 : ");
		scanf("%d", &arr[i]);
	}

	DesSort(arr, sizeof(arr) / sizeof(int));

	for (int i = 0; i < 7; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}