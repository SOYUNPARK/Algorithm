#include "code10_2.h"
#include <ctime>
using namespace std;

int whatIsNumber() {
	printf("0부터 9까지의 숫자를 입력하세요\n");
	int i = 1;

	srand(time(NULL));
	int num = rand() % 10;

	while (1) {

		int guess;

		printf("[%d번째 도전] : ", i);
		scanf("%d", &guess);
		if (guess > num) {
			printf("%d보다 작습니다.\n", guess);
		}
		else if (guess < num) {
			printf("%d보다 큽니다.\n", guess);
		}
		else {
			printf("정답입니당! %d번째 만에 맞췄네염~~!\n", i);
			break;
		}
		i++;
	
	}


	return 0;
}