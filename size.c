#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("[----- [김민규] [2018038055] -----]\n");

    int **x; //더블포인터 선언

    printf("sizeof(x) = %lu\n", sizeof(x)); //x는 주소를 저장하는 변수이므로 32bit machine인 난 4바이트 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //*x 도 주소를 저장하므로 8바이트 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x)); // **x는 int자료형이므로 int인 4바이트 출력

    return 0;
}