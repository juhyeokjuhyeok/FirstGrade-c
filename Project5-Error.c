// oj 5장-비쥬얼 스튜디오 기준 오류가 있음, 다시만들기

/*(AP2023) 5장 (1) 배열에 값 저장 후 출력하기
3x3 크기의 정수형 배열 mx와 my를 선언한다.
배열 mx와 my에 사용자로부터 정수를 입력 받은 후, 각 위치 요소의 mx 값에서 my 값을
뺀다. 뺄셈 결과 값을 다시 mx에 저장하고, 저장된 값을 읽어 출력하는 프로그램을 만든다.

##입력 예시
1 2 3 4 5 6 7 8 9
10 11 12 13 14 15 16 17 18
#출력 예시
-9-9-9
-9-9-9
-9-9-9
*/

/*#include <stdio.h>

int main() {
    int mx[3][3];
    int my[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mx[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &my[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            mx[i][j] -= my[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d", mx[i][j]);
            if (j < 2) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}*/

/*(AP2023) 5장 (2) 배열 요소 순서 정렬하기(p. 167) --오류발생 다시만들기 필요
정수 N(1~10)을 입력하면 Nx5 크기가 만들어지는 정수형 배열 a를 선언한다.
이후 배열 a에 Nx5개 정수를 입력한 후, 1차원 배열 b에 배열 a의 모든 값이 큰 수부터
정렬되도록 만드는 프로그램을 작성해 보자.

##입력 예시 (2x5 배열 생성)
2
1 3 5 7 9 2 4 6 8 10

## 출력 예시
10 9 8 7 6 5 4 3 2 1
*/

/*#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int a[N][5];
    int b[N * 5];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int index = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 5; j++) {
            b[index] = a[i][j];
            index++;
        }
    }

    for (int i = 0; i < N * 5; i++) {
        for (int j = i + 1; j < N * 5; j++) {
            if (b[i] < b[j]) {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    for (int i = 0; i < N * 5; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}*/

/*(AP2023) 5장 (3) 배열 지그재그 출력하기
정수형 숫자 N(1~100)을 입력하면 Nx4 배열이 만들어 지고 배열 안의 값을 지그재그로
그리며 정수형으로 출력하는 프로그램을 만들어보자.
배열에 채워지는 숫자는 0부터 시작한다.

##입력 예시 1
3
##출력 예시 1
0123
7654
891011

##입력 예시 2
5
##출력 예시 2
0123
7654
891011
15141312
16171819
*/

/*#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int array[a][4];

    int count = 0;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < 4; j++) {
            array[i][j] = count++;
        }
    }

    for (int i = 0; i < a; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < 4; j++) {
                printf("%d", array[i][j]);
            }
        }
        else {
            for (int j = 3; j >= 0; j--) {
                printf("%d", array[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}*/