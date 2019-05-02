#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)

//printf 함수의 반환

//int main(void)
//{
//	int num1, num2;
//	num1 = printf("12345\n");
//	num2 = printf("I love my home \n");
//	printf("%d %d \n", num1, num2);
//
//	return 0;
//}


//함수

//int Add(int num1, int num2)
//{
//	return num1 + num2;
//}
//
//void ShowAddResult(int num)
//{
//	printf("덧셈결과 출력 : %d \n", num);
//}
//
//int ReadNum(void)
//{
//	int num;
//	scanf("%d", &num);
//	return num;
//}
//
//void HowToUseThisProg(void)
//{
//	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
//	printf("두 개의 정수를 입력하세요 : ");
//}
//
//int main(void)
//{
//	int result, num1, num2;
//	HowToUseThisProg();
//	num1 = ReadNum();
//	num2 = ReadNum();
//	result = Add(num1, num2);
//	ShowAddResult(result);
//
//	return 0;
//}


//두 개의 return문

//int NumberCompare(int num1, int num2);
//
//int main(void)
//{
//	printf("3과 4중에서 큰 수는 %d 이다. \n", NumberCompare(3, 4));
//	printf("7과 2중에서 큰 수는 %d 이다. \n", NumberCompare(7, 2));
//	return 0;
//}
//
//int NumberCompare(int num1, int num2)
//{
//	if (num1 > num2)
//		return num1;
//	else
//		return num2;
//}


//함수 연습

//int AbsoCompare(int num1, int num2);
//int GetAbsoValue(int num);
//
//int main(void)
//{
//	int num1, num2;
//	printf("두 개의 정수 입력 : ");
//	scanf("%d %d", &num1, &num2);
//	printf("%d와 %d중 절대값이 큰 정수 : %d \n", num1, num2, AbsoCompare(num1, num2));
//
//	return 0;
//}
//
//int AsoCompare(int num1, int num2)
//{
//	if (GetAbsoValue(num1) > GetAbsoValue(num2))
//		return num1;
//	else
//		return num2;
//}
//
//int GetAbsoValue(int num)
//{
//	if (num < 0)
//		return num * (-1);
//	else
//		return num;
//}


//Practice 1

//int big(int num1, int num2, int num3);
//int small(int num1, int num2, int num3);
//
//int main(void)
//{
//	int num1, num2, num3;
//
//	printf("세 정수를 입력하세요 : ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//	printf("가장 큰  수 : %d \n", big(num1, num2, num3));
//	printf("가장 작은 수 : %d \n", small(num1, num2, num3));
//
//	return 0;
//}
//
//int big(int num1,int num2,int num3)
//{
//	if (num1 > num2)
//	{
//		if (num1 > num3)
//			return num1;
//		else
//			return num3;
//	}
//	else
//	{
//		if (num2 > num3)
//			return num2;
//		else
//			return num3;
//	}
//}
//
//int small(int num1, int num2, int num3)
//{
//	if (num1 < num2)
//		return (num1 < num3) ? num1 : num3;
//	else
//		return (num2 < num3) ? num2 : num3;
//}


//Practice 2

//double CelToFah(double cel);
//double FahToCel(double Fah);
//
//int main(void)
//{
//	int ch;
//	double tem;
//
//	printf("1.섭시 2.화씨 : ");
//	scanf("%d", &ch);
//	printf("온도를 입력하세요 : ");
//	scanf("%lf", &tem);
//
//	if (ch == 1)
//		printf("화씨온도로 변환 결과 : %f", CelToFah(tem));
//	else
//		printf("섭씨온도로 변환 결과 : %f", FahToCel(tem));
//
//	return 0;
//}
//
//double CelToFah(double cel)
//{
//	return (cel * 1.8) + 32;
//}
//
//double FahToCel(double Fah)
//{
//	return (Fah - 32) / 1.8;
//}


//Practice 3

