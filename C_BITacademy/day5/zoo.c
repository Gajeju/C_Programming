//자신의 주소를 입력받아 자신의 주소 길이만큼 heap에 할당받아 넣고
//출력해주는 프로그램 만들기

#include<stdio.h>
#pragma warning(disable:4996)
#include<time.h>
#include<string.h>
#include<stdlib.h>

//int main()
//{
//   char *p;
//   char addr[100];
//   int len;
//   gets(addr);//scanf("%s", addr);
//   len = strlen(addr);//길이 리턴 -- 입력값이 abc일때 3바이트만큼만 저장함
//   p = (char *)malloc(sizeof(char) * len + 1); // (len + 1)의 길이 만큼 힙에 갖다주고 p를 리턴
//   strcpy(p, addr);// p의 위치를 가르킴
//   puts(p);
//   free(p);
//}

//#include<stdlib.h> //malloc
//
//int main()
//{
//   char *p;
//   char addr[100];
//   int len;
//   gets(addr);//scanf("%s", addr);
//   len = strlen(addr);//길이 리턴 
//   p = malloc(len); // len의 길이 만큼 p를 리턴
//   strcpy(p, addr);// p의 위치를 가르킴
//   puts(p);
//}


//int main()
//{
//   char name[4] = "HYS";
//   char *p = name;
//   printf("%s", p);
//}


////day_5
//#include "My.h"
//
//int main()
//{
//   printf("%d\n", ADD(10, 5));//매크로 --> 속도가 빠름
//   printf("%d\n", add(10, 5));//속도가 느림
//}


//int main()
//{
//	char **p;
//	int num,dx;
//	char buff[100];
//
//	printf("몇개의 문장을 입력 : ");
//	scanf("%d", &num);
//	getchar(); //3숫자 뒤의 엔턱밧을 무효처리하겠다.
//
//	p = (char **)malloc(sizeof(char *) *num);			//다시 공부가 필요한 부분
//
//	for (dx = 0; dx < num; dx++)
//	{
//		printf("%d번째 문장은 : ", dx + 1);
//		gets(buff);
//		p[dx] = (char *)malloc(sizeof(char) * strlen(buff) + 1);
//		strcpy(p[dx], buff);
//	}
//
//	for (dx = 0; dx < num; dx++)
//		puts("p[dx]");
//
//	for (dx = 0; dx < num; dx++)
//		free("p[dx]");
//
//	free(p);
//
//}


//구조체
//p1 구조체에 이름, 전번, 나이를 입력후 출력해보기
//struct person
//{
//	char name[20];
//	char address[20];
//	int my_age;
//};
//
//int main()
//{
//	struct person p1;					//구조체 변수
//	strcpy(p1.name, "김동현");
//	strcpy(p1.address, "Jeju Island");
//	p1.my_age = 23;
//
//	printf("이름 : %s\n주소 : %s\n나이 : %d\n", p1.name, p1.address, p1.my_age);
//
//	gets(p1.name);
//	gets(p1.address);
//	scanf("%d", &p1.my_age);
//	printf("이름 : %s\n주소 : %s\n나이 : %d\n", p1.name, p1.address, p1.my_age);
//}


//함수 3개를 구현하시오
//struct num
//{
//	int fir;
//	int sec;
//};
//
//int func1(int x, int y)		{return x + y;}
//
//int func2(struct num *p)	{return (p->fir)*(p->sec);}
//
//int func3(struct num *p)	{return p->fir + p->sec + (p + 1)->fir + (p + 1)->sec;}
//
//main()
//{
//	struct num a = { 1,2 }, b = { 3,4 }, c[2] = { 5,6,7,8 };
//
//	func1(a.fir, a.sec);		//구조체맴버 각각 던져서 합
//	func2(&b);					//구조체 변수주소 던져서 곱
//	func3(c);					//구조체 배열주소 던져서 합
//}


//중첩구조체
//구조체 내의 맴버를 다른 구조체를 사용하여 세분화 가능
//struct engin {
//	int piston;
//	char pipe;
//	float power;
//};
//
//struct Car {
//	struct engin eg;
//	char handle;
//	float wheel;
//};
//
//int main()
//{
//	struct Car bmw = { 100,'a',200, 90,22 };
//	printf("%f", bmw.eg.power);					//에로우 연산자는 항상 포인터, . 과 -> 를 섞어서 쓰면 햇갈림
//}


//공동체
//union share {
//	int a;
//	char b[4];
//};
//
//int main() {
//	union share ss; 
//	ss.a = 0x12345678;				//a 메모리에 78 56 34 12 로 저장
//	printf("%x\n", ss.b[0]);
//	ss.b[0] = 0xaf;
//	printf("%x\n", ss.a);
//}


//입출력
//int main()
//{	
//	FILE *fp;
//	fp = fopen("a.txt", "w");			//a.txt 파일에 쓰려면 fp를 거쳐가라
//										//w은 출력스트림을 만들겠다.
//	fprintf(fp, "%d %s\n", 10, "hong");
//	fclose(fp);
//
//	int num;
//	char name[100];
//	fp = fopen("a.txt", "r");
//	fscanf(fp, "%d %s", &num, name);
//	fclose(fp);
//	
//	fprintf(stdout, "%d %s\n", num, name);
/*printf("%d %s\n", 10, "hong");
fprintf(stdout, "%d %s\n", 10, "hong");*/
//}


//1. 자신의 이름을 키보드로 입력
//2. 입력된 이름을 name.txt에 출력
//3. name.txt 파일에 있는 자신이의 이름을 콘솔에 출력
//int main()
//{
//	char name[10];
//	gets(name);
//	
//	FILE *fp;
//	fp = fopen("name.txt", "w");
//	fprintf(fp, "%s", name);
//	fclose(fp);
//	
//	
//
//	fp = fopen("name.txt", "r");
//	fscanf(fp,"%s", name);
//	printf("%s", name);
//}


//파일 복사
//한글자씩 복사
//int main()
//{
//	FILE *fr, *fw;
//	int ch;
//
//	fr = fopen("name.txt", "r");
//	fw = fopen("backup.txt", "w");
//
//	while ((ch = fgetc(fr)) != -1)		//fgetc 는 int형을 리턴함
//		fputc(ch, fw);
//	
//	fclose(fr);
//	fclose(fw);
//}

//한 줄씩 복사
//int main()
//{
//	FILE *fr, *fw;
//	int ch;
//	char buff[1024];
//
//	fr = fopen("name.txt", "r");
//	fw = fopen("backup.txt", "w");
//
//	while (fgets(buff, 1024, fr) != NULL)
//		fputs(buff, fw);
//
//	fclose(fr);
//	fclose(fw);
//}

//임의의값 만큼 복사
int main()
{
	FILE *fr, *fw;
	int ch;
	char buff[1000];
	int cnt;
	int byte = 0;				//복사확인

	fr = fopen("1.jpg", "rb");
	fw = fopen("2.jpg", "wb");

	while (1)
	{
		cnt = fread(buff, 1, 1000, fr);		//1byte짜리 100개를 fr부터 읽어 buff에 넣겠다
		if (cnt != 1000)					//파일의 끝 or 중간에 파일이 깨진경우
		{
			if (feof(fr))					//파일의 끝이면 0이 아닌값
			{
				fwrite(buff, 1, cnt, fw);
				puts("복사성공");
				byte += cnt;
			}
			else
				puts("복사실패");
			break;
		}
		fwrite(buff, 1, 1000, fw);
		byte += 1000;
	}
	fclose(fr);
	fclose(fw);
	printf("%d 바이트 복사함", byte);
}