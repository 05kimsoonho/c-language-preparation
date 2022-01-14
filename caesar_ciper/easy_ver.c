#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char value[100] = { 0, };
    int key, choice, i;

    printf("평문 또는 암호문 입력 : "); 
    fgets(value, 100, stdin);
    printf("Key 값 : "); scanf("%d", &key);
    printf("1. 암호화 2. 복호화 선택 :  "); 
    scanf("%d", &choice);

    if (choice == 2) key = -key;
    for (i = 0; i < strlen(value); i++) {
        if (value[i] >= 'A' && value[i] <= 'Z') {
            value[i] -= 'A';
            if (value[i] + key < 0) {
                value[i] += 26;
            }
            value[i] = (value[i] + key) % 26;
            value[i] += 'A';
        }
        if (value[i] >= 'a' && value[i] <= 'z') {
            value[i] -= 'a';
            if (value[i] + key < 0) {
                value[i] += 26;
            }
            value[i] = (value[i] + key) % 26;
            value[i] += 'a';
        }
    }
    printf("%s\n", value);
    return 0;
}