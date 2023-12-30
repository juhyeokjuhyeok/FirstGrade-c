//oj 11장

/*(AP2023) 11장 (1) 대문자는 소문자, 소문자는 대문자로 바꾸기 (p. 378)

공백을 포함하는 문자열을 입력받아 대문자는 소문자로, 소문자는 대문자로 출력하는 코드를 작성하시오.
문자열의 길이는 최대 100개로 제한한다.

## 입력 예시 1
SuPpEr55
## 출력 예시 1
sUpPeR55

## 입력 예시 2
How are you Doing
## 출력 예시 2
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
        if (isupper(s[count])) // 대문자 판별 isupper
        {
            s[count] = tolower(s[count]);
        }
        else if (islower(s[count])) // 소문자 판별 islower
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

/*(AP2023) 11장 (2) 문자열에서 짝수 번째 있는 문자 삭제하기 (p. 379)

공백을 포함하는 문자열을 입력받아 짝수 번째에 있는 문자를 삭제하는 코드를 작성하시오.
문자열의 길이는 최대 100개로 제한한다.

## 입력 예시 1
SuPpEr55
## 출력 예시 1
SPE5

## 입력 예시 2
How are you Doing
## 출력 예시 2
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

/*(AP2023) 11장 (3) 문자열에서 특정 문자의 이전 문자 출력하기 (p. 376, p. 379)

공백을 포함하지 않는 문자열과 특정 문자를 입력받아 특정 문자 이전의 문자를 출력하는 코드를 작성하시오.
문자열의 길이는 최대 100개로 제한하며, 문자가 포함되지 않았을 때는 ‘NO.’를 출력한다.

int main()
{

 if (  == NULL)
        printf("NO.");
    else
        printf("이전문자는 %s입니다.", p);
}

## 입력 예시 1
STRING I

## 출력 예시 1
이전문자는 STRI입니다.

## 입력 예시 2
Halloween o

## 출력 예시 2
이전문자는 Hallo입니다.
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
        printf("이전문자는 %s입니다. \n", p);
    return 0;
}