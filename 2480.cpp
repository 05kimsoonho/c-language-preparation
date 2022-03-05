#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//3개 주사위의 나온 눈이 주어질 때, 상금을 계산하는 프로그램을 작성 하시오.
/*
* 세가지의 수를 비교할 수 있어야 하고 
* 경우의 수마다 처분을 달리 할 수 있어야 한다
*/
int main() {
	int o, t, th;//첫번째, 두번째, 세번째 주사위값을 선언해 줍니다
    scanf("%d %d %d", &o, &t, &th);//첫번째, 두번째, 세번째 주사위 값을 입력받아 줍니다
    if (o == t && t == th) 
        printf("%d\n", 10000 + o * 1000);//첫번째, 두번째가 같고 두번째, 세번째가 같을 시에 10,000원+(같은 눈)*1,000
    else if (o == t) printf("%d\n", 1000 + o * 100);//첫번째, 두번째만 같을 시에 1,000원+(같은 눈)*100
    else if (t == th) printf("%d\n", 1000 + t * 100);//두번째, 세번째만 같을 시에 1,000원+(같은 눈)*100
    else if (th == o) printf("%d\n", 1000 + th * 100);//세번째, 첫번째만 같을 시에 1,000원+(같은 눈)*100
    else {//위에 전부 해당하지 않을 경우
        if (o > t && o > th) printf("%d\n", o * 100);//첫번째가 가장 크다면 첫번째 눈*100
        else {//다른 경우
            if (t > th) printf("%d\n", t * 100);//두번째가 가장 크다면 두번째 눈*100
            else printf("%d\n", th * 100);//세번째가 가장 크다면 세번째 눈*100
        }
    }
    return 0;
}