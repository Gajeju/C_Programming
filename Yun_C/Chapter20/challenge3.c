#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)

//Challenge1

//int main(void)
//{
//	int arr[4][4] =
//	{
//		{1,2,3,4},
//		{5,6,7,8},
//		{9,10,11,12},
//		{13,14,15,16}
//	};
//	int arrAfter[4][4];
//
//	for (int k = 0; k < 3; k++)
//	{
//		printf("%d �� �ٲ� ��� \n---------------------\n",k+1);
//
//		for (int i = 0; i < 4; i++)
//		{
//			for (int j = 0; j < 4; j++)
//			{
//				arrAfter[i][j] = arr[3 - j][i];
//			}
//		}
//
//		for (int i = 0; i < 4; i++)
//		{
//			for (int j = 0; j < 4; j++)
//				printf("%2d ", arrAfter[i][j]);
//			puts("");
//		}
//
//		for (int i = 0; i < 4; i++)
//		{
//			for (int j = 0; j < 4; j++)
//				arr[i][j] = arrAfter[i][j];
//		}
//		printf("\n\n");
//	}
//	return 0;
//}


//Challenge2	�����̹迭 �ٽ� �õ��غ� ��ġ ����

//int main(void)
//{
//	int n;			//�Է¹��� ����
//	int row = 0;	//��
//	int col = -1;	//��
//	int value = 1;	//��
//	int cal = 1;	//������
//	int arr[20][20];
//
//	printf("���ڸ� �Է��Ͻÿ� : ");
//	scanf("%d", &n);
//	
//	while (n > 0)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			col += cal;
//			arr[row][col] = value;
//			value++;
//		}
//		n--;
//		if (n == 0) break;
//
//		for (int i = 0; i < n; i++)
//		{
//			row += cal;
//			arr[row][col] = value;
//			value++;
//			
//		}
//		cal *= (-1);
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//			printf("%3d ", arr[i][j]);
//		puts("");
//	}
//	
//	return 0;
//}


//Challenge3

//int main(void)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		int random = rand();
//		printf("���� ��� : %d \n", random % 100);
//	}
//	return 0;
//}


//Challenge4

//srand�� �̿��� ���尪 �Է�

//int main(void)
//{
//	int seed;
//	printf("���� �� �Է� : ");
//	scanf("%d", &seed);
//	srand(seed);
//
//	for (int i = 0; i < 5; i++)
//		printf("���� ��� : %d \n", rand());
//
//	return 0;
//}

//��ǻ���� �ð��� �̿��� ���� �Է�

#include <time.h>

//int main(void)
//{
//	srand((int)time(NULL));
//	for (int i = 0; i < 5; i++)
//		printf("���� �Է� : %d \n", rand());
//	return 0;
//}

//�ֻ���

//int main(void)
//{
//	srand((int)time(NULL));
//	for (int i = 0; i < 2; i++)
//		printf("�ֻ��� %d�� ��� %d \n", i + 1, ((rand()) % 6)+1);
//}


//Challenge5

//int main(void)
//{
//	int n;				//����� �Է�
//	int computer;		//����
//	int victory = 0;	//�¸�Ƚ��
//	int draw = 0;		//��� Ƚ��
//	char * string[] = { "����", "����", "��" };
//
//	for (;;)
//	{ 
//		srand((int)time(NULL));						//��ǻ�� �ʱ�ȭ
//		computer = (rand() % 3) + 1;
//		printf("%d", computer);
//
//
//		printf("������ 1, ������ 2, ����3 : ");		//����� �Է�
//		scanf("%d", &n);
//
//		//�¸�
//		if ((n != 3 && n < computer) || (n == 3 && n > computer))
//		{
//			printf("����� %s ����, ��ǻ�ʹ� %s ����, �̰���ϴ�! \n", string[n-1], string[computer-1]);
//			victory++;
//		}
//		//���º�
//		else if (n == computer)
//		{
//			printf("����� %s ����, ��ǻ�ʹ� %s ����, �����ϴ�! \n", string[n-1], string[computer-1]);
//			draw++;
//		}
//		//�й�
//		else if ((n != 3 && n > computer) || (n == 3 && n < computer))
//		{
//			printf("����� %s ����, ��ǻ�ʹ� %s ����, ����� �����ϴ�! \n", string[n-1], string[computer-1]);
//			puts("");
//			printf("������ ��� : %d��, %d��", victory, draw);
//			break;
//		}
//	}
//}


//Challenge 6


int main(void)
{
	int computer[3];
	int player[3];
	int strike = 0;
	int ball = 0;
	int try = 1;

	//������ �ʱ�ȭ
	srand((int)time(NULL));

	for (int i = 0; i < 3; i++)
	{
		computer[i] = rand() % 10;
	}

	for (int i = 1; i < 3; i++)
	{
		for (;;)
		{
			if (computer[i] == computer[0])
				computer[i] = rand() % 10;
			else if (i != 1 && computer[i] == computer[1])
				computer[i] = rand() % 10;
			else
				break;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		printf("%d ", computer[i]);
	}
	puts("");

	printf("Start Game! \n");

	for (;;)
	{
		//����� �Է�
		printf("3���� ���� ���� : ");
		for (int i = 0; i < 3; i++)
		{
			scanf("%d", &player[i]);
		}

		//��
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (computer[i] == player[j] && i != j)
					ball++;
				else if (computer[i] == player[j] && i == j)
					strike++;
			}
		}

		//��� ���
		printf("%d��° ���� ��� : %dstrike, %dball!! \n", try, strike, ball);
		try++;

		//���� Ŭ����
		if (strike == 3)
		{
			printf("\n\nGame Over!");
			break;
		}
		strike = 0;
		ball = 0;
	}

	return 0;
}