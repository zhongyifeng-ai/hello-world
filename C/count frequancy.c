#include <stdio.h>

int main() {

	int count [10];
	int i;
	for (i = 0; i < 10; i++) {
		count[i] = 0;
	}

	int n;
	do {
		scanf("%d", &n);
		count[n]++;
	} while ( n != -1);

	for ( i = 0; i < 10; i ++) {
		printf("����%d������%d��\n", i, count[i]);
	}

	return 0;
}