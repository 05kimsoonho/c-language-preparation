#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

    int input, score, sum;
    char test[80];

    scanf("%d", &input);

    for (int i = 0; i < input; i++) {//�Է� ���� Ƚ����ŭ �۵�
        sum = 0;//���� �ʱ�ȭ
        score = 1;//���� �ʱ� ����
        scanf("%s", test);//OX�Է� ����
        for (int j = 0; j < strlen(test); j++) {//strlen ���ڿ� ���� �����ؼ� �Է� ���� Ƚ����ŭ �۵�
            if (test[j] == 'O') {//O�� ���
                sum += score;//����� �Ϳ� ������ �߰�
                score++;//�������� ����� ���� �߰�
            }
            if (test[j] == 'X')  score = 1;//X�� ������ score 1�� �ʱ�ȭ
        }
        printf("%d\n", sum);//���� ���� ���
    }
}