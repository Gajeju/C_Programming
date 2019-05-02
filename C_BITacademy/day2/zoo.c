#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

//put_name()
//{
//	printf("2.김동현\n");
//}
//
//int main(void)
//{
//	printf("1.김동현\n");
//	put_name();
//	return 0;		//main함수가 잘 작동했다는것을 알려주는 역할을 함
//}


//두 수를 매개변수로 함수에 전달하고
//전달된 매개변수의 합을 리턴하는
//함수만들기
//int adder(int a, int b)
//{
//	return a + b;
//}
//
//int max(int a, int b) //두 개의 매개변수 중 큰 값을 리턴하는 함수
//{
//	return a > b ? a : b;;
//}
//
//int main(void)
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int sum = adder(a, b);
//	printf("두 수의 합 : %d\n", sum);
//	printf("두 수중 큰 값 : %d\n", max(a, b));
//}


//int main(void)
//{
//	int a;
//	scanf("%d", &a);
//
//	switch (a/10)
//	{
//	case 10:
//		printf("A학점"); break;
//	case 9:
//		printf("A학점"); break;
//	case 8:
//		printf("B학점"); break;
//	case 7:
//		printf("C학점"); break;
//	default:
//		printf("F학점"); break;
//	}
//}


//입력된 수가 1~10사아의 수이면 "합격", 아니면 "불합격" 출력
//if문의 형태를 사용하여 구현
//int main(void)
//{
//	int a;
//	scanf("%d", &a);
//	if (a <= 10 && a >= 1) //error : 1<=a<=10
//		puts("합격");
//	else
//		puts("불합격");
//}


//입력된 문자가 'A' ~ 'Z' 면 "대문자" 아니면 "소문자" 출력
//int main(void)
//{
//	char a;
//	scanf("%c", &a);
//	if (a >= 'A' && a <= 'Z')
//		puts("대문자");
//	else
//		puts("소문자");
//}


//입력된 문자가 대문자면 소문자 출력 소문자면 대문자 출력
//int main(void)			
//{
//	char ch;
//	scanf("%c", &ch);
//	if (ch >= 'A' && ch <= 'Z')	
//		printf("%c", ch + 32);			 //ch - 'A' + 'a'
//	else if (ch >= 'a' && ch >= 'z')
//		printf("%c", ch - 32);
//}

//매우 중요한 대소문자 변환
//int main(void)
//{
//	char ch;
//	scanf("%c", &ch);
//	printf("%c\n", ch ^ 0x20);
//}


//while문을 사용하여 다음 프로그램을 만드시오


//1. 1 ~ 10까지 출력하기
//int main(void)
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		printf("%d\n", a);
//		a++;
//	}
//}


//2. 0 ~ 9까지 출력
//int main(void)
//{
//	int a = 0;
//	while (a <= 9)
//	{
//		printf("%d\n", a);
//		a++;
//	}
//}


//3. 1 ~ 100까지 짝수만 출력
//int main(void)
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 2 == 0)			 //(a % 2 !=1)
//		{
//			printf("%d\n", a);
//		}
//		a++;
//	}
//}


//4. 1 ~ 100까지의 총합 5050 출력
//int main(void)
//{
//	int a = 0, sum = 0;
//	while (a <= 100)
//	{
//		sum += a;
//		a++;
//	}
//	printf("%d", sum);
//}


//5. 1 ~ 100까지의 3의 배수만 출력
//int main(void)
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 3 == 0)
//		{
//			printf("%d\n", a);
//		}
//		a++;
//	}
//}


//6. 1 ~ 100까지의 홀수의 합만 출력
//int main(void)
//{
//	int a = 1, sum = 0;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//		{
//			sum += a;
//		}
//		a++;
//	}
//	printf("odd sum : %d", sum);
//}


//7. 1 ~ 100까지의 3의 배수와 7의 배수만 출력
//int main(void)
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 3 == 0 || a % 7 == 0)
//		{
//			printf("%d\n", a);
//		}
//		a++;
//	}
//}


