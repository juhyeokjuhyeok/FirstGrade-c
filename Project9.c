//oj 9��

/*(AP2023) 9�� (1) ���ڿ� �迭�� �о� �鿩 ����ϴ� ���α׷�

- "$END$" �� �о� ���� �������� ���ڿ� �б⸦ �ߴ��� ��
- "$END$" ���� �ռ� �Է��� ��� ���ڿ��� ����� ��
- �Է����� �־����� ���ڿ��� �ִ� ���̴� 127���� ���ĺ� ���ڿ�
- �Է����� �־����� ���ڿ��� ������ �ִ� 10��

## �Է� ���� 1
ABC
Book
Test
$END$

## ��� ���� 1
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

/*(AP2023) 9�� (2) ���ڿ� ��Į�ڸ��ϸ� ����ϴ� ���α׷�

�Է� ���� 1���� ���ڿ��� �״�� ����ϰ� �����ؼ�, �Ųٷ� ����ϴ� ���α׷��� �ۼ��϶�.
- �Է����� �־����� ���ڿ��� �ִ� ���̴� 127���� ���ĺ� ���ڿ�
- (����) ������ �����ϴ� ���ڿ��� �Է����� �־���
- �Է����� �־����� ���ڿ��� ���۰� ������ ���� ���ڰ� ����.

## �Է� ���� 1
ABC

## ��� ���� 1
ABCCBA

## �Է� ���� 2 (==> ���� �ؾ� �� ����)
1 2 3
## ��� ���� 2
1 2 33 2 1

## �Է� ���� 3 (==> ���� �ؾ� �� ����)
Hello World!

## ��� ���� 3
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

/*(AP2023) 9�� (3) ���ڿ� ���� ������ �����ϴ� ���α׷�

�Է� ���� 1���� ���ڿ� ���� ������ �����ϴ� ���α׷��� �ۼ��϶�.
- �Է����� �־����� ���ڿ��� �ִ� ���̴� 127���� ���ĺ� ���ڿ�
- (����) ������ �����ϴ� ���ڿ��� �Է����� �־���
- �Է����� �־����� ���ڿ��� ���۰� ���� ���� ���ڰ� �־��� �� ����.

## �Է� ���� 1
A B C

## ��� ���� 1
ABC

## �Է� ���� 2 (==> ���� �ؾ� �� ����)
Hello World!

## ��� ���� 2
HelloWorld!

## �Է� ���� 3 (==> ���� �ؾ� �� ����)
    1 2 3

## ��� ���� 3
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