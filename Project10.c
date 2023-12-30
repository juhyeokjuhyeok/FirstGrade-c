//oj 10��

/*(AP2023) 10�� (1) �����͸� �̿��Ͽ� �Է� ������ ���� ���� �ο�

0~100 ������ ������ �о� ���� �� �Ʒ� �Լ��� �̿��Ͽ� ������ �ο��ϰ�
����ϴ� ���α׷��� �ۼ��Ѵ�. ������� main() �Լ����� �����Ѵ�.
������ ���� ������ ������ ���� �ο��Ѵ�.
90~100��: A, 80~89��: B, 70~79��: C, 60~69��: D, 59�� ����: F

char grade(int *score)

# �Է� ���� 1
100
# ��� ���� 1
A

# �Է� ���� 2
87
# ��� ���� 2
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

/*(AP2023) 10�� (2) �����͸� �̿��Ͽ� �迭 �����͸� ������������ ����

10���� ������ 1���� �迭�� �о� ���� �� �Ʒ� �Լ��� �̿��Ͽ� ������������
�����ϰ� ����ϴ� ���α׷��� �ۼ��Ѵ�. ������� main() �Լ����� �����ϰ�,
������ [���� 8-5]���� �н��� �������� �˰����� �����Ѵ�.
�Լ� sort() ������ �迭�� ������� �ʰ� �����Ϳ� ���� ������(*)�� ����Ѵ�.

void swap(int *px, int *py)	// ���� ����� ���� 
void sort(int* v, int n)

# �Է� ���� 1
8 9 5 3 4 7 6 2 5 1

# ��� ���� 1
9 8 7 6 5 5 4 3 2 1

# �Է� ���� 2
1 2 3 4 5 6 7 8 9 10

# ��� ���� 2
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

/*(AP2023) 10�� (3) �����͸� �̿��Ͽ� �迭�� Ư�� ���� ��ġ�� ���� ����

�迭 a�� �Ʒ��� ���� �ʱ�ȭ�Ǿ� �ִ�. �Ʒ� �Լ��� �̿��Ͽ� �迭�� n1��°
�����ͺ��� n2��° �����ͱ����� val ������ ������ �� �迭 ��ü�� ����ϴ�
���α׷��� �ۼ��Ѵ�. n1, n2, val ���� ������� �Է��Ѵ�.

int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};	// 10�� ������ �ʱ�ȭ 
void ary_set(int* v, int n1, int n2, int val)

# �Է� ���� 1
7 7 35

# ��� ���� 1
1 2 3 4 5 6 35 8 9 10

# �Է� ���� 2
2 5 88

# ��� ���� 2
1 88 88 88 88 6 7 8 9 10

# �Է� ���� 3
1 10 25

# ��� ���� 3
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
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };  	/* 10�� ������ �ʱ�ȭ */
	//puts("n1 n2 val ������ �Է��ϼ���.");
	scanf("%d %d %d", &n1, &n2, &val);
	ary_set(a, n1, n2, val);
	for (i = 0; i < NUM; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}