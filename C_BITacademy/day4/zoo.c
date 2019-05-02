#include<stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include<time.h>
#include<string.h>
#include<stdlib.h>

//프로그램을 짤 때 정말 많이 나오는 형식
//int main()
//{
//	int a = 10;
//	int *p, *k;
//	p = &a;
//	k = p;
//}


//포인터 사용
//void last(int *k)
//{
//	*k = 30;
//}
//
//void middle(int *p)
//{
//	*p = 20;
//	last(p);
//}
//
//int main()
//{
//	int a = 10;
//	middle(&a);
//	printf("%d\n", a);
//}


//포인터를 사용한 참조호출 (swap)
//void swap(int *a, int *b)
//{
//	int t;
//	t = *a;
//	*a = *b;
//	*b = t;
//}
//
//int main()
//{
//	int a = 10, b = 5;
//	swap(&a, &b);
//	printf("a = %d, b = %d", a, b);
//}


//문자열 포인터
//void put_s(char *p)
//{
//	int dx;
//	for (dx = 0; p[dx] != '\0'; dx++) //0~99
//	{
//		printf("%c", p[dx]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	char str[] = "abcdefghijklmn";
//	put_s(str);			//배열의이름 -> 주소
//	puts(str);			//결과 같음 -> 시스템에 같은 코드가 있을 것이라고 상상할 수 있다
//}


//배열의 주소와 포인터의 주소
//int main()
//{
//	char str[] = "ABCD";
//	char *p;
//	p = str;
//
//	puts(str);
//	puts(p);
//	printf("%x,%x,%x\n", str, p, &p);
//}


//문자열 변환
//int main(void)
//{
//	char a[] = "123";
//	int num;
//	char buf[10];
//
//	num = atoi(a);				//문자열을 숫자로
//	printf("%d\n", num);
//
//	strrev(a);
//	printf("%s\n",a);			//문자열 뒤집기
//
//	itoa(123, buf, 10);			//123정수를 buf라는 공간(배열)에 16진수형태의 문자로 저장
//	printf("%s\n", buf);
//
//}


//입력받은 숫자와 뒤집은 숫자를 더하는 계산을 입력받은 횟수만큼 반복
//int main()
//{
//	int input, rev_input, try;
//	char buf[10];
//
//	scanf("%d%d", &input, &try);
//
//	while (try > 0)
//	{
//		rev_input = atoi(strrev(itoa(input, buf, 10)));
//		printf("%10d\n+ %8d\n-------------\n%10d\n\b", input, rev_input, input + rev_input);
//		input = input + rev_input;
//		try--;
//	}
//}


//포인터 연산
//void put_s(char *p)
//{
//	int dx;
//	for (dx = 0; p[dx] != '\0'; dx++) //0~99
//	{
//		printf("%c", p[dx]);
//	}
//	printf("\n");
//}
//
//void put_s2(char *p)
//{
//	while (*p)
//		printf("%c", *p++);		//*p	p++  : 보여주고 그 다음에 주소를 증가시킨다
//	printf("\n");
//}
//
//int main()
//{
//	char str[] = "abcdefghijklmn";
//	put_s(str);			//배열의이름 -> 주소
//	puts(str);			//결과 같음 -> 시스템에 같은 코드가 있을 것이라고 상상할 수 있다
//	put_s2(str);
//}


