#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(0));
	int a = rand() % 100 + 1;
	int n = 0;
	int num = 0;

	printf("我想了一个一百以内的整数，你来猜一猜吧！\n", num);

	while (num != a) {

		scanf("%d", &num);
		n ++;

		if (num > a) {
			printf("似乎大了一点呢，再猜猜吧!\n");
		} else if (num < a) {
			printf("还可以再大一点呢！\n");
		}
	};
	printf("哇，对了呢！\n一共猜了%d次……\n不愧是你！", n);

	return 0;
}