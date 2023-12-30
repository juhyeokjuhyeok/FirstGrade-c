//oj 7장

/*(AP2023) 7장 (1) signed short형 정수의 내부 비트 구성을 출력하는 프로그램 (p. 252)

## 문제 설명
[문제 7-7]에서 unsigned형 대신에 signed short형 정수를 입력받고, 절대값을 취한 뒤에
내부 비트를 출력하는 프로그램을 작성하자.
singed short형을 입력받을 경우의 형식지정자는 %hd인 것에 주의하자.

## 입력 예시#1
10

## 출력 예시#1
0000000000001010

## 입력 예시#2
-9

## 출력 예시#2
0000000000001001
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    signed short num;
    scanf("%hd", &num);

    num = abs(num);

    int bit;
    for (int i = 15; i >= 0; i--) {
        bit = (num >> i) & 1;
        printf("%d", bit);
    }

    printf("\n");

    return 0;
}*/

/*(AP2023) 7장 (2) 부호 없는 short형 정수를 입력받아 비트를 뒤집는 프로그램 (p. 255)

[문제 7-8]와 비슷하게 부호 없는 short형 정수를 입력받는다.
여기서, 비트를 오른쪽이나 왼쪽으로 회전시키는게 아니라 입력받은 정수형의
비트 전체를 반전(reverse)시키는 프로그램을 작성해보자.
unsigned short형을 입력받을 경우의 형식지정자는 %hu인 것에 주의하자.

## 입력 예시#1
15

## 출력 예시#1
1111000000000000

## 입력 예시#2
255

## 출력 예시#2
1111111100000000
*/

/*
#include <stdio.h>

unsigned short reverseBits(unsigned short num) {
    unsigned short numOfBits = sizeof(num) * 8;
    unsigned short reverseNum = 0;
    int i;
    for (i = 0; i < numOfBits; i++) {
        if ((num & (1 << i)))
            reverseNum |= 1 << ((numOfBits - 1) - i);
    }
    return reverseNum;
}

int main() {

    unsigned short x = 0;
    scanf("%hu", &x);

    unsigned short result = reverseBits(x);

    for (int i = 15; i >= 0; i--) {
        printf("%d", (result >> i) & 1);
    }

    return 0;
}*/

/*(AP2023) 7장 (3) 원의 넓이를 double형 변수로 입력받아 원의 반지름을 구하는 프로그램 (p. 271)
[문제 7-15]와 비슷하게 double형 변수로 넓이를 입력받는다.
여기서, 정사각형의 넓이가 아니라, 원의 넓이라 간주하고 반지름을 계산한다.
PI는 3.14로 계산하며, 반지름은 소수점 둘째 자리까지 표시한다.

## 입력 예시#1
3.14
## 출력 예시#1
1.00

## 입력 예시#2
6.5
## 출력 예시#2
1.44
*/

/*
#include <stdio.h>
#include <math.h>
int main() {

    double area;
    double PI = 3.14;
    scanf("%lf", &area);
    double radius = sqrt(area / PI);

    printf("%.2lf\n", radius);

    return 0;
}*/

/*(AP2023) 7장 (4) 0.00부터 0.01씩 늘린 값의 전체 합계를 구하는 프로그램 (p. 273)
양의 정수 n을 입력받아 [문제 7-17]과 비슷하게 0.00부터 n번만큼 0.01씩 늘린 값의 전체 합계를 구한다.
double형 변수와 float형 변수를 각각 활용하여 전체 합계를 모두 구한다.
출력은 double형 변수의 합계, float형 변수의 합계, 그리고 두 합계의 차이를 절대값을 씌워서 출력한다.
출력은 모두 소수점 열다섯 자리까지 표시한다.

## 입력 예시#1
10
## 출력 예시#1
0.550000000000000 0.549999892711639 0.000000107288361

## 입력 예시#2
100
## 출력 예시#2
50.500000000000028 50.499984741210938 0.000015258789091
*/

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    double b1 = 0.00, c1 = 0.00;
    float b2 = 0.00, c2 = 0.00;

    for (int i = 0; i < a; i++) {
        b1 += 0.01;
        c1 += b1;
        b2 += 0.01;
        c2 += b2;
    }

    double result = c1 - c2;

    if (result < 0) {
        result = -result;
    }


    printf("%.15lf %.15f %.15lf", c1, c2, result);
}
