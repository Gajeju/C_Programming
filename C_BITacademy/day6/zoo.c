#include<stdio.h>
#include<time.h>
#include<string.h>

#pragma warning(disable:4996)


//스택
//#define STACK_SIZE 5
//
//int stack[STACK_SIZE];		//스택의 크기
//int top;					//스택의 위치 지시자 (배열의 인덱스)
//
////모든 자료구조는 초기화가 있어야 함
//void init_stack(void)
//{
//	top = -1;		//top=0; 으로 할수도 있음
//}
//
//void push(int data)
//{
//	if (top >= STACK_SIZE - 1)
//	{
//		puts("stack overflow");
//		return;
//	}
//		stack[++top] = data;	//stack[0] = 3; stack[1] = 4;
//}
//
//int pop(void)
//{
//	if (top < 0)			//더이상 뺄 수 없음
//	{
//		puts("stack empty");
//		return -1;
//	}
//	return stack[top--];
//}
//
//int main()
//{
//	init_stack();
//	push(3);
//	push(4);
//	printf("%d\n", pop());
//	printf("%d\n", pop());
//	printf("%d\n", pop());
//	push(3);
//	push(3);
//	push(3);
//	push(3);
//	push(3);
//	push(3);
//}


//bit 연산자

////bit check	 : if(  &  )
//if (a & 0x1 == 1)
//	puts("odd number");
//
////bit mask	 : =  &
//a = 0xd;	//1101 -> 1 10 1 가운데 10 비트를 뽑아내고 싶을때
//			//0110 -> 0 10 0
//a = a & 6;	//a = 4;
//
//
////bit set	 : =  | (inclusive or)
//a = 4;			//0100
//a = a | 0x9;	//1101	반드시 1로 만들고 싶은 부분과 합연산
//
//
////bit clear  : =  &~			(& + 보수연산자)
//a = 0xd;		//1101	반드시 0으로 만들고 싶은 부분은 &~ 연산

//int main()
//{
//	int a = 0xA5;			//10100101
//	
//	//6번 비트가 1이면 true 0이면 false
//	if ((a & 0x40) == 1)		
//		puts("true");
//	else
//		puts("false");
//
//	//3번 비트와 1번 비틀르 1로 set 하고 출력
//	a |= (1 << 3) + (1 << 1);		//a = a | 0xA;
//	printf("%x\n",a);
//	
//	//1번 비트와 2번 비트를 0으로 clear하고 출력
//	a &= ~((1 << 2) + (1 << 1));	//a = a & ~6;
//	printf("%x\n", a);
//
//	//5,6,7번 비트를 추출
//	a&= (1 << 7) + (1 << 6) + (1 << 5);	//a = a & 0xD0;
//	printf("%x\n", a);
//}


//Quueue
//#define Queue_Size 5
//int queue[Queue_Size];
//int front, rear;	//삭제, 삽입
//
//void init_quene(void) //초기화
//{
//	front = rear = 0;
//}
//
//void put(int data)	//rear 의 위치에 데이터 삽입 %연산을 사용하여 5를 0으로 만듬 (환영 quene)
//{
//	if (front == (rear + 1) % Queue_Size)
//	{
//		puts("queue overflow");
//	}
//	else
//	{
//		queue[rear++] = data;
//		rear = rear % Queue_Size;
//	}
//}
//
//int get(void)	//front 위치의 데이터를 출력
//{
//	int rv;			//front 의 실제 위치값이 들어감
//	if (front == rear)
//	{
//		puts("queue underflow");
//		return -1;
//	}
//	rv = queue[front];
//	front = ++front % Queue_Size;
//	return rv;
//}
//
//void print_Q(void)		//전체출력 함수
//{
//	int dx;
//	for (dx = front; dx != rear; dx = ++dx%Queue_Size)
//		printf("%d ", queue[dx]);
//}
//
//int main()
//{
//	init_quene();
//	put(3);
//	put(4);
//	put(1);
//
//	printf("%d\n", get());
//	printf("%d\n", get());
//	printf("%d\n", get());
//	
//	put(5);
//	put(2);
//	put(7);
//	print_Q();
//}




