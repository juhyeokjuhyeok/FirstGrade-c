// oj 42��

//(AP2023) 4�� (1) �Է� ���� ������ 3�� ����� ������� ����ϱ�(p. 107,117)
/*
10���� ũ�� 100���� ���� ������ �о� �鿩 �� �� ������ ���� 3�� �����
������� ����ϴ� ���α׷��� �ۼ��Ѵ�.
��, �Է� ������ 10���� ũ�� 100���� ���� ���� �ƴϸ� �ٽ� �о� ���δ�.

# �Է� ���� 1
10���� ũ�� 100���� ���� ������ �Է��ϼ���: 11

# ��� ���� 1
3 6 9
*/
/*#include <stdio.h>

int main() {
    int a;
    do {
        printf("10���� ũ�� 100���� ���� ������ �Է��ϼ���: ");
        scanf("%d", &a);
    } while (a <= 10 || a >= 100);

    for (int i = 1; i <= a; i++) {
        if (i % 3 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
*/

/*(AP2023) 4�� (2) �� ������ ������� ������� ������ ����ϱ�(p. 132)

�о� ���� �� ���� ������ ��� ������� ������� ����� ��
������� ������ ����ϴ� ���α׷��� �ۼ��Ѵ�.

# �Է� ���� 1
12 18
# ��� ���� 1
1 2 3 6
������� 4��
*/

/*#include <stdio.h>

int main() {
    int a, b;
    int smaller, count = 0;

    scanf("%d %d", &a, &b);

    if (a < b) {
        smaller = a;
    }
    else {
        smaller = b;
    }


    for (int i = 1; i <= smaller; i++) {
        if (a % i == 0 && b % i == 0) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\n������� %d��\n", count);

    return 0;
}
*/

/*(AP2023) 4�� (3) �����ﰢ���� �غ��� ������ ���̸� �����ϱ�(p. 133)

1���� ū �Է� ������ ������ ��� �����ﰢ���� �غ��� ������ ����(����)��
�����ϴ� ���α׷��� �ۼ��Ѵ�.
��, �غ��� ���̴� ������ ���̺��� ũ�� �ʴ�.

# �Է� ���� 1
18

# ��� ���� 1
1 x 36
2 x 18
3 x 12
4 x 9
6 x 6
*/

#include <stdio.h>

int main() {
    int area;

    scanf("%d", &area);

    for (int base = 1; base <= area; base++) {
        int height = 2 * area / base;
        if (base <= height && base * height == 2 * area) {
            printf("%d x %d\n", base, height);
        }
    }

    return 0;
}