//void Fivo(int num)
//{
//	int fir = 0;
//	int sec = 1;;
//	int out;
//	
//	if (num == 1)
//		printf("fir");
//	else
//		printf("%d, %d", fir, sec);
//
//	for (int i = 0; i < num-2; i++)
//	{
//		printf(", ");
//		out = fir + sec;
//		printf("%d", out);
//		
//		fir = sec;
//		sec = out;
//	}
//}
//
//int main(void)
//{
//	int num;
//	printf("몇 개를 출력하시겠습니까 : ");
//	scanf("%d", &num);
//
//	Fivo(num);
//
//	return 0;
//}


//지역변수

//int SimpleFuncOne(void)
//{
//	int num = 10;
//	num++;
//	printf("SimpleFuncOne num: %d \n", num);
//	return 0;
//}
//
//int SimpleFuncTwo(void)
//{
//	int num1 = 20;
//	int num2 = 30;
//	num1++, num2--;
//	printf("num1 & num2 : %d %d \n", num1, num2);
//	return 0;
//}
//
//int main(void)
//{
//	int num = 17;
//	SimpleFuncOne();
//	SimpleFuncTwo();
//	printf("main num : %d \n", num);
//	return 0;
//}


//반복문과 조건문 내의 지역변수

//int main(void)
//{
//	int cnt;
//
//	for (cnt = 0; cnt < 3; cnt++)
//	{
//		int num = 0;
//		num++;
//		printf("%d번째 반복, 지역변수 num은 %d. \n", cnt + 1, num);
//	}
//	
//	if (cnt == 3)
//	{
//		int num = 7;
//		num++;
//		printf("if문 내에 존재하는 지역변수 num은 %d. \n", num);
//	}
//
//	return 0;
//}


//변수 가리기

//int main(void)
//{
//	int num = 1;
//
//	if (num == 1)
//	{
//		int num = 7;
//		num += 10;
//		printf("if문 내 지역변수 num : %d \n", num);
//	}
//	printf("main 함수 내 지역변수 num : %d \n", num);
//	return 0;
//}


//전역변수

//void Add(int val);
//int num;
//
//int main(void)
//{
//	printf("num : %d \n", num);
//	Add(3);
//	printf("num : %d \n", num);
//	num++;
//	printf("num : %d \n", num);
//
//	return 0;
//}
//
//void Add(int val)
//{
//	num += val;
//}


//전역변수와 이름이 같은 지역변수

//int Add(int val);
//int num = 1;
//
//int main(void)
//{
//	int num = 5;
//	printf("num : %d \n", Add(3));
//	printf("num : %d \n", num + 9);
//	return 0;
//}
//
//int Add(int val)
//{
//	int num = 9;
//	num += val;
//	return num;
//}


//static 지역변수

//void SimpleFunc(void)
//{
//	static int num1 = 0;
//	int num2 = 0;
//
//	num1++, num2++;
//	printf("static : %d, local : %d \n", num1, num2);
//}
//
//int main(void)
//{
//	int i;
//	for (i = 0; i < 3; i++)
//		SimpleFunc();
//	return 0;
//}


//practice 1

//int AddToTotal(int num)
//{
//	static int total;
//	total += num;
//	return total;
//}
//
//int main(void)
//{
//	int num, i;
//	for (i = 0; i < 3; i++)
//	{
//		printf("입력%d : ", i + 1);
//		scanf("%d", &num);
//		printf("누적 : %d \n", AddToTotal(num));
//	}
//	return 0;
//}


//재귀 함수

//void Recursive(int num)
//{
//	if (num <= 0)
//		return;
//	printf("Recursive call! %d \n", num);
//	Recursive(num - 1);
//}
//
//int main(void)
//{
//	Recursive(3);
//	return(0);
//}


//재귀함수를 이용한 팩토리얼

int Factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * Factorial(n - 1);
}

int main(void)
{
	printf("1! = %d \n", Factorial(1));
	printf("2! = %d \n", Factorial(2));
	printf("3! = %d \n", Factorial(3));
	printf("4! = %d \n", Factorial(4));
	printf("9! = %d \n", Factorial(9));

	return 0;
}