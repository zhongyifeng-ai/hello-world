#include <stdio.h>

int main() {
	int a, b;

	printf("请输入两个整数：");
	scanf("%d %d", &a, &b);

	int max = 0;
	if (a > b) {
		max = a;
	} else {
		max = b;
	}

	printf("比较大的数是：%d", max);

	return 0;

}