//포인터를 활용 (다시 해봐야됨)
//void get_sub_name(char *s_n)
//{
//	printf("과목의 이름을입력하세요 : ");
//	scanf("%s", s_n);
//}
//
//int get_exm_cnt(void)
//{	
//	int try;
//	printf("시험 횟수를 입력하세요 : ");
//	scanf("%d", &try);
//	return try;
//}
//
//void get_exm_rlt(float *e_r, int cnt)
//{
//	for (int i = 0; i < cnt; i++)
//	{
//		printf("%d차 시험 점수는 : ", i + 1);
//		scanf("%f", &e_r[i]);
//	}
//}
//
//float get_total(float *e_r, int cnt)
//{
//	float sum = 0;
//	for (int i = 0; i < cnt; i++)
//	{
//		sum += e_r[i];
//	}
//}
//
//float get_average(float tot, int cnt)
//{
//	return tot / cnt;
//}
//
//char get_grade(float avg)
//{
//	return avg > 50 ? 'A' : 'F';
//}
//
//print_result(char *s_n, int cnt, float *e_r, float tot, float avg, char grd)
//{
//	puts(s_n);
//	float sum = 0;
//	for (int i = 0; i < cnt; i++)
//	{
//		printf("%d차 시험점수 %f\n", i + 1, e_r[i]);
//	}
//	printf("%f %f")
//}
//
//void main(void)
//{
//	char sub_name[15]; /* 과목 이름 */
//	float exm_rlt[10]; /* 시험 점수 */
//	int exm_cnt = 0; /* 시험 회수 */
//	float total; /* 총점 */
//	float average; /* 평균 */
//	char grade; /* 학점 */
//
//	get_sub_name(sub_name); /* 과목 이름 */
//
//	exm_cnt = get_exm_cnt(); /* 시험 회수 */
//
//	get_exm_rlt(exm_rlt, exm_cnt);/* 시험 점수*/
//
//	total = get_total(exm_rlt, exm_cnt); /* 총점 계산 */
//
//	average = get_average(total, exm_cnt); /* 평균 계산 */
//	grade = get_grade(average); /* 학점을 계산합니다. */
//	print_result(sub_name, exm_cnt, exm_rlt,
//		total, average, grade); /* 모든 결과 */
//}


//void connect(int *pa, int **ppa)
//{
//	*ppa = pa;
//}
//
//int main()
//{
//	int a = 7;
//	int *p;
//
//	connect(&a,&p);
//	
//	printf("%d\n", *p); //결과 7
//}


//void put_name(char **p)
//{
//	puts(p[0]);				//name 포인터 안에 있는 주소가 가지고있는 값
//	puts(p[2]);
//}
//
//int main()
//{
//	char *name[] = { "aaa", "CCCC","dd" };
//	put_name(name);
//}


//포인터 응용 2차원배열의 순서 바꾸기
//strcpy(dst, src); 사용 src의 내용을 dst 로 보낸다
//void func(char (*p)[10])
//{
//	char temp[10];
//	strcpy(temp, p[0]);
//	strcpy(p[0], p[1]);
//	strcpy(p[2], p[1]);
//	strcpy(p[1], temp);
//}
//
//int main()
//{
//	char a[3][10] = { "aaa","bbb","ccccc" };
//
//	func(a);
//	puts(a[0]);		//aaa		//cccc
//	puts(a[1]);		//bbb		//aaa
//	puts(a[2]);		//ccccc		//bbb
//}


//함수포인터
//int add(int a, int b) { return a+b; }		//모든 함수가 같은 리턴값고 같은 형의 매개변수를 갖는다
//int sub(int a, int b) { return a-b; }
//int mul(int a, int b) { return a*b; }
//int dvv(int a, int b) { return a/b; }

//int main()
//{
//	int(*p) (int, int);
//	p = add;
//	printf("%d\n", p(10, 5));
//	p = sub;
//	printf("%d\n", p(10, 5));
//	p = mul;
//	printf("%d\n", p(10, 5));
//	p = dvv;
//	printf("%d\n", p(10, 5));
//}

//함수 포인터 배열
//int main()
//{
//	int(*p[4])(int, int) = { add, sub, mul, dvv };
//	int dx;
//	for (dx = 0; dx < 4; dx++)
//		printf("%d\n", p[dx](10, 5));
//}

//함수의 주소를 매개변수로 사용 (좀 더 범용적인 함수 구현가능)
//int all(int a, int b, int(*p)(int, int))	 //sever code	(자기의 특성이 고정되어 있지 않음)
//{
//	int rlt = p(a, b);					//call back
//	return rlt;
//}

//int main()								//client code	(서버의 특성을 결정해 준다)
//{
//	int rlt;
//	rlt = all(10, 5, add);				//call
//	printf("%d\n", rlt);
//}


int main()
{
	void *p;		//모든 형태의 주소를 담을 수 있다
	int a = 7;
	p = &a;			//주소는 기억할 수 있으나, type은 기억할 수 없다
	printf("%d\n", *(int*)p);
	char ch = 'A';
	p = &ch;
	printf("%c\n", *(char*)p);
}