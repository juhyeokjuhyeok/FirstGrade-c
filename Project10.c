//oj 10장

/*(AP2023) 10장 (1) 포인터를 이용하여 입력 성적에 따른 학점 부여

0~100 범위의 성적을 읽어 들인 후 아래 함수를 이용하여 학점을 부여하고
출력하는 프로그램을 작성한다. 입출력은 main() 함수에서 실행한다.
성적에 따른 학점은 다음과 같이 부여한다.
90~100점: A, 80~89점: B, 70~79점: C, 60~69점: D, 59점 이하: F

char grade(int *score)

# 입력 예시 1
100
# 출력 예시 1
A

# 입력 예시 2
87
# 출력 예시 2
B
*/

/*
#include <stdio.h>

char grade(int* score) {
	if (*score >= 90) {
		printf("A");
	}
	else if (*score >= 80 && *score <= 89) {
		printf("B");
	}
	else if (*score >= 70 && *score <= 79) {
		printf("C");
	}
	else if (*score >= 60 && *score <= 69) {
		printf("D");
	}
	else {
		printf("F");
	}
}

int main() {
	int a;
	scanf("%d", &a);

	grade(&a);

	return 0;
}*/

/*(AP2023) 10장 (2) 포인터를 이용하여 배열 데이터를 내림차순으로 정렬

10개의 정수를 1차원 배열에 읽어 들인 후 아래 함수를 이용하여 내림차순으로
정렬하고 출력하는 프로그램을 작성한다. 입출력은 main() 함수에서 실행하고,
정렬은 [문제 8-5]에서 학습한 버블정렬 알고리즘을 응용한다.
함수 sort() 내에서 배열을 사용하지 않고 포인터와 간접 연산자(*)를 사용한다.

void swap(int *px, int *py)	// 교재 내용과 동일 
void sort(int* v, int n)

# 입력 예시 1
8 9 5 3 4 7 6 2 5 1

# 출력 예시 1
9 8 7 6 5 5 4 3 2 1

# 입력 예시 2
1 2 3 4 5 6 7 8 9 10

# 출력 예시 2
10 9 8 7 6 5 4 3 2 1
*/

/*
#include <stdio.h>
#define NUM 10
void swap(int* px, int* py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}void sort(int* v, int n)
{
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (*(v + j) < *(v + j + 1))
				swap(v + j, v + j + 1);
		}
	}
}int main(void)
{
	int i, v[NUM];
	for (i = 0; i < NUM; i++) {
		scanf("%d", &v[i]);
	}
	sort(v, NUM);
	for (i = 0; i < NUM; i++) {
		printf("%d ", v[i]);
	}
	printf("\n");
	return 0;
}*/

/*(AP2023) 10장 (3) 포인터를 이용하여 배열의 특정 범위 위치의 값을 변경

배열 a가 아래와 같이 초기화되어 있다. 아래 함수를 이용하여 배열의 n1번째
데이터부터 n2번째 데이터까지를 val 값으로 변경한 후 배열 전체를 출력하는
프로그램을 작성한다. n1, n2, val 값을 순서대로 입력한다.

int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};	// 10개 데이터 초기화 
void ary_set(int* v, int n1, int n2, int val)

# 입력 예시 1
7 7 35

# 출력 예시 1
1 2 3 4 5 6 35 8 9 10

# 입력 예시 2
2 5 88

# 출력 예시 2
1 88 88 88 88 6 7 8 9 10

# 입력 예시 3
1 10 25

# 출력 예시 3
25 25 25 25 25 25 25 25 25 25
*/

#include <stdio.h>
#define NUM 10
void ary_set(int* v, int n1, int n2, int val)
{
	int i;
	for (i = n1 - 1; i <= n2 - 1; i++)
		v[i] = val;
}int main(void)
{
	int i, n1, n2, val;
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };  	/* 10개 데이터 초기화 */
	//puts("n1 n2 val 순으로 입력하세요.");
	scanf("%d %d %d", &n1, &n2, &val);
	ary_set(a, n1, n2, val);
	for (i = 0; i < NUM; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}