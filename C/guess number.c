#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(0));
	int a = rand() % 100 + 1;
	int n = 0;
	int num = 0;

	printf("������һ��һ�����ڵ�������������һ�°ɣ�\n", num);

	while (num != a) {

		scanf("%d", &num);
		n ++;

		if (num > a) {
			printf("�ƺ�����һ���أ��ٲ²°�!\n");
		} else if (num < a) {
			printf("�������ٴ�һ���أ�\n");
		}
	};
	printf("�ۣ������أ�\nһ������%d�Ρ���\n�������㣡", n);

	return 0;
}