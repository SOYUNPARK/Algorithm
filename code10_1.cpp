#include "code10_1.h"
using namespace std;
int  decToHex() {

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