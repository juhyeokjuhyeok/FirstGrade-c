//oj 6장

/*(AP2023) 6장 (1) max 함수 (p. 192)
아래 main 함수 및 입출력 예시를 보고 max_1, max_2, max_3, max_a, max_b 함수를 정의하라.
main 함수에서 입력 코드도 작성해야 한다.

입출력 예시: 아래 입력된 값은 x k 8 5 12.56 77.33이다.
char: x k
int: 8 5
float: 12.56 77.33
max char is x
max int is 8
max float is 77.330002
max is 12.560000
max is k


int main(void) {
  char a,b;
  int i,j;
  float f1, f2;

  //char, int, float 값 scanf를 사용해 입력
  //char:, int:, float:는 printf를 사용해 출력
  // ...

  //아래 출력 코드를 보고 함수를 정의하라.
  printf("max char is %c\n", max_1(a,b));
  printf("max int is %d\n", max_2(i,j));
  printf("max float is %f\n", max_3(f1, f2));
  max_a(i, f1); //함수안에서 출력
  max_b(b, j);  //함수안에서 출력
  return 0;
}
*/

/*
#include <stdio.h>

char max_1(char a, char b) {
    return (a > b) ? a : b;
}

int max_2(int i, int j) {
    return (i > j) ? i : j;
}

float max_3(float f1, float f2) {
    return (f1 > f2) ? f1 : f2;
}

void max_a(int i, float f) {
    if (i > f) {
        printf("max is %d\n", i);
    }
    else {
        printf("max is %f\n", f);
    }
}

void max_b(char a, int j) {
    if (a > j) {
        printf("max is %c\n", a);
    }
    else {
        printf("max is %d\n", j);
    }
}

int main(void) {
    char a, b;
    int i, j;
    float f1, f2;

    printf("char: ");
    scanf("%c %c", &a, &b);
    printf("int: ");
    scanf("%d %d", &i, &j);
    printf("float: ");
    scanf("%f %f", &f1, &f2);

    printf("max char is %c\n", max_1(a, b));
    printf("max int is %d\n", max_2(i, j));
    printf("max float is %f\n", max_3(f1, f2));
    max_a(i, f1);
    max_b(b, j);

    return 0;
}*/

/*(AP2023) 6장 (2) 1D 배열 메모리에 행렬 구축 1 (p. 222)

2x3 배열을 1차원 배열 메모리에 입력 받은 후 출력하는 하는 함수, 2차원 index를 1차원
index로 변환하는 함수, 1차원 index를 2차원 index를 출력하는 함수를 작성하라.
입출력 예시와 main 함수를 참고하라.
모든 index는 0부터 시작한다.
배열은 int matrix[6]만 사용해야 한다.

입출력 예시: 1 2 3 4 5 6을 입력하고 시작한다.
1 2 3
4 5 6

print idx_1
1 2 3 4 5 6

print2x3
1 2 3
4 5 6

print idx_2
(0, 0) (0, 1) (0, 2) (1, 0) (1, 1) (1, 2)

int main(void) {
  int matrix[6];
  //matrix값 입력
  scanf("%d %d %d", matrix + 0, matrix + 1, matrix + 2);
  scanf("%d %d %d", matrix + 3, matrix + 4, matrix + 5);

  printf("\nprint idx_1\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matrix[idx_1(i, j)]);
    }
  }
  printf("\n");

  printf("\nprint2x3\n");
  print2x3(matrix);

  printf("\nprint idx_2\n");
  for (int i = 0; i < 6; i++) {
    idx_2(i);
    printf(" ");
  }
  printf("\n");

  return 0;
}
*/

/*
#include <stdio.h>

int idx_1(int row, int col) {
    int index = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < 3; j++) {
            index++;
        }
    }
    index += col;
    return index;
}

void print2x3(int matrix[6]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[idx_1(i, j)]);
        }
        printf("\n");
    }
}

void idx_2(int index) {
    int row = index / 3;
    int col = index % 3;
    printf("(%d, %d) ", row, col);
}

int main(void) {
    int matrix[6];

    for (int i = 0; i < 6; i++) {
        scanf("%d", &matrix[i]);
    }

    printf("\nprint idx_1\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[idx_1(i, j)]);
        }
    }
    printf("\n");

    printf("\nprint2x3\n");
    print2x3(matrix);

    printf("\nprint idx_2\n");
    for (int i = 0; i < 6; i++) {
        idx_2(i);
    }
    printf("\n");

    return 0;
}*/

