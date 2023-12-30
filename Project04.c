// oj 42장

//(AP2023) 4장 (1) 입력 정수 이하의 3의 배수를 순서대로 출력하기(p. 107,117)
/*
10보다 크고 100보다 작은 정수를 읽어 들여 그 수 이하의 양의 3의 배수를
순서대로 출력하는 프로그램을 작성한다.
단, 입력 정수가 10보다 크고 100보다 작은 수가 아니면 다시 읽어 들인다.

# 입력 예시 1
10보다 크고 100보다 작은 정수를 입력하세요: 11

# 출력 예시 1
3 6 9
*/
/*#include <stdio.h>

int main() {
    int a;
    do {
        printf("10보다 크고 100보다 작은 정수를 입력하세요: ");
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

/*(AP2023) 4장 (2) 두 정수의 공약수와 공약수의 개수를 출력하기(p. 132)

읽어 들인 두 양의 정수의 모든 공약수를 순서대로 출력한 후
공약수의 개수도 출력하는 프로그램을 작성한다.

# 입력 예시 1
12 18
# 출력 예시 1
1 2 3 6
공약수는 4개
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

    printf("\n공약수는 %d개\n", count);

    return 0;
}
*/

/*(AP2023) 4장 (3) 직각삼각형의 밑변과 높이의 길이를 나열하기(p. 133)

1보다 큰 입력 정수가 넓이인 모든 직각삼각형의 밑변과 높이의 길이(정수)를
나열하는 프로그램을 작성한다.
단, 밑변의 길이는 높이의 길이보다 크지 않다.

# 입력 예시 1
18

# 출력 예시 1
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
