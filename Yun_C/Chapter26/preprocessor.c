#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable : 4996)
#pragma warning (disable : 6001)
#pragma warning (disable : 6031)


//매크로 상수

//#define NAME "홍길동"
//#define AGE 24
//#define PRINT_ADDR puts("주소 : 경기도 용인시 \n");
//
//int main(void)
//{
//	printf("이름 : %s \n", NAME);
//	printf("나이 : %d", AGE);
//	PRINT_ADDR;
//	
//	return 0;
//}


//매크로 함수

//#define SQUARE(X) X*X
//
//int main(void)
//{
//	int num = 20;
//
//	//정상적인 출력
//	printf("Square of num : %d \n", SQUARE(num));
//	printf("Square of -5 : %d \n", SQUARE(-5));
//	printf("Square of 2.5 : %f \n", SQUARE(2.5));
//
//	//비정상적인 출력
//	printf("Square of 3+2 : %d \n", SQUARE(3+2));
//
//	return 0;
//}


//먼저 정의된 매크로 사용

//#define PI 3.14
//#define PRODUCT(X, Y) ((X)*(Y))
//#define CIRCLE_AREA(R) (PRODUCT((R), (R)*PI)
//
//int main(void)
//{
//	double rad = 2.1;
//	printf("반지름 %f인 원의 넒이 : %f \n", rad, CIRCLE_AREA(rad)));
//
//	return 0;
//}


//매크로 함수의 단점

//#define DIFF_ABS(X, Y) ((X)>(Y) ? (X)-(Y) : (Y)-(X))
//
//int main(void)
//{
//	printf("두 값의 차 : %d \n", DIFF_ABS(8, 7));
//	printf("두 값의 차 : %g \n", DIFF_ABS(1.8, -1.4));
//
//	return 0;
//}


//조건부 실행

//#define ADD 1
//#define MIN 0
//
//int main(void)
//{
//	int num1, num2;
//	printf("두 개의 정수 입력 : ");
//	scanf("%d %d \n", &num1, &num2);
//
//#if ADD
//	printf("%d + %d = %d \n", num1, num2, num1 + num2);
//#endif
//
//#if MIN
//	printf("%d - %d = %d \n", num1, num2, num1 - num2);
//#endif
//
//	return 0;
//}


//ifdef

////#define ADD 1
//#define MIN 0
//
//int main(void)
//{
//	int num1, num2;
//	printf("두 개의 정수 입력 : ");
//	scanf("%d %d \n", &num1, &num2);
//
//#ifdef ADD
//	printf("%d + %d = %d \n", num1, num2, num1 + num2);
//#endif
//
//#ifdef MIN
//	printf("%d - %d = %d \n", num1, num2, num1 - num2);
//#endif
//
//	return 0;
//}


//#else

//#define	HIT_NUM 5
//
//int main(void)
//{
//#if HIT_NUM == 5
//	puts("매크로 상수 HIT_NUM은 현재 5입니다");.
//#else
//	puts("매크로 상수 HIT_NUM은 현재 5가 아닙니다");
//#endif
//
//	return 0;
//}


//#elif

//#define HIT_NUM 7
//
//int main(void)
//{
//#if HIT_NUM == 5
//	puts("매크로 상수 HIT_NUM은 현재 5입니다");
//#elif HIT_NUM == 6
//	puts("매크로 상수 HIT_NUM은 현재 6입니다");
//#elif HIT_NUM == 7
//	puts("매크로 상수 HIT_NUM은 현재 7입니다");
//#else
//	puts("매크로 상수 HIT_NUM은 현재 5, 6, 7은 확실히 아닙니다");
//#endif
//
//	return 0;
//}


// 문자열 치환

//#define STRING_JOB(A, B) #A "의 직업은 " #B "입니다."
//
//int main(void)
//{
//	printf("%s \n", STRING_JOB(이동춘, 나무꾼));
//	printf("%s \n", STRING_JOB(한상순, 사냥꾼));
//
//	return 0;
//}


//매크로 붙이기

////#define STNUM(Y, S, P) YSP
////#define STNUM(Y, S, P) Y S P
////#define STNUM(Y, S, P) ((Y)*100000 + (S)*1000 + (P))
//#define STNUM(Y, S, P) Y ## S # P
//
//int main(void)
//{
//	printf("학번 : %d \n", STNUM(10, 65, 175));
//	printf("학번 : %d \n", STNUM(15, 10, 223));
//
//	return 0;
//}


//practice 1

//#define ADD(A, B, C) A + B + C
//#define MULTI(A, B, C) A * B * C
//
//int main(void)
//{
//	printf("%d \n", ADD(2, 3, 4));
//	printf("%d \n", MULTI(2, 3, 4));
//
//	return 0;
//}


//practice 2

//#define PI 3.14
//#define AREA(R) ((R) * (R) * (PI))
//
//int main(void)
//{
//	double rad;
//
//	printf("반지름 : ");
//	scanf("%lf", &rad);
//	
//	printf("원의 넓이 : %f \n",AREA(rad));
//
//	return 0;
//}


//practice 3

#define MAX(A, B) ( (A) > (B) ? (A) : (B) )

int main(void)
{
	int a, b;
	printf("두 수 입력 : ");
	scanf("%d %d", &a, &b);

	printf("큰 수는 : %d \n", MAX(a, b));

	return 0;
}