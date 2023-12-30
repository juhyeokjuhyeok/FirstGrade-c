//oj 6��

/*(AP2023) 6�� (1) max �Լ� (p. 192)
�Ʒ� main �Լ� �� ����� ���ø� ���� max_1, max_2, max_3, max_a, max_b �Լ��� �����϶�.
main �Լ����� �Է� �ڵ嵵 �ۼ��ؾ� �Ѵ�.

����� ����: �Ʒ� �Էµ� ���� x k 8 5 12.56 77.33�̴�.
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

  //char, int, float �� scanf�� ����� �Է�
  //char:, int:, float:�� printf�� ����� ���
  // ...

  //�Ʒ� ��� �ڵ带 ���� �Լ��� �����϶�.
  printf("max char is %c\n", max_1(a,b));
  printf("max int is %d\n", max_2(i,j));
  printf("max float is %f\n", max_3(f1, f2));
  max_a(i, f1); //�Լ��ȿ��� ���
  max_b(b, j);  //�Լ��ȿ��� ���
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

/*(AP2023) 6�� (2) 1D �迭 �޸𸮿� ��� ���� 1 (p. 222)

2x3 �迭�� 1���� �迭 �޸𸮿� �Է� ���� �� ����ϴ� �ϴ� �Լ�, 2���� index�� 1����
index�� ��ȯ�ϴ� �Լ�, 1���� index�� 2���� index�� ����ϴ� �Լ��� �ۼ��϶�.
����� ���ÿ� main �Լ��� �����϶�.
��� index�� 0���� �����Ѵ�.
�迭�� int matrix[6]�� ����ؾ� �Ѵ�.

����� ����: 1 2 3 4 5 6�� �Է��ϰ� �����Ѵ�.
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
  //matrix�� �Է�
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

/*(AP2023) 6�� (3) 1D �迭 �޸𸮿� ��� ���� 2 (p. 222)

����� ���� 512 ������ 2���� �迭�� int matrix[512]�� �Է��ϴ� �Լ�, ����ϴ� �Լ�,
�׸��� ���� ���� ������ ����� 2���� index�� ����ϴ� �Լ��� �ۼ��϶�.

//����� ���� 1: 2 4, 1 2 3 4 2 3 4 5 �Է���.
matrix shape: 2 4
1 2 3 4
2 3 4 5
----------
1 2 3 4
2 3 4 5
----------
value 2 is found at (0, 1) (1, 0)

����� ���� 2: 3 3, 1 4 5 2 7 4 4 5 8 �Է���.
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


//�ڵ� �ۼ�

int main(void) {
  int r,c;
  int matrix[512]; //matrix �ƴ� �ٸ� �迭�� ������� ���Ѵ�.
  printf("matrix shape: ");
  scanf("%d %d", &r, &c);

  scan_matrix(matrix, r, c);// matrix ��� ���� �Է� �޴� �Լ�.

  printf("----------\n");

  print_matrix(matrix,r, c);

  printf("----------\n");
  find_2D(matrix, r, c, matrix[1]);//matrix[i] ��� ���� ���� ��� ����� 2���� index ���.
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
    int matrix[512]; //matrix �ƴ� �ٸ� �迭�� ������� ���Ѵ�.
    printf("matrix shape: ");
    scanf("%d %d", &r, &c);
    scan_matrix(matrix, r, c);// matrix ��� ���� �Է� �޴� �Լ�.
    printf("----------\n");
    print_matrix(matrix, r, c);
    printf("----------\n");
    find_2D(matrix, r, c, matrix[1]);//matrix[i] ��� ���� ���� ��� ����� 2���� index ���.

    return 0;
}*/

/*(AP2023) 6�� (4) static ���� ��� (p. 224)

main �Լ��� �������� �ʰ� odd �Լ��� �����Ͽ� �Է��� ���� �� Ȧ���� ������ ����϶�.
��Ʈ: static ����

//����� ����: �Է¹� ����� main �Լ����� �� ���� �Ǿ� �ִ�. odd �Լ��� ���� �ʿ�
�Է��� ��: 8
123
234
567
788
513
1224
147
1354
�Է��� Ȧ���� ���� 4

int main(void) {
  int s;
  printf("�Է��� ��: ");
  scanf("%d", &s);
  int v, odd_numbers;
  for (int i = 0; i < s; i++) {
    scanf("%d", &v);
    odd_numbers = odd(v);
  }
  printf("�Է��� Ȧ���� ���� %d\n", odd_numbers);
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
    printf("�Է��� ��: ");
    scanf("%d", &s);
    int v, odd_numbers = 0;
    for (int i = 0; i < s; i++) {
        scanf("%d", &v);
        odd_numbers = odd(v);
    }
    printf("�Է��� Ȧ���� ���� %d\n", odd_numbers);
    return 0;
}
