//oj 12장

/*(AP2023) 12장 (1) 구조체를 정의하고 입력받아 출력하기(p. 397)

학번, 이름, 전화번호로 구성된 구조체를 정의하고, 값을 입력받아 출력한다.
phone_number() 함수는 문자열 배열(예: 문자열 "01012341234")로 입력받은 전화번호를
xxx-xxxx-xxxx 형식(예: "010-1234-1234")으로 출력한다.

void phone_number(char m[], int n)

##입력 예시 1
20164242 조무역 01037129845

##출력 예시 1
20164242
조무역
010-3712-9845

##입력 예시 2
202199033 조미술 01104480201

##출력 예시 2
202199033
조미술
011-0448-0201학번, 이름, 전화번호로 구성된 구조체를 정의하고, 값을 입력받아 출력한다.
phone_number() 함수는 문자열 배열(예: 문자열 "01012341234")로 입력받은 전화번호를 
xxx-xxxx-xxxx 형식(예: "010-1234-1234")으로 출력한다.

void phone_number(char m[], int n)

##입력 예시 1
20164242 조무역 01037129845

##출력 예시 1
20164242
조무역
010-3712-9845

##입력 예시 2
202199033 조미술 01104480201

##출력 예시 2
202199033
조미술
011-0448-0201
*/

/*
#include <stdio.h>

struct Student {
    int studentNumber;
    char name[50];
    char phoneNumber[12];
};

void phone_number(char m[], int n) {
    printf("%c%c%c-%c%c%c%c-%c%c%c%c\n", m[0], m[1], m[2], m[3], m[4], m[5], m[6], m[7], m[8], m[9], m[10], m[11]);
}

int main() {
    struct Student student;

    scanf("%d %s %s", &student.studentNumber, student.name, student.phoneNumber);

    printf("%d\n%s\n", student.studentNumber, student.name);
    phone_number(student.phoneNumber, 12);

    return 0;
}*/


/*(AP2023) 12장 (2) (x, y) 좌표 구조체를 정의하고 좌표가 어떤 사분면인지 출력하기(p. 400)

2차원 평면의 점을 (x, y) 좌표 구조체로 정의하고, 점의 좌표를 입력받은 후
이 점이 어떤 사분면에 속하는지 출력한다.
quadrant() 함수는 점이 속하는 사분면의 번호를 반환하는 함수이다.

int quadrant(struct point p)

##입력 예시 1
-1 2
##출력 예시 1
사분면=2

##입력 예시 2
1 -2
##출력 예시 2
사분면=4
*/

/*
#include <stdio.h>

struct point {
    int x;
    int y;
};

int quadrant(struct point p) {
    if (p.x > 0 && p.y > 0) {
        return 1;
    }
    else if (p.x < 0 && p.y > 0) {
        return 2;
    }
    else if (p.x < 0 && p.y < 0) {
        return 3;
    }
    else if (p.x > 0 && p.y < 0) {
        return 4;
    }
    else {
        return 0;
    }
}

int main() {
    struct point p;
    scanf("%d %d", &p.x, &p.y);

    int result = quadrant(p);
    printf("사분면=%d\n", result);

    return 0;
}*/

/*(AP2023) 12장 (3) 상품판매 내역을 구조체 배열에 구축하고 검색 및 출력하기(p. 403)

##문제 설명
상품판매(상품명, 가격, 매출액)에 대한 구조체 배열을 만들고 5개를 입력받은 후
선택(1. 상품명 검색, 2. 상품판매 내역 출력) 사항을 수행한다.
상품명을 검색은 search_brand() 함수에서, 상품판매 내역과 매출액 총계 출력은
print_arr() 함수에서 수행한다.

search_brand(Product a[], int n)
print_arr(Product arr[], int arr_len)

##입력 예시 1(5개의 상품명, 가격, 매출액 입력; 1 상품명 검색 모니터 출력 선택)
컴퓨터 90000 9900000
마우스 10000 2200000
모니터 70000 8000000
프린트 50000 7500000
키보드 30000 5500000
1
모니터

##출력 예시 1
모니터 70000 8000000

##입력 예시 2(5개의 상품명, 가격, 매출액 입력; 2 상품판매 내역 출력 선택)
가방 10000 2500000
의자 30000 4500000
책상 50000 9500000
탁자 40000 5500000
신발 20000 3500000
2

##출력 예시 2
가방 10000 2500000
의자 30000 4500000
책상 50000 9500000
탁자 40000 5500000
신발 20000 3500000
매출액 총계:25500000
*/

#include <stdio.h>
#include <string.h>
//20233119 컴퓨터공학과 김주혁
#define NAME_LEN 64
#define NUMBER 5
typedef struct {
    char name[NAME_LEN];
    int price;
    int sales;
} Product;

void search_brand(Product a[], int n) {
    char find[NAME_LEN];
    scanf("%s", find);

    for (int i = 0; i < NUMBER; i++) {
        strcmp(find, a[i].name);
        if (strcmp(find, a[i].name) == 0) {
            printf("%s %d %d", a[i].name, a[i].price, a[i].sales);
        }
    }


}

void print_arr(Product arr[], int arr_len) {
    int sum = 0;
    for (int i = 0; i < NUMBER; i++) {
        printf("%s %d %d\n", arr[i].name, arr[i].price, arr[i].sales);
    }

    for (int i = 0; i < NUMBER; i++) {
        sum += arr[i].sales;
    }
    printf("매출액 총계:%d", sum);

}

int main() {
    int i, a;
    Product std[5];

    for (i = 0; i < NUMBER; i++) {
        scanf("%s %d %d", std[i].name, &std[i].price, &std[i].sales);
    }

    scanf("%d", &a);

    if (a == 1) {
        search_brand(std, NUMBER);
    }
    else if (a == 2) {
        print_arr(std, NUMBER);
    }
    else {
        printf("잘못된 입력입니다.");
    }

    return 0;
}
