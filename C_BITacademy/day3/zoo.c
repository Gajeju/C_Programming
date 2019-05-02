#include <stdio.h>
#pragma warning(disable:4996)

//char str[] = "abcdefghijklmn";
//이와 같은 배열안에서 'f'문자가 나오기 전까지 출력하시오
//결과 : abcdef

//int main()
//{
//   int dx;
//   char str[] = "abcdefghijklmn";
//   for (dx = 0; str[dx] != '\0'; dx++)
//   {
//         printf("%c", str[dx]);
//      }
//   puts("\n--------------------");
//   printf("%s", str);					//b부터 시작하기 위해서는 &str[1] or str + 1
//   }


//int main()
//{
//   int a[5] = { 3,4,1,5,2 };
//   int max;
//   int dx;
//   max = a[0]; // 무조건 첫번째는 가장큰 값
//   for (dx = 0; dx < 5; dx++)
//   {
//      if (max < a[dx])
//         max = a[dx];
//   }
//   printf("Max : %d\n", max);
//}


//1개의 for문(반복문)으로 입력된 단에 해당하는 구구단 출력
//실행 예)
//      단을 입력하시오 : 7
//      7 * 1 = 7
//int main()
//{
//   int dx;
//   int dan;
//   scanf("%d", &dan);
//   for(dx = 1; dx <10 ; dx++)
//      printf("%d * %d= %d\n", dan, dx, dan*dx);
//}


//중첩 반복문을 사용하여 다음을 출력하시오


////int a[100] 배열에 1~100까지에 해당하는 값을 넣고 출력하시오
//int main()
//{
//   int dx;
//   int a[100];
//      for (dx = 0; dx < 100; dx++) // 0~99
//         a[dx] = dx + 1;
//
//      for (dx = 0; dx < 100; dx++)
//         printf("%d", a[dx]);
//
//}


//int a[100] 배열에 0부터 시작하는 짝수만 넣고 출력하시오
//int main()
//{
//   int dx, even = 0;
//   int a[100];
//   for (dx = 0; dx < 100; dx++) // 0~99
//   {
//      a[dx] = even;
//      even += 2;
//
//   for (dx = 0; dx < 100; dx++)
//      printf("%d", a[dx]);
//
//}
//int a[100] 배열에 100~1까지 1씩 감소하는 수를 넣고 출력하시오
//int main()
//{
//   int dx;
//   int a[100];
//   for (dx = 99; dx >= 0; dx--) // 99~0
//   {
//      a[99 - dx] = dx + 1;
//
//      for (dx = 0; dx < 100; dx++)
//         printf("%d", a[dx]);
//
//   }
//}


////int a[100] 배열에 1부터 시작하는 홀수를 넣고 홀수 33이 나오기 전까지만 출력하시오
//int main()
//{
//   int dx, odd = 1;
//   int a[100];
//   for (dx = 0; dx <=100; dx++) // 
//   {
//      a[dx] = odd;
//      odd += 2;
//
//      for (dx = 0; dx < 100; dx++)
//      {
//         if (a[dx] == 33)
//            break;
//         printf("%d", a[dx]);
//      }
//   }
//
//}

////int a[100] 배열에 1부터 시작하는 홀수를 넣고 홀수 33이 나오기 전까지만 출력하시오 -1
//int main()
//{
//   int dx, odd = 1;
//   int a[100];
//   for (dx = 0; dx <=100; dx++) // 
//   {
//      a[dx] = odd;
//      odd += 2;
//
//      for (dx = 0; dx != 33; dx++) //33이되면 for루프를 벗어나버림
//      {
//         printf("%d", a[dx]);
//      }
//   }
//
//}


//2차원 배열
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int r = 0;
//	int a[2][3] = { 1,2,3,4,5,6 };		// 1 2 3			{{1,2,3}, {4,5,6}}
//										 4 5 6
//	int max = a[0][0];
//
//	puts("2차원 배열출력");
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		puts("");
//	}
//
//	 모든 요소의 합 1+2+3+4+5+6 값 출력
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			sum += a[i][j];
//		}
//	}
//	puts("2차원 배열의 합");
//	printf("%d\n", sum);
//
//	 이 중 가장 큰 값 max 출력
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (a[i][j] > max)
//				max = a[i][j];
//		}
//	}
//	puts("최대값");
//	printf("%d\n", max);
//
//	 1 2 3
//	 4 5 6 각 열의 합 출력
//	puts("열의 합");
//	for (j = 0; j < 3; j++)
//	{
//		for (i = 0; i < 2; i++)
//		{
//			r += a[i][j];
//		}
//		printf("%d", r);
//		r = 0;
//	}
//	puts("");
//	행과열의 합 (배열 사용)
//	
//	int row_sum[2] = { 0 }, column_sum[3] = { 0 }; //배열의 값으로 모두 0으로 초기화
//	
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			row_sum[i] += a[i][j];
//			column_sum[j] += a[i][j];
//		}
//	}
//
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("| %d \n", row_sum[i]);
//	}
//	for (j =0; j <3; j++)
//		printf("%d ", column_sum[j]);
//}


//주소표현 사용법
//int main(void)
//{
//	char a[] = "abc";
//	puts(a);
//	char b[10][20] = {"aaa", "bbb", "ccc", "dddddd"};
//	puts(b + 1);
//}


//strcpy 를 이용하여 배열에 문자열 입력 및 출력
//#include<string.h>
//
//int main()
//{
//	char a[5][10]; //10개짜리 1차원배열 5개가 있다
//	strcpy(a[0], "Alice");
//	strcpy(a[1], "Bill");
//	strcpy(a[2], "zzzzzzzz");
//	strcpy(a[3], "zorro");
//	strcpy(a[4], "Honggildon");
//
//	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
//	{
//		printf("%s\n", &a[0] + i);				//puts(a[i]);
//	}
//}


//간접연산자 (*)
//int main()
//{
//	int a;
//	a = 10;
//	printf("%d\n", a);	//direct access
//	
//	*&a = 70;			//indirect operator
//
//	printf("%d\n", *&a);	//주소를 이용하여 그 안의 값을 간접적으로 확인
//}


//포인터
//int main(void)
//{
//	int a = 10;	//int형 데이터를 담는 메모리
//	int *p;		//int형 주소를 담는 메모리
//	p = &a;		//int형태의 메모리의 주소를 저장
//
//	scanf("%d", &a);
//	printf("%d\n", a);
//	
//	scanf("%d", p);
//	printf("%d\n", *p);
//	printf("%d\n", p);
//}


//포인터의 사용 (참조호출)
void func(int* a)
{
	*a = 20;
}

int main(void)
{
	int a = 10;
	func(&a);		//func(a);

	printf("%d\n", a);
}