#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* 26부터 시작한다. 2+6 = 8이다. 새로운 수는 68이다. 6+8 = 14이다. 새로운 수는 84이다. 8+4 = 12이다. 새로운 수는 42이다. 4+2 = 6이다. 새로운 수는 26이다.
위의 예는 4번만에 원래 수로 돌아올 수 있다. 따라서 26의 사이클의 길이는 4이다.
N이 주어졌을 때, N의 사이클의 길이를 구하는 프로그램을 작성하시오.
*/
int main() {
    int a, b, c, d = -1, result, input, count = 0;//사이클 횟수 측정을 위한 count선언 후 20에서 ++해준다

    scanf("%d", &input);
    result = input;

    while (d != result) {
        a = input / 10;//몫 구하기
        b = input % 10; // 나머지 구하기
        c = (a + b) % 10; // 몫과 나머지를 앞뒤로 합친 수 
        d = (b * 10) + c; // 새로운 수
        input = d;
        count++;
    }
    printf("%d", count);
}