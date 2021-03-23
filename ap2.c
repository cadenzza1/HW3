#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("[----- [김민규] [2018038055] -----]\n");
    int list[5]; //int형 자료 5개 생성
    int *plist[5]; //int형을 가리키는 포인터 5개 생성

    list[0] =10; 
    list [1]=11;

    plist[0]= (int*)malloc(sizeof(int)); //plist[0]변수가 heap영역의 4바이트를 가리키도록 동적할당

    printf("list[0] \t = %d\n", list[0]);
    printf("address of list \t= %p\n", list); //list의 값 출력 
    printf("address of list[0] \t= %p\n", &list[0]); //list[0]의 주소값 출력 . list의 값과 동일하다
    printf("address of list + 0 \t= %p\n", list+0); //list로부터 0만큼 떨어진 곳의 주소값
    printf("address of list + 1 \t= %p\n", list+1); // list로 부터 1만큼 떨어진 곳의 주소값 int형 이므로 4바이트 증가
    printf("address of list + 2 \t= %p\n", list+2);
    printf("address of list + 3 \t= %p\n", list+3);
    printf("address of list + 4 \t= %p\n", list+4);
    printf("address of list[4] \t= %p\n", &list[4]); //list[4]번째 요소의 주소값

    free(plist[0]);

    return 0;


}