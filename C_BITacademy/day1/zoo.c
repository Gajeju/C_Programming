#include <stdio.h>
#pragma warning(disable:4996)//예전 c문법을 사용가능
#pragma warning(disable:6031)

//int main(void)
//{ //프로그램의 시작을 알림
//	int a = 0x12345678; //변수 a에 16진수 0x12345678 을 대입
//
//	printf("%x \n", a);
//
//	printf("제주대학교 \n");
//
//	return 0;
//} //프로그램의 종료를 알림


//int main()			 //c 언어에서 반드시 한개만 필G나 함수
//{
//	printf("%d\n", 1);			//숫자1
//	printf("%c\n", '1');		//문자1
//	printf("%s\n", "1");		//문자열1
//	printf("1\n");				//문자열1
//
//	printf("%d + %d = %d\n", 3, 4, 3 + 4);
//	
//	printf("제주대학교\n");
//	printf("%s", "제주대학교");
//}


//int main()
//{
//	int a;				//양수음수를 사용 가능한 변수 a (메모리에 붙혀진 이름)
//	unsigned int b;		//양수만 사용 가능한 변수 b
//
//	a = 5;				//a에다가 5를 대입
//						// =  : 대입 연산자 우측 내용을 좌측에 대입
//						//00000000000000000000000000000101 (int형은 32비트)
//	printf("%d\n", a);
//	a = 70;
//	printf("%d\n", a);
//}


//두개의 변수 a와 b에 10과 20을 대입하고
//10+20=30 출력을 하는 프로그램 작성하기
//a는 10이고 b는 20이다
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d + %d = %d\n",a,b,a+b);
//	printf("a는 %d이고 b는 %d이다\n" ,a,b);
//
//}

//int main()
//{
//	enum rainbow {
//		Red, Orange, Yellow, Green, Blue = 6, Indigo, Violet
//	};
//	
//	printf("%d\n", Yellow);
//	printf("%d\n", Indigo);
//}


//int main()
//{
//	char ch1 = 'A'; //0100 0001
//	char ch2 = 65;
//
//	printf("%d %c\n", ch1, ch1);
//	printf("%d %c\n", ch2, ch2);
//}


//두 수 바꾸기
//int main() //버블정렬, 가나다라 정렬 등에 사용가능
//{
//	int a = 10, b = 5, tmp = 0;
//	printf("a = %d, b = %d\n", a, b);
//
//	tmp = a;	//swap
//	a = b;
//	b = tmp;
//	
//	printf("a = %d, b = %d\n", a, b);
//}


//데이터가 저장된 주소를 볼 수 있음 VM이기 때문에 위치는 계속 바뀔 수 있음
//주소를 확인해보면 값이 거꾸로 들어감 형이 확장되어도 하위 데이터가 유지되게 하기 위함(little endian)
//16진수 값으로 출력 해줌
//int main()
//{
//	int a = 0x12345678;
//	printf("%x\n", &a);
//	printf("%d\n", a);
//}


//xor을 3번 사용하여 두 수 swap
//int main()
//{
//	int a = 9, b = 5;
//	printf("a = %d, b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d, b = %d\n", a, b);
//}


//입력함수 scanf
//int main()
//{
//	int a = 10;		//선언하면서 대입 : 초기화
//	a = 20;			//대입
//	scanf("%d", &a);	//scanf함수로 십진수를 a의 번지에 넣겠다
//	printf("%d", a);
//}


//int main()
//{
//	int a, b;
//
//	printf("첫번째 수 :");
//	scanf("%d", &a);
//	printf("두번째 수 :");
//	scanf("%d", &b);
//
//	printf("%d\n", a + b);
//}


//a와 b를 입력받아서 작은수를 출력
//int main()
//{
//	int a, b, less;
//	printf("a를 입력하시오 : ");
//	scanf("%d", &a);
//	printf("b를 입력하시오 : ");
//	scanf("%d", &b);
//
//	less = (a > b) ? b : a;
//	printf("작은 수는 %d 입니다\n", less);
//
//	//printf("작은 수는 %d 입니다\n", (a>b) ? b : a);
//}


//입력된 수가 홀수 이면 홀수 짝수 이면 짝수
//int main()
//{
//	int a;
//	printf("숫자를 입력하시오 : ");
//	scanf("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("짝수를 입력하셨습니다");
//	}
//	else {
//		printf("홀수를 입력하셨습니다");
//	}
//}


int main()
{
	int a;
	printf("숫자를 입력하시오 : ");
	scanf("%d", &a);
	printf("%s를 입력하셨습니다", (a % 2) == 0 ? "짝수" : "홀수");
}