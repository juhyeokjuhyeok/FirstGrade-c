//oj 7��

/*(AP2023) 7�� (1) signed short�� ������ ���� ��Ʈ ������ ����ϴ� ���α׷� (p. 252)

## ���� ����
[���� 7-7]���� unsigned�� ��ſ� signed short�� ������ �Է¹ް�, ���밪�� ���� �ڿ�
���� ��Ʈ�� ����ϴ� ���α׷��� �ۼ�����.
singed short���� �Է¹��� ����� ���������ڴ� %hd�� �Ϳ� ��������.

## �Է� ����#1
10

## ��� ����#1
0000000000001010

## �Է� ����#2
-9

## ��� ����#2
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

/*(AP2023) 7�� (2) ��ȣ ���� short�� ������ �Է¹޾� ��Ʈ�� ������ ���α׷� (p. 255)

[���� 7-8]�� ����ϰ� ��ȣ ���� short�� ������ �Է¹޴´�.
���⼭, ��Ʈ�� �������̳� �������� ȸ����Ű�°� �ƴ϶� �Է¹��� ��������
��Ʈ ��ü�� ����(reverse)��Ű�� ���α׷��� �ۼ��غ���.
unsigned short���� �Է¹��� ����� ���������ڴ� %hu�� �Ϳ� ��������.

## �Է� ����#1
15

## ��� ����#1
1111000000000000

## �Է� ����#2
255

## ��� ����#2
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

/*(AP2023) 7�� (3) ���� ���̸� double�� ������ �Է¹޾� ���� �������� ���ϴ� ���α׷� (p. 271)
[���� 7-15]�� ����ϰ� double�� ������ ���̸� �Է¹޴´�.
���⼭, ���簢���� ���̰� �ƴ϶�, ���� ���̶� �����ϰ� �������� ����Ѵ�.
PI�� 3.14�� ����ϸ�, �������� �Ҽ��� ��° �ڸ����� ǥ���Ѵ�.

## �Է� ����#1
3.14
## ��� ����#1
1.00

## �Է� ����#2
6.5
## ��� ����#2
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

/*(AP2023) 7�� (4) 0.00���� 0.01�� �ø� ���� ��ü �հ踦 ���ϴ� ���α׷� (p. 273)
���� ���� n�� �Է¹޾� [���� 7-17]�� ����ϰ� 0.00���� n����ŭ 0.01�� �ø� ���� ��ü �հ踦 ���Ѵ�.
double�� ������ float�� ������ ���� Ȱ���Ͽ� ��ü �հ踦 ��� ���Ѵ�.
����� double�� ������ �հ�, float�� ������ �հ�, �׸��� �� �հ��� ���̸� ���밪�� ������ ����Ѵ�.
����� ��� �Ҽ��� ���ټ� �ڸ����� ǥ���Ѵ�.

## �Է� ����#1
10
## ��� ����#1
0.550000000000000 0.549999892711639 0.000000107288361

## �Է� ����#2
100
## ��� ����#2
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