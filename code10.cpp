#include "code10.h"
#include <ctime> // whatIsNumber()
using namespace std;
int decToHex() {

	char mode;
	int data;

	printf("10����->16���� ��ȯ ���α׷��̴�.\n");
	printf("10������ 16������ �ٲٷ��� [a] Ű�� ������,\n");
	printf("16������ 10������ �ٲٷ��� [b] Ű�� ��������.\n");
	printf("a�� b�� �������� : ");
	scanf("%c", &mode);

	printf("��ȯ�� ���ڸ� �Է��ϼ��� : ");	
	
	if (mode == 'a') {
		scanf("%d", &data);
		printf("10���� �� : %d --> 16���� �� : %x\n",data,data);
	
	}
	else if (mode == 'b') {
		scanf("%x", &data);
		printf("16���� �� : %x --> 10���� �� : %d\n", data, data);	
	}
	else { 
		printf("�ùٸ� Ű �Է��� �ƴմϴ�. a �Ǵ� b�� �Է��ϼ���."); 
	}
	return 0;
}

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

int getGCD() {

	int num1, num2;
	int max = 0;

	printf("����� ���� �� �������� �Է��ϼ���.\n");
	printf("�Է�1 : ");
	scanf("%d", &num1);
	printf("�Է�2 : ");
	scanf("%d", &num2);

	int data = 0;
	if (num1 > num2) {
		data = num1;
	}
	else {
		data = num2;
	}
	printf("��� : ");
	for (int i = 1; i < data; i++) {
		if (((num1%i) == 0) && ((num2%i) == 0)) {
			printf("%d ", i);
			max = i;
		}
		if ((i == num1) || (i == num2)) {
			break;
		}
	}
	printf("\n�ִ����� : %d\n", max);
	return 0;
}

int FibonacciSequence() {
	
	printf("�Ǻ���ġ ������ ���غ���\n");

	int num1 = 0;
	int num2 = 1;
	int Fibo = 0;

	for (int i = 0; i < 24; i++) {

		Fibo = num1 + num2;
		num1 = num2;
		num2 = Fibo;
		printf("%6d", Fibo);
	}
	return 0;
}