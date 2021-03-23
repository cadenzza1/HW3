#include <stdio.h>

void print1(int *ptr, int rows);

int main()
{
    printf("[----- [김민규] [2018038055] -----]\n");
    int one[] = {0, 1, 2, 3, 4};

    printf("one = %p\n", one); //배열의 이름은 주소다 . 주소가 출력된다.
    printf("&one = %p\n", &one); // one의 주소를 출력. 동일
    printf("&one[0] = %p\n", &one[0]); // one[0]의 주소를 출력. 위 두개와 동일
    printf("\n");

    print1(&one[0], 5); //ptr 포인터변수에 one의 주소 보냄.

    return 0;
}

void print1(int *ptr, int rows) 
{ /* print out a one-dimensional array using a pointer */

    int i;
    printf("Address Contents\n");
    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr+i, *(ptr + i)); //포인터의 배열화. 포인터 기준 주소에 1씩 떨어뜨려 값 저장.
    printf("\n");
}