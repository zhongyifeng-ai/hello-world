#include <stdio.h>

int main() {
	int a, b;

	printf("����������������");
	scanf("%d %d", &a, &b);

	int max = 0;
	if (a > b) {
		max = a;
	} else {
		max = b;
	}

	printf("�Ƚϴ�����ǣ�%d", max);

	return 0;

}