//tree		안됨
//typedef struct _tree Tree;
//struct _tree {
//	int key;
//	struct _tree *left;
//	struct _tree *right;
//};
//Tree *head, *tail;
//
//void init_tree(void)
//{
//	head = (Tree *)malloc(sizeof(Tree));
//	tail = (Tree *)malloc(sizeof(Tree));
//	head->left = tail;
//	head->right = tail;
//	tail->left = tail;
//	head->right = tail;
//}
//
//void preorder(Tree *p)
//{
//	if (p != NULL)
//	{
//		printf("%d ", p->key);
//		preorder(p->left);
//		preorder(p->left);
//	}
//}
//
//void inorder(Tree *p)
//{
//	if (p != NULL)
//	{
//		inorder(p->left);
//		printf("%d ", p->key);
//		inorder(p->left);
//	}
//}
//
//void postorder(Tree *p)
//{
//	if (p != NULL)
//	{
//		postorder(p->left);
//		postorder(p->left);
//		printf("%d ", p->key);
//	}
//}
//
////queue 를 이용한 층별순회
//#define Queue_Size 5
//Tree * queue[Queue_Size];		//int -> Tree
//int front, rear;	//삭제, 삽입
//
//void init_quene(void) //초기화
//{
//	front = rear = 0;
//}
//
//void put(Tree * data)	//int -> Tree
//{
//	if (front == (rear + 1) % Queue_Size)
//	{
//		puts("queue overflow");
//	}
//	else
//	{
//		queue[rear++] = data;
//		rear = rear % Queue_Size;
//	}
//}
//
//Tree * get(void)	//front 위치의 데이터를 출력
//{
//	Tree * rv;			//front 의 실제 위치값이 들어감
//	if (front == rear)
//	{
//		puts("queue underflow");
//		return -1;
//	}
//	rv = queue[front];
//	front = ++front % Queue_Size;
//	return rv;
//}
//
//void levelorder(Tree *p)
//{
//	Tree * rv;
//	put(p);	//터음 루트를 큐에 넣기
//	while (front != rear)	//큐가 비어있지 않다면
//	{
//		rv = get();	//가져온 녀석의 왼쪽 오른쪽 있으면 넣는다.
//		printf("%d ", rv->key);
//		if (rv->left != NULL)
//			put(rv->left);
//		if (rv->right != NULL)
//			put(rv->right);
//	}
//}
//
//int main(void)
//{
//	Tree a = { 1, NULL, NULL }, b = { 2, NULL, NULL };
//	Tree c = { 3, NULL, NULL }, d = { 4, NULL, NULL };
//	Tree e = { 5, NULL, NULL }, f = { 6, NULL, NULL };
//
//	c.left = &a;
//	a.right = &b;
//	c.right = &d;
//	d.right = &e;
//	e.right = &f;
//
//	preorder(&c);		//전위
//	puts("");
//	inorder(&c);		//중위
//	puts("");
//	postorder(&c);		//후위
//
//	init_quene();
//
//	levelorder(&c);
//}



//2진탐색
//이분검색을 사용하여 “Pablo” 을 찾는 프로그램을


char list[][10] = { "Alice", "Bill", "Carol", "David", "Elvis", "Fred",
				  "Gabriel", "Helen", "Isabel", "Jane", "Kuper", "Louic",
				  "Mathilda","Nadia", "Olive", "Pablo", "Queen", "Rambo",
				  "Scarlet", "Trisha", "Umberto", "Vincent", "Wily", "Xxx", "Yuki", "Zorro" };

int my_bsearch(char* sc)
{
	int mid, low, high;
	low = 0;
	high = sizeof(list) / sizeof(list[0]) - 1;

	while (1)
	{
		mid = (low + high) / 2;
		if (strcmp(list[mid], sc) == 0)
			return mid;
		else if (strcmp(list[mid], sc) < 0)
			low = mid + 1;
		else
			high = mid - 1;
	}
}


int main()
{
	printf("%d", my_bsearch("Pablo"));
}