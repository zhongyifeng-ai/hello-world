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

//	{
//		// test isPrime()...
//		int n;
//		scanf("%d", &n);
//		printf("%d\n", isPrime(n));
//	}

	int a[20];
	int i;
	int cnt = 0;
	int prime;
	for ( i = 1 ; cnt < 20; i++) {
		if ( isPrime(i)) {
			a[cnt++] = i;
		}
	}

	{
		int i;
		for (i = 0; i < cnt; i ++) {
			printf("%d\t", a[i]);
		}
	}
	return 0;
}