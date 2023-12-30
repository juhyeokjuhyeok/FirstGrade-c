//oj 9장

/*(AP2023) 9장 (1) 문자열 배열을 읽어 들여 출력하는 프로그램

- "$END$" 를 읽어 들인 시점에서 문자열 읽기를 중단할 것
- "$END$" 보다 앞서 입력한 모든 문자열을 출력할 것
- 입력으로 주어지는 문자열의 최대 길이는 127개의 알파벳 문자열
- 입력으로 주어지는 문자열의 개수는 최대 10개

## 입력 예시 1
ABC
Book
Test
$END$

## 출력 예시 1
ABC
Book
Test
*/

/*
#include <stdio.h>
#include <string.h>

int main() {
    char input[10][128];
    int count = 0;

    while (1) {
        scanf("%s", input[count]);

        if (strcmp(input[count], "$END$") == 0) {
            break;
        }

        count++;
    }

    for (int i = 0; i < count; i++) {
        printf("%s\n", input[i]);
    }

    return 0;
}*/

/*(AP2023) 9장 (2) 문자열 데칼코마니를 출력하는 프로그램

입력 받은 1개의 문자열을 그대로 출력하고 연속해서, 거꾸로 출력하는 프로그램을 작성하라.
- 입력으로 주어지는 문자열의 최대 길이는 127개의 알파벳 문자열
- (주의) 공백을 포함하는 문자열이 입력으로 주어짐
- 입력으로 주어지는 문자열의 시작과 끝에는 공백 문자가 없음.

## 입력 예시 1
ABC

## 출력 예시 1
ABCCBA

## 입력 예시 2 (==> 주의 해야 할 예시)
1 2 3
## 출력 예시 2
1 2 33 2 1

## 입력 예시 3 (==> 주의 해야 할 예시)
Hello World!

## 출력 예시 3
Hello World!!dlroW olleH
*/

/*
#include <stdio.h>
#include <string.h>

int main() {
    char input[128];
    scanf("%[^\n]s", input);

    printf("%s", input);

    for (int i = strlen(input) - 1; i >= 0; i--) {
        printf("%c", input[i]);
    }

    return 0;
}*/

/*(AP2023) 9장 (3) 문자열 내의 공백을 삭제하는 프로그램

입력 받은 1개의 문자열 내의 공백을 삭제하는 프로그램을 작성하라.
- 입력으로 주어지는 문자열의 최대 길이는 127개의 알파벳 문자열
- (주의) 공백을 포함하는 문자열이 입력으로 주어짐
- 입력으로 주어지는 문자열의 시작과 끝에 공백 문자가 주어질 수 있음.

## 입력 예시 1
A B C

## 출력 예시 1
ABC

## 입력 예시 2 (==> 주의 해야 할 예시)
Hello World!

## 출력 예시 2
HelloWorld!

## 입력 예시 3 (==> 주의 해야 할 예시)
    1 2 3

## 출력 예시 3
123
*/

#include <stdio.h>
#include <string.h>

void removeSpaces(char* input) {
    int i, j = 0;
    for (i = 0; input[i] != '\0'; i++) {
        if (input[i] != ' ') {
            input[j++] = input[i];
        }
    }
    input[j] = '\0';
}

int main() {
    char input[128];

    scanf(" %[^\n]s", input);

    removeSpaces(input);

    printf("%s\n", input);

    return 0;
}