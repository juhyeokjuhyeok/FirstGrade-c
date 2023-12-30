//중간고사

//문제1
/*
#include <stdio.h>

int main() {
	int a, a1, a2, a3;
	scanf("%d", &a);
	a1 = a / 100;
	a2 = (a % 100) / 10;
	a3 = a % 10;

	printf("%d, %d, %d\n", a1, a2, a3);
	float sum = 0;
	sum = (a1 + a2 + a3);
	printf("%.2f", sum / 3);
}
*/

//문제2
/*
#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);

	if (a == 1) {
		printf("31 ");
	}
	else if (a == 2) {
		printf("28 ");
	}
	else if (a == 3) {
		printf("31 ");
	}
	else if (a == 4) {
		printf("30 ");
	}
	else if (a == 5) {
		printf("31 ");
	}
	else if (a == 6) {
		printf("30 ");
	}
	else if (a == 7) {
		printf("31 ");
	}
	else if (a == 8) {
		printf("31 ");
	}
	else if (a == 9) {
		printf("30 ");
	}
	else if (a == 10) {
		printf("31 ");
	}
	else if (a == 11) {
		printf("30 ");
	}
	else if (a == 12) {
		printf("31 ");
	}
	else {
		printf("잘못된 입력");
	}

	if (b % 3 == 0) {
		printf("Yes");
	}
	else {
		printf("No");
	}

}*/

//문제3 - 실패 - 직감삼각형 모양뒤집기 문제

//문제4
/*
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int num = 1;
	int sum = 0;
	int arr[100][100] = {0};//비쥬얼 기준 오류때문에 0을 넣음, 원래 없었음

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			arr[i][j] = num;
			num++;
		}
	}

	for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= N; j++) {
			if (i == j) {
				sum += arr[i][j];
			}
		}
	}
	printf("%d", sum);

	return 0;
}*/

//문제 5
/*
void matrixAdd(int mx[3][3], int a[3][3], int b[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			mx[i][j] = a[i][j] + b[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", mx[i][j]);
		}
		if (i == 0) {
			printf("\n");
		}
		if (i == 1) {
			printf("\n");
		}
	}
}

int main() {
	int i, j;
	int mx[3][3] = {0};//비주얼 기준 오류, 0추가
	int my[3][3] = {0};//비쥬얼 기준 오류, 0추가

	// mx 와 my 행렬을 입력 받음
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &mx[i][j]);
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &my[i][j]);
		}
	}


	// 행렬 합 계산
	matrixAdd(mx, mx, my);

	// 행렬 합 결과 출력
	return 0;
}*/

//문제 6 - 실패 - 비트 출력 관련 문제