//8.두 수를 입력해서 무조건 큰수에서 작은수까지 다운카운팅출력
//int main(void)
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	if (a > b) {
//		while (a >= b)
//		{
//			printf("%d\n", a);
//			a--;
//		}
//	}
//	else if (a < b) {
//		while (b >= a)
//		{
//			printf("%d\n", b);
//			b--;
//		}
//	}
//}

//int main(void) 
//{
//	int a, b;
//	int big, small;
//	
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		big = a;
//		small = b;
//	}
//	else
//	{
//		big = b;
//		small = a;
//	}
//	while (big >= small)
//	{
//		printf("%d\n", big);
//		big--;
//	}
//}


//100원 500원 1000원을 넣었을 때만 더해줌
//잘못된 화폐여부 확인하는 함수

//int fuc(int a)
//{
//	if (a == 100 || a == 500 || a == 1000)			// (a != 100 && a != 500 && a != 1000) return 0;
//		return a;
//	else
//	{
//		printf("잘못된 화폐를 넣지 마시오\n");
//		return 0;
//	}
//}
//
//int main(void)
//{
//	int a;
//	int sum = 0;
//	while (1)
//	{
//		scanf("%d", &a);
//		sum += fuc(a);
//		printf("총합 : %d\n", sum);
//	}
//}


//비번을 입력하세요 출력 후 틀릴시 기회 감소 기회 총 3번 모두 틀릴 시 경찰 맞출 시 통과

//int main(void)
//{
//	int key = 1234;
//	int a;
//	int F = 3;
//
//	puts("비번을 입력하세요");
//
//	while (F >= 0)
//	{
//		scanf("%d", &a);
//		if (a == key)
//		{
//			puts("통과");
//			break;
//		}
//		else
//		{
//			F--;
//			if (F > 0)
//			{
//				puts("다시입력하시요");
//				printf("%d의 기회가 남았습니다\n", F);
//			}
//			else
//			{
//				puts("경찰");
//			}
//		}
//	}
//}



//int get_passwd(void);
//void chance(int cnt);
//int compare(int a, int b);
//void police(int cnt);
//
//main()
//{
//
//	int pwd = 1234;//기존에 정해둔 패스워드
//	int get_pwd; //받을 패스워드
//	int cnt = 3; //기회는 3번 뿐
//	do {
//		get_pwd = get_passwd();//패스워드 받아 옴 
//
//		if (compare(pwd, get_pwd)) //두변수 같은지 같으면 1 다르면 0을 리턴한다.
//		{
//			puts("통과");
//			break;
//		}
//		else {
//			chance(--cnt); //기회를 보여주는 함수
//		}
//	} while (cnt); //cnt!=0
//
//	police(cnt); //경찰을 부르는 함수 cnt가 0이면 결찰을 부르는 함수
//
//}
//
//int get_passwd(void)
//{
//	puts("비번을 입력하세요");
//	int a;
//	scanf("%d", &a);
//	return a;
//}
//
//void chance(int cnt)
//{
//	if(cnt != 0)
//	printf("%d번의 기회가 남았습니다\n",cnt);
//}
//
//int compare(int a, int b)			//return a==b;
//{
//	if (a == b)
//		return 1;
//	else
//		return 0;
//}
//
//void police(int cnt)
//{
//	if (cnt == 0)
//		printf("경찰");
//}







//랜덤변수 설정
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	int dx = 0, rnum;
//	srand(time(NULL));
//	while (dx < 5)
//	{
//		rnum = rand();
//		printf("%d\n", rnum);
//		dx++;
//	}
//}

//랜덤변수와 사용자 입력값을 비교하여 입력값보다 작다, 크다를 출력해주는 프로그램
//랜덤값을 1~100사이의 값으로 만들기 위해 %100
//몇번만에 맞췄는지 표시해줌
//왜 더 큰 값을 넣었습니까

//#include <time.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int age, rev;
//	int try = 1;
//
//	srand(time(NULL));				//1~100 사이의 랜덤수 생성
//	age = rand() %100 +1;
//	printf("%d\n", age);
//
//	while (1)
//	{
//		printf("나이를 입력하세요 : ");	//나이 입력받기
//		scanf("%d", &rev);
//
//		if (rev == age)
//		{
//			printf("정답입니다\n%d번 만에 맞추셨습니다", try);
//			break;
//		}
//		else if (rev > age)
//		{
//			printf("입력하신 값보다 작습니다\n");
//			printf("시도횟수 : %d\n", try);
//			try++;
//			continue;
//		}
//		else if (rev < age)
//		{
//			printf("입력하신 값보다 큼니다\n");
//			printf("시도횟수 : %d\n", try);
//			try++;
//			continue;
//		}
//	}
//}


//두번째 과제

#include <time.h>
#include <stdlib.h>

int main(void)
{
	int age, rev, last_rev;
	int try = 1;

	srand(time(NULL));										//1~100 사이의 랜덤수 생성
	age = rand() % 100 + 1;
	printf("%d\n", age);

	while (1)
	{
		printf("나이를 입력하세요 : ");						//나이 입력받기
		scanf("%d", &rev);

		if (rev == age)										//정답
		{
			printf("정답입니다\n%d번 만에 맞추셨습니다", try);
			break;
		}
		else if (rev > age)									//입력수가 랜덤수보다 클때
		{
			if (try == 1)
			{
				printf("입력하신 값보다 작습니다\n");		//첫번째 시도
				printf("시도횟수 : %d\n", try);
				last_rev = rev;
				try++;
				continue;
			}
			else
			{
				if ((last_rev > age) && (rev > last_rev))
				{
					puts("왜 큰값을 입력하셨습니까");
					printf("시도횟수 : %d\n", try);
					last_rev = rev;
					try++;
					continue;
				}
				else
				{
					printf("입력하신 값보다 작습니다\n");
					printf("시도횟수 : %d\n", try);
					last_rev = rev;
					try++;
					continue;
				}
			}
		}

		else if (rev < age)									//입력수가 랜덤수보다 작을때
		{
			if (try == 1)
			{
				printf("입력하신 값보다 큼니다\n");			//첫번째 시도
				printf("시도횟수 : %d\n", try);
				last_rev = rev;
				try++;
				continue;
			}
			else
			{
				if ((last_rev < age) && (rev < last_rev))
				{
					puts("왜 작은값을 입력하셨습니까");
					printf("시도횟수 : %d\n", try);
					try++;
					last_rev = rev;
					continue;
				}
				else
				{
					printf("입력하신 값보다 큼니다\n");
					printf("시도횟수 : %d\n", try);
					last_rev = rev;
					try++;
					continue;
				}
			}
		}
	}
}