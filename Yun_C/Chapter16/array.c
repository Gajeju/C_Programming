#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)

//2���� �迭�� ũ��

//int main(void)
//{
//	int arr1[3][4];
//	int arr2[7][9];
//	printf("����3, ����4 : %d \n", sizeof(arr1));
//	printf("����7, ����9 : %d \n", sizeof(arr2));
//
//
//	return 0;
//}

//2�����迭 ����

//int main(void)
//{
//	int villa[4][2];
//	int popu;
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			printf("%d�� %dȣ �α��� : ", i + 1, j + 1);
//			scanf("%d", &villa[i][j]);
//		}
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		popu = 0;
//		popu += villa[i][0];
//		popu += villa[i][1];
//		printf("%d�� �α��� : %d \n", i + 1, popu);
//	}
//
//	return 0;
//}


//2�����迭�� �ּҰ�

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


//�迭�� �ʱ�ȭ

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
//		printf("%d�� \n", i + 2);
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
//	for (int i = 0; i < 4; i++)		//���
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
//	char student[4][10] = { "ö��", "ö��", "����", "����" };
//	char subject[4][10] = { "����", "����", "����", "����" };
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%s�� %s���� �Է� : ", student[i], subject[j]);
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


//3���� �迭

//int main(void)
//{
//	int arr1[2][3][4];
//	double arr2[5][5][5];
//	printf("����2, ����3, ����4 int�� �迭 : %d \n", sizeof(arr1));
//	printf("����5, ����5, ����5 double�� �迭 : %d \n", sizeof(arr2));
//
//	return 0;
//}


//3���� �迭 ����

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
	printf("A �б� ��ü ��� : %g \n", (double)mean / 6);
	
	mean = 0;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			mean += record[1][i][j];
	printf("B �б� ��ü ��� : %g \n", (double)mean / 6);

	mean = 0;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			mean += record[2][i][j];
	printf("C �б� ��ü ��� : %g \n", (double)mean / 6);

	return 0;
}