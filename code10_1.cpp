#include "code10_1.h"
using namespace std;
int  decToHex() {

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