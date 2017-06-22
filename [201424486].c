#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	int input, a;
	int draw = 0, win = 0;

	while (1) {
		printf("바위는 1, 가위는 2, 보는 3: ");
		scanf_s("%d", &input);

		srand((int)time(NULL));
		a = rand() % ((3 - 1) + 1) + 1;

		//비겼을 때
		if (input == a) {

			if (a == 1) {
				printf("당신은 바위, 컴퓨터는 바위 선택, 비겼습니다.");
				draw++;
			}

			else if (a == 2) {
				printf("당신은 가위, 컴퓨터는 가위 선택, 비겼습니다.");
				draw++;
			}

			else {
				printf("당신은 보자기, 컴퓨터는 보자기 선택, 비겼습니다.");
				draw++;
			}
		}

		//이겼을 때
		else if (input > a) {

			if (input == 1 && a == 2) {
				printf("당신은 바위, 컴퓨터는 가위 선택, 이겼습니다.");
				win++;
			}

			else if (input == 2 && a == 3) {
				printf("당신은 가위, 컴퓨터는 보자기 선택, 이겼습니다.");
				win++;
			}

			else {
				printf("당신은 보자기, 컴퓨터는 바위 선택, 이겼습니다.");
				win++;
			}
		}


		//졌을 때
		else {

			if (input == 1 && a == 3) {
				printf("당신은 바위, 컴퓨터는 보자기 선택, 졌습니다.");
				break;
			}

			else if (input == 2 && a == 1) {
				printf("당신은 가위, 컴퓨터는 바위 선택, 졌습니다.");
				break;
			}

			else {
				printf("당신은 보자기, 컴퓨터는 가위 선택, 졌습니다.");
				break;
			}
		}

		printf("\n\n");
	}

	printf("\n\n");
	printf("게임의 결과 : %d승, %d무\n", win, draw);
	return 0;
}
