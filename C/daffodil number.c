#include <stdio.h>

int main() {

	int n, i, num, j, cnt;
	scanf("%d", &n);

	for ( num = 10 ^ (n - 1); num < 10 ^ n; num++ ) {
		for ( i = num; i < 10; ) {
			j = i % 10;
			cnt += j ^ n;
			i = i / 10;
		}
		if ( cnt == num ) {
			printf("%d\n", num);
		}
	}


	return 0;
}