#include <stdio.h>

struct student {
    char lastName[13]; //13바이트
    int studentId; // 4바이트
    short grade; //2바이트        총 19바이트
};

int main()
{
    printf("[----- [김민규] [2018038055] -----]\n");

    struct student pst;

    printf("size of student = %ld\n", sizeof(struct student)); //구조체의 크기. 19가 아니라 24바이트가 나온다
    printf("size of int = %ld\n", sizeof(int));  //int 자료형의 크기
    printf("size of short = %ld\n", sizeof(short)); //short 자료형의 크기

    return 0;
}