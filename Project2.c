//c언어 oj 2장

/*(AP2023) 2장 (1) 각 자리 수를 출력하는 프로그램 (p. 34)
 
세 자리 자연수를 입력받아 각 자리 수를 출력하는 프로그램을 작성해보자.

## 입력 예시 1
345
## 출력 예시 1
3, 4, 5
*/
/*
#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    int digit1 = number / 100;
    int digit2 = (number % 100) / 10;
    int digit3 = number % 10;

    printf("%d, %d, %d\n", digit1, digit2, digit3);

    return 0;
}*/

/*(AP2023) 2장 (2) 합계와 평균값을 출력하는 프로그램 (p. 39)

세 개의 수를 입력받아서 합계는 int 형, 평균값은 float 형으로 출력하는 프로그램을 작성해보자.

## 입력 예시 1
10
20
30
## 출력 예시 1
sum is 60
average is 20.000000
*/
/*
#include <stdio.h>

int main() {
	int a, b, c;
	int sum = 0;
	float average = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	sum = a + b + c;
	average = sum / 3;
	printf("sum is %d\n", sum);
	printf("average is %f", average);

	return 0;
}*/

/*(AP2023) 2장 (3) 인치(inch)를 센티미터(cm)로 변환하여 출력하는 프로그램 (p. 43)

길이를 인치(inch)로 입력받아 센티미터(cm)로 변환하여 인치와 센티미터를 출력하는 프로그램을 작성해보자.  1 인치(inch)는 2.54 센티미터(cm)에 해당한다.

## 입력 예시 1
10
## 출력 예시 1
10.000000 inch = 25.400000 cm
*/

/*#include <stdio.h>

int main() {
	float a;
	scanf("%f", &a);

	printf("%f inch = %f cm", a, a * 2.54);

	return 0;
}*/

//(AP2023) 2장 (4) 키를 표준체중으로 변환하여 출력하는 프로그램 (p. 50)
/*
키를 입력받아 표준체중으로 변환하여 표준체중을 출력하는 프로그램을 작성해보자.
표준체중은 ( 키 – 100 ) * 0.9를 이용해 구한다음 소수점 이하 두 자리만 출력한다.

## 입력 예시 1
175
## 출력 예시 1
67.50
*/
#include <stdio.h>

int main() {
	float a;
	scanf("%f", &a);

	printf("%.2f", (a - 100) * 0.9);
}

