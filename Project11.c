//oj 11��

/*(AP2023) 11�� (1) �빮�ڴ� �ҹ���, �ҹ��ڴ� �빮�ڷ� �ٲٱ� (p. 378)

������ �����ϴ� ���ڿ��� �Է¹޾� �빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ� ����ϴ� �ڵ带 �ۼ��Ͻÿ�.
���ڿ��� ���̴� �ִ� 100���� �����Ѵ�.

## �Է� ���� 1
SuPpEr55
## ��� ���� 1
sUpPeR55

## �Է� ���� 2
How are you Doing
## ��� ���� 2
hOW ARE YOU dOING
*/

/*
#include <stdio.h> 
#include <ctype.h>
#define MAN_NUM 100
void str_change(char* s)
{
    int count = 0;

    while (s[count]) {
        if (isupper(s[count])) // �빮�� �Ǻ� isupper
        {
            s[count] = tolower(s[count]);
        }
        else if (islower(s[count])) // �ҹ��� �Ǻ� islower
        {
            s[count] = toupper(s[count]);
        }
        count++;
    }
}void main()
{
    char input[MAN_NUM];
    gets(input);
    str_change(input);
    printf("%s", input);
}*/

/*(AP2023) 11�� (2) ���ڿ����� ¦�� ��° �ִ� ���� �����ϱ� (p. 379)

������ �����ϴ� ���ڿ��� �Է¹޾� ¦�� ��°�� �ִ� ���ڸ� �����ϴ� �ڵ带 �ۼ��Ͻÿ�.
���ڿ��� ���̴� �ִ� 100���� �����Ѵ�.

## �Է� ���� 1
SuPpEr55
## ��� ���� 1
SPE5

## �Է� ���� 2
How are you Doing
## ��� ���� 2
HwaeyuDig
*/

/*
#include <stdio.h> 
#define MAN_NUM 100
void delete_odd(char* s)
{
    int idx = 0;
    char* ptr = s;
    while (*s)
    {
        if (idx % 2 == 0)
        {
            *ptr++ = *s;
        }
        s++;
        idx++;
    }
    *ptr = '\0';
}void main()
{
    char input[MAN_NUM];
    gets(input);
    delete_odd(input);
    printf("%s", input);
}*/

/*(AP2023) 11�� (3) ���ڿ����� Ư�� ������ ���� ���� ����ϱ� (p. 376, p. 379)

������ �������� �ʴ� ���ڿ��� Ư�� ���ڸ� �Է¹޾� Ư�� ���� ������ ���ڸ� ����ϴ� �ڵ带 �ۼ��Ͻÿ�.
���ڿ��� ���̴� �ִ� 100���� �����ϸ�, ���ڰ� ���Ե��� �ʾ��� ���� ��NO.���� ����Ѵ�.

int main()
{

 if (  == NULL)
        printf("NO.");
    else
        printf("�������ڴ� %s�Դϴ�.", p);
}

## �Է� ���� 1
STRING I

## ��� ���� 1
�������ڴ� STRI�Դϴ�.

## �Է� ���� 2
Halloween o

## ��� ���� 2
�������ڴ� Hallo�Դϴ�.
*/

#include <stdio.h> 
#define MAX_NUM 100
char* str_chr(char* s, int c, char* ptr)
{
    int count = 0;
    while (*s)
    {
        ptr[count] = *s;
        if (*s == c)
        {
            ptr[count + 1] = ' \0';
            return ptr;
        }
        s++, count++;
    }
    return NULL;
}int main()
{
    char str[MAX_NUM];
    char ptr[MAX_NUM];
    char ch[10];
    char* p;
    scanf("%s %s", str, ch);
    if ((p = str_chr(str, ch[0], ptr)) == NULL)
        printf("NO. \n");
    else
        printf("�������ڴ� %s�Դϴ�. \n", p);
    return 0;
}