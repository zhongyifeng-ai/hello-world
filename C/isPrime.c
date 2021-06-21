#include <stdio.h>

int main() {
	int x = 2;  //数字
	int count = 0; //计数变量

	for ( count; count < 50; x++) {
		int i;
		int isPrime = 1;
		for (i = 2; i < x; i ++) {
			if ( x % i == 0) {
				isPrime = 0;
				break;
			}
		}
		if ( isPrime ) {
			printf("%d ", x);
			count ++;
		}
	}
	printf("\n%d", count);

	return 0;
}