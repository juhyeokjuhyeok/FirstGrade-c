//oj 12��

/*(AP2023) 12�� (1) ����ü�� �����ϰ� �Է¹޾� ����ϱ�(p. 397)

�й�, �̸�, ��ȭ��ȣ�� ������ ����ü�� �����ϰ�, ���� �Է¹޾� ����Ѵ�.
phone_number() �Լ��� ���ڿ� �迭(��: ���ڿ� "01012341234")�� �Է¹��� ��ȭ��ȣ��
xxx-xxxx-xxxx ����(��: "010-1234-1234")���� ����Ѵ�.

void phone_number(char m[], int n)

##�Է� ���� 1
20164242 ������ 01037129845

##��� ���� 1
20164242
������
010-3712-9845

##�Է� ���� 2
202199033 ���̼� 01104480201

##��� ���� 2
202199033
���̼�
011-0448-0201�й�, �̸�, ��ȭ��ȣ�� ������ ����ü�� �����ϰ�, ���� �Է¹޾� ����Ѵ�.
phone_number() �Լ��� ���ڿ� �迭(��: ���ڿ� "01012341234")�� �Է¹��� ��ȭ��ȣ�� 
xxx-xxxx-xxxx ����(��: "010-1234-1234")���� ����Ѵ�.

void phone_number(char m[], int n)

##�Է� ���� 1
20164242 ������ 01037129845

##��� ���� 1
20164242
������
010-3712-9845

##�Է� ���� 2
202199033 ���̼� 01104480201

##��� ���� 2
202199033
���̼�
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


/*(AP2023) 12�� (2) (x, y) ��ǥ ����ü�� �����ϰ� ��ǥ�� � ��и����� ����ϱ�(p. 400)

2���� ����� ���� (x, y) ��ǥ ����ü�� �����ϰ�, ���� ��ǥ�� �Է¹��� ��
�� ���� � ��и鿡 ���ϴ��� ����Ѵ�.
quadrant() �Լ��� ���� ���ϴ� ��и��� ��ȣ�� ��ȯ�ϴ� �Լ��̴�.

int quadrant(struct point p)

##�Է� ���� 1
-1 2
##��� ���� 1
��и�=2

##�Է� ���� 2
1 -2
##��� ���� 2
��и�=4
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
    printf("��и�=%d\n", result);

    return 0;
}*/

/*(AP2023) 12�� (3) ��ǰ�Ǹ� ������ ����ü �迭�� �����ϰ� �˻� �� ����ϱ�(p. 403)

##���� ����
��ǰ�Ǹ�(��ǰ��, ����, �����)�� ���� ����ü �迭�� ����� 5���� �Է¹��� ��
����(1. ��ǰ�� �˻�, 2. ��ǰ�Ǹ� ���� ���) ������ �����Ѵ�.
��ǰ���� �˻��� search_brand() �Լ�����, ��ǰ�Ǹ� ������ ����� �Ѱ� �����
print_arr() �Լ����� �����Ѵ�.

search_brand(Product a[], int n)
print_arr(Product arr[], int arr_len)

##�Է� ���� 1(5���� ��ǰ��, ����, ����� �Է�; 1 ��ǰ�� �˻� ����� ��� ����)
��ǻ�� 90000 9900000
���콺 10000 2200000
����� 70000 8000000
����Ʈ 50000 7500000
Ű���� 30000 5500000
1
�����

##��� ���� 1
����� 70000 8000000

##�Է� ���� 2(5���� ��ǰ��, ����, ����� �Է�; 2 ��ǰ�Ǹ� ���� ��� ����)
���� 10000 2500000
���� 30000 4500000
å�� 50000 9500000
Ź�� 40000 5500000
�Ź� 20000 3500000
2

##��� ���� 2
���� 10000 2500000
���� 30000 4500000
å�� 50000 9500000
Ź�� 40000 5500000
�Ź� 20000 3500000
����� �Ѱ�:25500000
*/

#include <stdio.h>
#include <string.h>
//20233119 ��ǻ�Ͱ��а� ������
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
    printf("����� �Ѱ�:%d", sum);

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
        printf("�߸��� �Է��Դϴ�.");
    }

    return 0;
}
