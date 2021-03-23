#include <stdio.h>

struct student1 {  //studen1 구조체 형성
    char lastName;
    int studentId;
    char grade;
};

typedef struct { //student2 구조체 형성
    char lastName;
    int studentId;
    char grade;
} student2;

int main()
{
    printf("[----- [김민규] [2018038055] -----]\n");

    struct student1 st1 = {'A',100,'A'}; //struct 구조체 키워드를 뺴먹으면 컴파일 오류가 난다. 

    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);

    student2 st2 = {'B',200,'B'}; //typedef 키워드를 사용했으므로 struct키워드를 사용 안해도 된다.

    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n",st2.grade);

    student2 st3;

    st3 = st2; //구조치환 예시

    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);  //st2의 값들이 전부 st3로 옮겨졌다.

    /* equality test */
    /*
    if(st3 ==st2)
        printf("equal\n");
    else
    printf("not equal\n");
    */               
   // 위의 동등성 체크는 불가능하다. 일일히 검사 해야한다.

   return 0;


}