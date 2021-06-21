#include <stdio.h>

int main() {
	int x;
	int exit = 0;
	int one, two, five;

	scanf( "%d", &x);

	printf("以下方案可凑成%d元：\n", x);
	printf("1角 2角 5角\n");

	for ( one = 1; one < x * 10; one ++) {
		for ( two = 1; two < x * 10 / 2; two ++) {
			for ( five = 1; five < x * 10 / 5; five ++) {
				if ( one + two * 2 + five * 5 == x * 10) {
					printf(" %d   %d   %d\n", x, one, two, five);
					exit = 1;
					break;
				}
			}
			if ( exit ) {
				break;
			}
		}
		if (exit) {
			break;
		}
	}

	return 0;
}