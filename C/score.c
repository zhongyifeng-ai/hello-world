#include <stdio.h>

int main() {
	const int PASS = 60;
	int score;

	printf("���������ĳɼ���");
	scanf("%d", &score);
	printf("\n���ĳɼ��ǣ�%d\n\n", score);

	if (score > PASS)
		printf("ף�أ����ĳɼ���ͨ����\n");
	else
		printf("���ź������ĳɼ�δͨ����\n");

	printf("�ټ���");

	return 0;
}