// oj 8장

/*(AP2023) 8장 (1) 재귀 함수 구현 (p. 299)

정수 값 n을 입력 받은 후 각 줄마다 'A'를 n, n-1, n-2, ..., 2, 1개 출력하는 재귀 함수를 구현하라.

# 입출력 예시 1: 입력 3에 따른 출력
3
AAA
AA
A
*/

/*#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);


    do {
        for (int i = 0; i < a; i++) {
            printf("A");
        }
        printf("\n");
        a -= 1;
    } while (a != 0);

    return 0;
}*/

/*(AP2023) 8장 (2) 올해 남아있는 일수 (p. 296)

월과 일을 입력 받은 후, 입력한 날을 포함하여 올해 남아있는 일수를 출력하라.
(단, 2월은 28일로 계산한다.)
월 일 입력은 다음과 같이 한다.
int m, d;
scanf("%d월 %d일", &m, &d);

# 입출력 예시 1: "12월 31일" 입력 "1일 남음" 출력
12월 31일
1일 남음

# 입출력 예시 2: "1월 1일" 입력 "365일 남음" 출력
1월 1일
365일 남음

# 입출력 예시 3: "7월 4일" 입력 "181일 남음" 출력
7월 4일
181일 남음
*/

/*#include <stdio.h>

int main() {
    int m, d;
    scanf("%d월 %d일", &m, &d);

    int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    int remainingDays = 0;

    if (m >= 1 && m <= 12) {
        for (int i = m; i <= 12; i++) {
            if (i == m) {
                remainingDays += daysInMonth[i] - d + 1;
            }
            else {
                remainingDays += daysInMonth[i];
            }
        }
        printf("%d일 남음\n", remainingDays);
    }
    else {

    }

    return 0;
}*/

/*(AP2023) 8장 (3) 소문자와 대문자의 등장 횟수 (p. 308)

문자를 입력 받은 후 알파벳 문자의 대문자와 소문자의 등장 횟수를 ‘*’로 나열하는 그래프를 출력하라.
교재 p. 308 문제와 다르게 '\n'이 입력되었을 때 while loop에서 나오게 작성하자.

입력 코딩 예시:
char ch;
while( (ch = getchar()) != '\n') {
  ...
}

# 입출력 예시 1: 입력 "Alphabet Only!"
Alphabet Only!
대문자**
소문자**********
*/

#include <stdio.h>

int main() {
    char ch;

    int count1 = 0;
    int count2 = 0;

    while ((ch = getchar()) != '\n') {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch >= 'A' && ch <= 'Z') {
                count1++;
            }
            else {
                count2++;
            }
        }
    }

    printf("대문자");
    for (int i = 0; i < count1; i++) {
        printf("*");
    }
    printf("\n");

    printf("소문자");
    for (int i = 0; i < count2; i++) {
        printf("*");
    }

    return 0;
}