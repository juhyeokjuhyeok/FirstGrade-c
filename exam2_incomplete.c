//기말고사

//문제1

/*## 문제 설명
입력할 실수의 개수(5~10개)와 소수점 둘째 자리까지의 실수들을 입력 받아서
버블 정렬 알고리즘으로 정렬한 후, 정렬 결과를 소수점 첫째 자리까지만
출력하는 프로그램을 작성하라.단, 정렬에서 사용하는 두 실수의 교환은
함수 형식 매크로 swap(a, b)를 정의해서 사용해야 하고, 정렬 결과 출력 시
소수점 둘째 자리에서 첫째 자리로 반올림하지 않아야 한다.
#define swap(a, b) ......

## 입력 예시 1
5
2.27 1.64 9.05 4.32 7.78

## 출력 예시 1
1.6 2.2 4.3 7.7 9.0

## 입력 예시 2
10
7.19 3.26 8.61 5.03 6.92 2.27 9.64 8.04 4.32 6.79

## 출력 예시 2
2.2 3.2 4.3 5.0 6.7 6.9 7.1 8.0 8.6 9.6*/

//문제2

/*
## 문제 설명
아래에 주어진 수학 함수 f(n)을 프로그램 함수로 구현한 후, 재귀 호출을 수행하여
f(n)의 값을 구하는 프로그램을 작성하라.
단, n은 2~30 범위의 정수이고 f(0) = 0, f(1) = 1이다.
f(n) = f(n-1) + 2*f(n-2)

## 입력 예시 1
5

## 출력 예시 1
11

## 입력 예시 2
8

## 출력 예시 2
85
*/

//문제3-문자열 거꾸로

/*
#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>
#define NUM 100

// 리턴 타입은 void이며, 반전할 문자열을 문자열 포인터로 주어지며, 
// 반전된 문자열도 이 포인터 배열에 기억되어야 한다. 
void reverse_str(char* str) {
	int i;
	for (i = strlen(str) - 1; i >= 0; i--) {
		printf("%c", str[i]);
	}
}
int main()
{
	char str[NUM];
	scanf("%s", str);

	reverse_str(str);
	// 1개의 문자열을 입력 받아, 
	// 앞에서 작성한 reverse_str()함수를 이용하여 문자열을 반전한 뒤,
	// 결과로 출력한다. 
	return 0;
}*/

//문제4

/*
## 문제 설명
실수 3.14를, 정부수 3과 소수부 0.14로 분리해 주는 함수를 작성해보자
void get(double value, int i_part, double f_part)를 구현해보자
매개변수로 포인터를 사용하면, 함수가 2개 이상의 값을 반환할 수 있다.

## 입력
실수 1개가 주어진다.

## 출력
분리된 정수부 실수부로 출력된다.

## 입력 예시 1
1.2345

## 출력 예시 1
1 0.234500

## 입력 예시 2
2.34

## 출력 예시 2
2 0.340000

## 입력 예시 3
1.0

## 출력 예시 3
1 0.000000

## 작성해야 할 코드 형태
#include < stdio.h >

void get(double value, int* i_part, double* f_part);

int main()
{
	double in_num;
	______________;
	______________;

	scanf("%lf", &in_num);

	get(in_num, ________, ________);

	printf("%d %f", ________, ________);

	return 0;
}

void get(double value, int* i_part, double* f_part) {

}
*/

//문제5

/*
## 문제 설명
영어 소문자로 된 문자열을 입력받아 문자열 내 단어의 시작 알파벳을 대문자로 변경하는 프로그램을 작성하자.
※ 아래 조건을 만족하지 않으면 점수 없음
1. 배열의 크기는 100이며, 객체 형식 매크로로 정의함
2. 소문자를 대문자로 변경하는 함수 사용
3. 2번 함수 부분을 포인터를 사용한 소스코드로 작성해야 함

#define SIZE

void CapitalizeWords(char *str) {
	_______________
}

int main() {
	char input[SIZE];
	scanf("%[^\n]s", input);

	CapitalizeWords(_____);

	printf("%s\n", input);
	return 0;
}

## 입력 예시 1
just do it

## 출력 예시 1
Just Do It

## 입력 예시 2
impossible is nothing

## 출력 예시 2
Impossible Is Nothing
*/

//문제6

/*
## 문제 설명
어떤 회사의 사내 평균 연봉과 사원 5명의 정보를 아래 예시와 같이 입력 받아서
구조체 배열에 저장한 후, 사번 순으로 정렬하여 출력하고 사내 평균 연봉 이상을
받는 사원들을 연봉의 역순으로 출력하는 프로그램을 작성하라.
단, 구조체의 선언 및 사원 정보의 출력 형식은 다음과 같다.
typedef struct {
	int id;		// 사번
	char name[20];	// 이름
	char city[20];	// 근무 도시
	int salary;	// 연봉
} Employee;
printf("%d %-10s %-10s %d\n" ...... // 사원 정보의 출력 형식

## 입력 예시 1
4000
523 Kim Seoul 2500
123 Park Busan 4200
417 Hong Gwangju 5400
280 Lee Daejeon 3000
309 Choi Jeju 7300

## 출력 예시 1
123 Park       Busan      4200
280 Lee        Daejeon    3000
309 Choi       Jeju       7300
417 Hong       Gwangju    5400
523 Kim        Seoul      2500
Above average (4000):
309 Choi       Jeju       7300
417 Hong       Gwangju    5400
123 Park       Busan      4200

## 입력 예시 2
5500
238 Hwang Inchen 7800
198 Son Jeonju 4900
340 Ahn Daegu 5900
517 Lee Yeosu 2900
306 Kim Suwon 6800

## 출력 예시 2
198 Son        Jeonju     4900
238 Hwang      Inchen     7800
306 Kim        Suwon      6800
340 Ahn        Daegu      5900
517 Lee        Yeosu      2900
Above average (5500):
238 Hwang      Inchen     7800
306 Kim        Suwon      6800
340 Ahn        Daegu      5900
*/