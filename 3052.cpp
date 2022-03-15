#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* 수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.
*/
int main(void) {

    int input, result = 0;//받을 수와 갯수 
    int remain[10];//배열 공간 생성

    for (int i = 0; i < 10; i++) {//10번 돌리는 것
        scanf("%d", &input);//수를 입력 받음
        remain[i] = (input % 42);//for문의 가중치를 사용하여 순차적으로 입력되게 함
    }

    for (int i = 0; i < 10; i++) {//10번 돌리는 것
        int count = 0; // 초기화
        for (int j = i + 1; j < 10; j++) { // 서로 같은 수일 경우
            if (remain[i] == remain[j]) count++;//배열 안에 있는 수와 비교하여 숫자를 센다
        }
        if (count == 0) result++; // 42의 배수일 경우 0이라는 예외 처리
    }

    printf("%d", result);//갯수 출력
}