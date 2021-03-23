#include <stdio.h>

#define MAX_SIZE 100

float sum(float list[], int);
float input[MAX_SIZE], answer; //float형 100개짜리 배열 input생성, answer변수 생성
int i;
int main(void)
{
    printf("[----- [김민규] [2018038055] -----]\n");
    for (i = 0; i < MAX_SIZE; i++) //0부터 MAX_SIZE 까지 반복
        input[i] = i; //배열 초기화

    /* for checking call by reference */
    printf("address of input = %p\n", input); //input의 주소를 출력 

    answer = sum(input, MAX_SIZE); //input의 주소를 list에 전달
    printf("The sum is : % f\n", answer);

    return 0;
}

float sum(float list[], int n)
{
    printf("value of list = %p\n", list); //list의 값 출력. list배열의 시작주소 출력 -  input의 주소 출력
    printf("address of list = %p\n\n", &list); // list의 주소 출력. call by reference 라서 주소값만 참조한거라 list의 주소는 다르다.

    int i;
    float tempsum = 0;
    for (i = 0; i < n; i++)
        tempsum += list[i]; //tempsum은 배열 요소들의 모든 합이다. 그러므로 0부터 99까지의 합이다. -> 4950
    return tempsum; //4950 전달
}
