#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* �� 10���� �Է¹��� ��, �̸� 42�� ���� �������� ���Ѵ�. �� ���� ���� �ٸ� ���� �� �� �ִ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
int main(void) {

    int input, result = 0;//���� ���� ���� 
    int remain[10];//�迭 ���� ����

    for (int i = 0; i < 10; i++) {//10�� ������ ��
        scanf("%d", &input);//���� �Է� ����
        remain[i] = (input % 42);//for���� ����ġ�� ����Ͽ� ���������� �Էµǰ� ��
    }

    for (int i = 0; i < 10; i++) {//10�� ������ ��
        int count = 0; // �ʱ�ȭ
        for (int j = i + 1; j < 10; j++) { // ���� ���� ���� ���
            if (remain[i] == remain[j]) count++;//�迭 �ȿ� �ִ� ���� ���Ͽ� ���ڸ� ����
        }
        if (count == 0) result++; // 42�� ����� ��� 0�̶�� ���� ó��
    }

    printf("%d", result);//���� ���
}