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
//		printf("%d 번 바꾼 결과 \n---------------------\n",k+1);
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


//Challenge2	달팽이배열 다시 시도해볼 가치 있음

//int main(void)
//{
//	int n;			//입력받을 변수
//	int row = 0;	//행
//	int col = -1;	//열
//	int value = 1;	//값
//	int cal = 1;	//증가폭
//	int arr[20][20];
//
//	printf("숫자를 입력하시오 : ");
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
//		printf("난수 출력 : %d \n", random % 100);
//	}
//	return 0;
//}


//Challenge4

//srand를 이용한 씨드값 입력

//int main(void)
//{
//	int seed;
//	printf("씨드 값 입력 : ");
//	scanf("%d", &seed);
//	srand(seed);
//
//	for (int i = 0; i < 5; i++)
//		printf("정수 출력 : %d \n", rand());
//
//	return 0;
//}

//컴퓨터의 시간을 이용한 씨드 입력

#include <time.h>

//int main(void)
//{
//	srand((int)time(NULL));
//	for (int i = 0; i < 5; i++)
//		printf("정수 입력 : %d \n", rand());
//	return 0;
//}

//주사위

//int main(void)
//{
//	srand((int)time(NULL));
//	for (int i = 0; i < 2; i++)
//		printf("주사위 %d의 결과 %d \n", i + 1, ((rand()) % 6)+1);
//}


//Challenge5

//int main(void)
//{
//	int n;				//사용자 입력
//	int computer;		//난수
//	int victory = 0;	//승리횟수
//	int draw = 0;		//비긴 횟수
//	char * string[] = { "바위", "가위", "보" };
//
//	for (;;)
//	{ 
//		srand((int)time(NULL));						//컴퓨터 초기화
//		computer = (rand() % 3) + 1;
//		printf("%d", computer);
//
//
//		printf("바위는 1, 가위는 2, 보는3 : ");		//사용자 입력
//		scanf("%d", &n);
//
//		//승리
//		if ((n != 3 && n < computer) || (n == 3 && n > computer))
//		{
//			printf("당신은 %s 선택, 컴퓨터는 %s 선택, 이겼습니다! \n", string[n-1], string[computer-1]);
//			victory++;
//		}
//		//무승부
//		else if (n == computer)
//		{
//			printf("당신은 %s 선택, 컴퓨터는 %s 선택, 비겼습니다! \n", string[n-1], string[computer-1]);
//			draw++;
//		}
//		//패배
//		else if ((n != 3 && n > computer) || (n == 3 && n < computer))
//		{
//			printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 졌습니다! \n", string[n-1], string[computer-1]);
//			puts("");
//			printf("게임의 결과 : %d승, %d무", victory, draw);
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

	//랜덤수 초기화
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
		//사용자 입력
		printf("3개의 숫자 선택 : ");
		for (int i = 0; i < 3; i++)
		{
			scanf("%d", &player[i]);
		}

		//비교
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

		//결과 출력
		printf("%d번째 도전 결과 : %dstrike, %dball!! \n", try, strike, ball);
		try++;

		//게임 클리어
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