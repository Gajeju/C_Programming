#include <stdio.h>
#pragma warning(disable:4996)

//char str[] = "abcdefghijklmn";
//�̿� ���� �迭�ȿ��� 'f'���ڰ� ������ ������ ����Ͻÿ�
//��� : abcdef

//int main()
//{
//   int dx;
//   char str[] = "abcdefghijklmn";
//   for (dx = 0; str[dx] != '\0'; dx++)
//   {
//         printf("%c", str[dx]);
//      }
//   puts("\n--------------------");
//   printf("%s", str);					//b���� �����ϱ� ���ؼ��� &str[1] or str + 1
//   }


//int main()
//{
//   int a[5] = { 3,4,1,5,2 };
//   int max;
//   int dx;
//   max = a[0]; // ������ ù��°�� ����ū ��
//   for (dx = 0; dx < 5; dx++)
//   {
//      if (max < a[dx])
//         max = a[dx];
//   }
//   printf("Max : %d\n", max);
//}


//1���� for��(�ݺ���)���� �Էµ� �ܿ� �ش��ϴ� ������ ���
//���� ��)
//      ���� �Է��Ͻÿ� : 7
//      7 * 1 = 7
//int main()
//{
//   int dx;
//   int dan;
//   scanf("%d", &dan);
//   for(dx = 1; dx <10 ; dx++)
//      printf("%d * %d= %d\n", dan, dx, dan*dx);
//}


//��ø �ݺ����� ����Ͽ� ������ ����Ͻÿ�


////int a[100] �迭�� 1~100������ �ش��ϴ� ���� �ְ� ����Ͻÿ�
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


//int a[100] �迭�� 0���� �����ϴ� ¦���� �ְ� ����Ͻÿ�
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
//int a[100] �迭�� 100~1���� 1�� �����ϴ� ���� �ְ� ����Ͻÿ�
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


////int a[100] �迭�� 1���� �����ϴ� Ȧ���� �ְ� Ȧ�� 33�� ������ �������� ����Ͻÿ�
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

////int a[100] �迭�� 1���� �����ϴ� Ȧ���� �ְ� Ȧ�� 33�� ������ �������� ����Ͻÿ� -1
//int main()
//{
//   int dx, odd = 1;
//   int a[100];
//   for (dx = 0; dx <=100; dx++) // 
//   {
//      a[dx] = odd;
//      odd += 2;
//
//      for (dx = 0; dx != 33; dx++) //33�̵Ǹ� for������ �������
//      {
//         printf("%d", a[dx]);
//      }
//   }
//
//}


//2���� �迭
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
//	puts("2���� �迭���");
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		puts("");
//	}
//
//	 ��� ����� �� 1+2+3+4+5+6 �� ���
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			sum += a[i][j];
//		}
//	}
//	puts("2���� �迭�� ��");
//	printf("%d\n", sum);
//
//	 �� �� ���� ū �� max ���
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (a[i][j] > max)
//				max = a[i][j];
//		}
//	}
//	puts("�ִ밪");
//	printf("%d\n", max);
//
//	 1 2 3
//	 4 5 6 �� ���� �� ���
//	puts("���� ��");
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
//	������� �� (�迭 ���)
//	
//	int row_sum[2] = { 0 }, column_sum[3] = { 0 }; //�迭�� ������ ��� 0���� �ʱ�ȭ
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


//�ּ�ǥ�� ����
//int main(void)
//{
//	char a[] = "abc";
//	puts(a);
//	char b[10][20] = {"aaa", "bbb", "ccc", "dddddd"};
//	puts(b + 1);
//}


//strcpy �� �̿��Ͽ� �迭�� ���ڿ� �Է� �� ���
//#include<string.h>
//
//int main()
//{
//	char a[5][10]; //10��¥�� 1�����迭 5���� �ִ�
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


//���������� (*)
//int main()
//{
//	int a;
//	a = 10;
//	printf("%d\n", a);	//direct access
//	
//	*&a = 70;			//indirect operator
//
//	printf("%d\n", *&a);	//�ּҸ� �̿��Ͽ� �� ���� ���� ���������� Ȯ��
//}


//������
//int main(void)
//{
//	int a = 10;	//int�� �����͸� ��� �޸�
//	int *p;		//int�� �ּҸ� ��� �޸�
//	p = &a;		//int������ �޸��� �ּҸ� ����
//
//	scanf("%d", &a);
//	printf("%d\n", a);
//	
//	scanf("%d", p);
//	printf("%d\n", *p);
//	printf("%d\n", p);
//}


//�������� ��� (����ȣ��)
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