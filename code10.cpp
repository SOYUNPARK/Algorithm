#include "code10.h"
#include <ctime> // whatIsNumber()
using namespace std;
int decToHex() {

	char mode;
	int data;

	printf("10진수->16진수 변환 프로그램이다.\n");
	printf("10진수를 16진수로 바꾸려면 [a] 키를 누르고,\n");
	printf("16진수를 10진수로 바꾸려면 [b] 키를 누르세요.\n");
	printf("a나 b를 누르세요 : ");
	scanf("%c", &mode);

	printf("변환할 숫자를 입력하세요 : ");	
	
	if (mode == 'a') {
		scanf("%d", &data);
		printf("10진수 값 : %d --> 16진수 값 : %x\n",data,data);
	
	}
	else if (mode == 'b') {
		scanf("%x", &data);
		printf("16진수 값 : %x --> 10진수 값 : %d\n", data, data);	
	}
	else { 
		printf("올바른 키 입력이 아닙니다. a 또는 b를 입력하세요."); 
	}
	return 0;
}

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

int getGCD() {

	int num1, num2;
	int max = 0;

	printf("약수를 구할 두 정숫값을 입력하세요.\n");
	printf("입력1 : ");
	scanf("%d", &num1);
	printf("입력2 : ");
	scanf("%d", &num2);

	int data = 0;
	if (num1 > num2) {
		data = num1;
	}
	else {
		data = num2;
	}
	printf("약수 : ");
	for (int i = 1; i < data; i++) {
		if (((num1%i) == 0) && ((num2%i) == 0)) {
			printf("%d ", i);
			max = i;
		}
		if ((i == num1) || (i == num2)) {
			break;
		}
	}
	printf("\n최대공약수 : %d\n", max);
	return 0;
}

int FibonacciSequence() {
	
	printf("피보나치 수열을 구해보자\n");

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