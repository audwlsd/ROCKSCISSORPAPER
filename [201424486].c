#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	int input, a;
	int draw = 0, win = 0;

	while (1) {
		printf("������ 1, ������ 2, ���� 3: ");
		scanf_s("%d", &input);

		srand((int)time(NULL));
		a = rand() % ((3 - 1) + 1) + 1;

		//����� ��
		if (input == a) {

			if (a == 1) {
				printf("����� ����, ��ǻ�ʹ� ���� ����, �����ϴ�.");
				draw++;
			}

			else if (a == 2) {
				printf("����� ����, ��ǻ�ʹ� ���� ����, �����ϴ�.");
				draw++;
			}

			else {
				printf("����� ���ڱ�, ��ǻ�ʹ� ���ڱ� ����, �����ϴ�.");
				draw++;
			}
		}

		//�̰��� ��
		else if (input > a) {

			if (input == 1 && a == 2) {
				printf("����� ����, ��ǻ�ʹ� ���� ����, �̰���ϴ�.");
				win++;
			}

			else if (input == 2 && a == 3) {
				printf("����� ����, ��ǻ�ʹ� ���ڱ� ����, �̰���ϴ�.");
				win++;
			}

			else {
				printf("����� ���ڱ�, ��ǻ�ʹ� ���� ����, �̰���ϴ�.");
				win++;
			}
		}


		//���� ��
		else {

			if (input == 1 && a == 3) {
				printf("����� ����, ��ǻ�ʹ� ���ڱ� ����, �����ϴ�.");
				break;
			}

			else if (input == 2 && a == 1) {
				printf("����� ����, ��ǻ�ʹ� ���� ����, �����ϴ�.");
				break;
			}

			else {
				printf("����� ���ڱ�, ��ǻ�ʹ� ���� ����, �����ϴ�.");
				break;
			}
		}

		printf("\n\n");
	}

	printf("\n\n");
	printf("������ ��� : %d��, %d��\n", win, draw);
	return 0;
}
