#include "code10_2.h"
#include <ctime>
using namespace std;

int whatIsNumber() {
	printf("0���� 9������ ���ڸ� �Է��ϼ���\n");
	int i = 1;

	srand(time(NULL));
	int num = rand() % 10;

	while (1) {

		int guess;

		printf("[%d��° ����] : ", i);
		scanf("%d", &guess);
		if (guess > num) {
			printf("%d���� �۽��ϴ�.\n", guess);
		}
		else if (guess < num) {
			printf("%d���� Ů�ϴ�.\n", guess);
		}
		else {
			printf("�����Դϴ�! %d��° ���� ����׿�~~!\n", i);
			break;
		}
		i++;
	
	}


	return 0;
}