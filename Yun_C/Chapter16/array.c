#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)

//2차원 배열의 크기

//int main(void)
//{
//	int arr1[3][4];
//	int arr2[7][9];
//	printf("세로3, 가로4 : %d \n", sizeof(arr1));
//	printf("세로7, 가로9 : %d \n", sizeof(arr2));
//
//
//	return 0;
//}

//2차원배열 접근

//int main(void)
//{
//	int villa[4][2];
//	int popu;
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			printf("%d층 %d호 인구수 : ", i + 1, j + 1);
//			scanf("%d", &villa[i][j]);
//		}
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		popu = 0;
//		popu += villa[i][0];
//		popu += villa[i][1];
//		printf("%d층 인구수 : %d \n", i + 1, popu);
//	}
//
//	return 0;
//}


//2차원배열의 주소값

//int main(void)
//{
//	int arr[3][2];
//	
//	for (int i = 0; i < 3; i++)
//		for (int j = 0; j < 2; j++)
//			printf("%p \n", &arr[i][j]);
//
//	return 0;
//}


//배열의 초기화

//int main(void)
//{
//	int arr1[3][3] = {
//		{1, 2, 3},
//		{4, 5, 6},
//		{7, 8, 9}
//	};
//
//	int arr2[3][3] = {
//		{1},
//		{4, 5},
//		{7, 8 ,9}
//	};
//
//	int arr3[3][3] = { 1, 2, 3, 4, 5, 6, 7 };
//	
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//			printf("%d ", arr1[i][j]);
//		puts("");
//	}
//	puts("");
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//			printf("%d ", arr2[i][j]);
//		puts("");
//	}
//	puts("");
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//			printf("%d ", arr3[i][j]);
//		puts("");
//	}
//	puts("");
//
//	return 0;
//}


//practice 1

//int main(void)
//{
//	int dan[3][9];
//	
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			dan[i][j] = (i + 2) * (j + 1);
//		}
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d단 \n", i + 2);
//		for (int j = 0; j < 9; j++)
//			printf("%d x %d = %d \n", i + 2, j + 1, dan[i][j]);
//		puts("");
//	}
//	
//	return 0;
//}


//int main(void)
//{
//	int arr1[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int arr2[4][2];
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 2; j++)
//			arr2[i][j] = arr1[j][i];
//	}
//
//	for (int i = 0; i < 4; i++)		//출력
//	{
//		for (int j = 0; j < 2; j++)
//			printf("%d ", arr2[i][j]);
//		puts("");
//	}
//	return 0;
//}


//practice 3

//int main(void)
//{
//	int grade[5][5] = {0, };
//	char student[4][10] = { "철희", "철수", "영희", "영수" };
//	char subject[4][10] = { "국어", "영어", "수학", "국사" };
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%s의 %s점수 입력 : ", student[i], subject[j]);
//			scanf("%d", &grade[i][j]);
//		}
//	}
//	
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			grade[i][4] += grade[i][j];
//			grade[4][i] += grade[i][j];
//			grade[5][5] += grade[i][j];
//		}
//	}
//	
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//			printf("%d ", grade[i][j]);
//		puts("");
//	}
//
//	return 0;
//}


//3차원 배열

//int main(void)
//{
//	int arr1[2][3][4];
//	double arr2[5][5][5];
//	printf("높이2, 세로3, 가로4 int형 배열 : %d \n", sizeof(arr1));
//	printf("높이5, 세로5, 가로5 double형 배열 : %d \n", sizeof(arr2));
//
//	return 0;
//}


//3차원 배열 접근

int main(void)
{
	int mean = 0;
	int record[3][3][2] = {
		{
			{70, 80},
			{94, 90},
			{70, 85}
		},
		{
			{83, 90},
			{95, 60},
			{90, 82}
		},
		{
			{98, 89},
			{99, 94},
			{91, 87}
		}
	};

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			mean += record[0][i][j];
	printf("A 학급 전체 평균 : %g \n", (double)mean / 6);
	
	mean = 0;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			mean += record[1][i][j];
	printf("B 학급 전체 평균 : %g \n", (double)mean / 6);

	mean = 0;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			mean += record[2][i][j];
	printf("C 학급 전체 평균 : %g \n", (double)mean / 6);

	return 0;
}