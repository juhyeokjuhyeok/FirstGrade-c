//oj 3��

/*(AP2023) 3�� (1) �Է��� �� ���� ������ ������� ����ϱ� (p. 70)
�� ���� ������ �Է����� �޾� �� ������ ���� ū ������ ������� ����ϴ� ���α׷��� �ۼ��϶�.

## �Է� ����
4
9
3
## ��� ����
9 4 3
*/
/*#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int largest;
    if (a >= b && a >= c) {
        largest = a;
        if (b >= c) {
            printf("%d %d %d", largest, b, c);
        }
        else {
            printf("%d %d %d", largest, c, b);
        }
    }

    if (b >= a && b >= c) {
        largest = b;
        if (a >= c) {
            printf("%d %d %d", largest, a, c);
        }
        else {
            printf("%d %d %d", largest, c, a);
        }
    }

    if (c >= a && c >= b) {
        largest = c;
        if (a >= b) {
            printf("%d %d %d", largest, a, b);
        }
        else {
            printf("%d %d %d", largest, b, a);
        }
    }

    return 0;
}*/

/*(AP2023) 3�� (2) �Է��� ���ڵ� ������ �Ÿ��� ����Ͽ� ���ϱ� (p. 72)
3���� ������ �Է����� ���� ��, �� ���� �� ũ�� ������ �߰��� �ִ� ������
���� �ָ� ������ ���� ����϶�. ��, ������ �Ÿ��� ���� ��쿡�� ���� ����
����Ѵ�.

�Ʒ� ���Է� ���� 1���� 3�� ���� �� ũ�� ������ �߰��� �ִ� ���� 4�̴�.
4���� 9������ 5��ŭ ������ �ְ�, 4���� 3������ 1��ŭ ������ �ִ�.
����, 4���� ���� �ָ� ������ �ִ� ���� 9�̴�.

## �Է� ���� 1
3
9
4
## ��� ���� 1
9
*/

/*#include <stdio.h>

int main() {
    int a, b, c;
    int middle;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if ((a <= b && b <= c) || (c <= b && b <= a)) {
        middle = b;
    }
    else if ((b <= a && a <= c) || (c <= a && a <= b)) {
        middle = a;
    }
    else {
        middle = c;
    }

    int distance_a, distance_b, distance_c;
    distance_a = distance_b = distance_c = 0;

    if (middle >= a) {
        distance_a = middle - a;
    }
    else {
        distance_a = a - middle;
    }

    if (middle >= b) {
        distance_b = middle - b;
    }
    else {
        distance_b = b - middle;
    }

    if (middle >= c) {
        distance_c = middle - c;
    }
    else {
        distance_c = c - middle;
    }

    int far;

    if (distance_a >= distance_b && distance_a >= distance_c) {
        far = a;
    }
    else if (distance_b >= distance_a && distance_b >= distance_c) {
        far = b;
    }
    else {
        far = c;
    }

    printf("%d\n", far);

    return 0;
}*/

/*(AP2023) 3�� (3) ��Ģ������ �����ϴ� ������ ���� ����� (p. 83)
1���� ���ڿ� 2���� ������ �̷���� �� ���� �Է����� �޾� �ش� ������
����(+, -, *, /, %)�� 2���� ������ ������ ����� ����϶�.
��, �������� ���� ���� �κи� ����Ѵ�.

## �Է� ���� 1
+ 100 200
## ��� ���� 1
300

## �Է� ���� 2
- 100 200
## ��� ���� 2
-100

## �Է� ���� 3
% 100 200
## ��� ���� 3
100
*/

#include <stdio.h>

int main() {
    char ch;
    int a, b;
    int num = 0;

    scanf("%c %d %d", &ch, &a, &b);

    switch (ch) {
    case '+':
        num = a + b;
        break;
    case '-':
        num = a - b;
        break;
    case '*':
        num = a * b;
        break;
    case '/':
        num = a / b;
        break;
    case '%':
        num = a % b;
        break;
    }
    printf("%d", num);

    return 0;
}
