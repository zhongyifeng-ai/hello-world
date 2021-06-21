#include <stdio.h>

int isPrime(int number) {
	int prime = 1;
	int i;
	if ( number == 1) {
		prime = 0;
	}
	for ( i = 2; i < number; i ++) {
		if (number % i == 0) {
			prime = 0;
			break;
		}
	}

	return prime;
}

int main() {

	int const n = 200;
	int a[n];
//
//	{
//		int i;
//		for ( i = 0; i < n; i++) {
//			a[i] = 0;
//		}
//	}

	int i;
	int cnt = 0;
	for ( i = 1; cnt < n; i ++ ) {
		if (isPrime(i)) {
			a[cnt ++] = i;
		}
	}

	{
		int i;
		for (i = 0; i < cnt; i++) {
			printf("%d ", a[i]);

		}

	}

	return 0;
}