/*(AP2023) 6장 (3) 1D 배열 메모리에 행렬 구축 2 (p. 222)

요소의 수가 512 이하의 2차원 배열을 int matrix[512]에 입력하는 함수, 출력하는 함수,
그리고 같은 값을 가지는 요소의 2차원 index를 출력하는 함수를 작성하라.

//입출력 예시 1: 2 4, 1 2 3 4 2 3 4 5 입력함.
matrix shape: 2 4
1 2 3 4
2 3 4 5
----------
1 2 3 4
2 3 4 5
----------
value 2 is found at (0, 1) (1, 0)

입출력 예시 2: 3 3, 1 4 5 2 7 4 4 5 8 입력함.
matrix shape: 3 3
1 4 5
2 7 4
4 5 8
----------
1 4 5
2 7 4
4 5 8
----------
value 4 is found at (0, 1) (1, 2) (2, 0)


//코드 작성

int main(void) {
  int r,c;
  int matrix[512]; //matrix 아닌 다른 배열은 사용하지 못한다.
  printf("matrix shape: ");
  scanf("%d %d", &r, &c);

  scan_matrix(matrix, r, c);// matrix 요소 값을 입력 받는 함수.

  printf("----------\n");

  print_matrix(matrix,r, c);

  printf("----------\n");
  find_2D(matrix, r, c, matrix[1]);//matrix[i] 요소 값을 가진 모든 요소의 2차원 index 출력.
  return 0;
}
*/

/*
#include <stdio.h>

void scan_matrix(int matrix[], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i * c + j]);
        }
    }
}

void print_matrix(int matrix[], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matrix[i * c + j]);
        }
        printf("\n");
    }
}


void find_2D(int matrix[], int r, int c, int target) {
    int found = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matrix[i * c + j] == target) {
                if (found == 0) {
                    printf("value %d is found at ", target);
                    found = 1;
                }
                printf("(%d, %d) ", i, j);
            }
        }
    }
    if (!found) {
        printf("value %d is not found\n", target);
    }
    printf("\n");
}

int main(void) {

    int r, c;
    int matrix[512]; //matrix 아닌 다른 배열은 사용하지 못한다.
    printf("matrix shape: ");
    scanf("%d %d", &r, &c);
    scan_matrix(matrix, r, c);// matrix 요소 값을 입력 받는 함수.
    printf("----------\n");
    print_matrix(matrix, r, c);
    printf("----------\n");
    find_2D(matrix, r, c, matrix[1]);//matrix[i] 요소 값을 가진 모든 요소의 2차원 index 출력.

    return 0;
}*/

/*(AP2023) 6장 (4) static 변수 사용 (p. 224)

main 함수는 수정하지 않고 odd 함수를 정의하여 입력한 수들 중 홀수의 개수를 출력하라.
힌트: static 변수

//입출력 예시: 입력및 출력은 main 함수에서 다 정의 되어 있다. odd 함수만 정의 필요
입력할 수: 8
123
234
567
788
513
1224
147
1354
입력한 홀수의 수는 4

int main(void) {
  int s;
  printf("입력할 수: ");
  scanf("%d", &s);
  int v, odd_numbers;
  for (int i = 0; i < s; i++) {
    scanf("%d", &v);
    odd_numbers = odd(v);
  }
  printf("입력한 홀수의 수는 %d\n", odd_numbers);
  return 0;
}
*/

#include <stdio.h>

int odd(int num) {
    static int count = 0;
    if (num % 2 != 0) {
        count++;
    }
    return count;
}

int main(void) {
    int s;
    printf("입력할 수: ");
    scanf("%d", &s);
    int v, odd_numbers = 0;
    for (int i = 0; i < s; i++) {
        scanf("%d", &v);
        odd_numbers = odd(v);
    }
    printf("입력한 홀수의 수는 %d\n", odd_numbers);
    return 0;
}
