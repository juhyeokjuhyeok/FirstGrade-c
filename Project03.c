//oj 3장

/*(AP2023) 3장 (1) 입력한 세 개의 정수를 순서대로 출력하기 (p. 70)
세 개의 정수를 입력으로 받아 이 수들을 가장 큰 수부터 순서대로 출력하는 프로그램을 작성하라.

## 입력 예시
4
9
3
## 출력 예시
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

/*(AP2023) 3장 (2) 입력한 숫자들 사이의 거리를 계산하여 비교하기 (p. 72)
3개의 정수를 입력으로 받은 후, 이 수들 중 크기 순서로 중간에 있는 값에서
가장 멀리 떨어진 수를 출력하라. 단, 떨어진 거리가 같은 경우에는 작은 값을
출력한다.

아래 “입력 예시 1”의 3개 숫자 중 크기 순서로 중간에 있는 값은 4이다.
4에서 9까지는 5만큼 떨어져 있고, 4에서 3까지는 1만큼 떨어져 있다.
따라서, 4에서 가장 멀리 떨어져 있는 수는 9이다.

## 입력 예시 1
3
9
4
## 출력 예시 1
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

/*(AP2023) 3장 (3) 사칙연산을 수행하는 간단한 계산기 만들기 (p. 83)
1개의 문자와 2개의 정수로 이루어진 한 줄을 입력으로 받아 해당 문자의
연산(+, -, *, /, %)을 2개의 정수에 적용한 결과를 출력하라.
단, 나눗셈의 경우는 정수 부분만 출력한다.

## 입력 예시 1
+ 100 200
## 출력 예시 1
300

## 입력 예시 2
- 100 200
## 출력 예시 2
-100

## 입력 예시 3
% 100 200
## 출력 예시 3
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
