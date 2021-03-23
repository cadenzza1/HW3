#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("[----- [김민규] [2018038055] -----]\n");
    int list[5]; //int형 자료 5개 생성
    int *plist[5]={NULL,}; //int형을 가리키는 포인터 5개 생성

    plist[0]= (int*)malloc(sizeof(int)); //plist[0]변수가 int형 가리키도록 동적할당

    list[0] =1; 
    list [1]=100;

    *plist[0]= 200;

    printf("value of list[0]= %d\n",list[0]);    
    printf("address of list[0] = %p\n",&list[0]);
    printf("value of list = %p\n", list);
    printf("address of list (&list) = %p\n", &list); // list[0]의 주소와 list의 값과 list의 주소가 전부 동일하다는 것을 알 수 있다.

    printf("---------------------------------------\n\n");
    printf("value of list[1]= %d\n",list[1]);    
    printf("address of list[1] = %p\n",&list[1]); //4바이트 증가된 주소값이 출력된다.
    printf("value of *(list+1) = %d\n", *(list+1)); //list[1]과 *(list+1)의 값이 같다. -> 배열의 포인터적 활용
    printf("address of list list+1 = %p\n", list+1); //마찬가지로 list[1]의 주소와 list+1의 주소는 같다.

    printf("---------------------------------------\n\n");

    printf("value of *plist[0] = %d\n", *plist[0]);
    printf("&plist[0] = %p\n",&plist[0]);
    printf("&plist = %p\n",&plist);
    printf("plist = %p\n",plist); //plist[0]의 주소와 plist의 값과 plist의 주소값이 같다.
    printf("plist[0] = %p\n",plist[0]);//plist[0]이 가리키는 heap영역 어딘가의 4바이트짜리의 시작주소
    printf("plist[1] = %p\n",plist[1]); //초기화를 NULL로 하고 따로 가리킬 변수를 지정하지 않아 NULL로 출력된다.
    printf("plist[2] = %p\n",plist[2]); //초기화를 NULL로 하고 따로 가리킬 변수를 지정하지 않아 NULL로 출력된다.
    printf("plist[3] = %p\n",plist[3]); //초기화를 NULL로 하고 따로 가리킬 변수를 지정하지 않아 NULL로 출력된다.
    printf("plist[4] = %p\n",plist[4]); //초기화를 NULL로 하고 따로 가리킬 변수를 지정하지 않아 NULL로 출력된다.

    free(plist[0]);

    return 0;
}