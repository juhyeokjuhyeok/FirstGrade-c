// oj 8��

/*(AP2023) 8�� (1) ��� �Լ� ���� (p. 299)

���� �� n�� �Է� ���� �� �� �ٸ��� 'A'�� n, n-1, n-2, ..., 2, 1�� ����ϴ� ��� �Լ��� �����϶�.

# ����� ���� 1: �Է� 3�� ���� ���
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

/*(AP2023) 8�� (2) ���� �����ִ� �ϼ� (p. 296)

���� ���� �Է� ���� ��, �Է��� ���� �����Ͽ� ���� �����ִ� �ϼ��� ����϶�.
(��, 2���� 28�Ϸ� ����Ѵ�.)
�� �� �Է��� ������ ���� �Ѵ�.
int m, d;
scanf("%d�� %d��", &m, &d);

# ����� ���� 1: "12�� 31��" �Է� "1�� ����" ���
12�� 31��
1�� ����

# ����� ���� 2: "1�� 1��" �Է� "365�� ����" ���
1�� 1��
365�� ����

# ����� ���� 3: "7�� 4��" �Է� "181�� ����" ���
7�� 4��
181�� ����
*/

/*#include <stdio.h>

int main() {
    int m, d;
    scanf("%d�� %d��", &m, &d);

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
        printf("%d�� ����\n", remainingDays);
    }
    else {

    }

    return 0;
}*/

/*(AP2023) 8�� (3) �ҹ��ڿ� �빮���� ���� Ƚ�� (p. 308)

���ڸ� �Է� ���� �� ���ĺ� ������ �빮�ڿ� �ҹ����� ���� Ƚ���� ��*���� �����ϴ� �׷����� ����϶�.
���� p. 308 ������ �ٸ��� '\n'�� �ԷµǾ��� �� while loop���� ������ �ۼ�����.

�Է� �ڵ� ����:
char ch;
while( (ch = getchar()) != '\n') {
  ...
}

# ����� ���� 1: �Է� "Alphabet Only!"
Alphabet Only!
�빮��**
�ҹ���**********
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

    printf("�빮��");
    for (int i = 0; i < count1; i++) {
        printf("*");
    }
    printf("\n");

    printf("�ҹ���");
    for (int i = 0; i < count2; i++) {
        printf("*");
    }

    return 0;
}