#include <stdio.h>

int main() {

	int i = 1;
	int a, b, c;
	for ( a = i; a <= i + 3; a++ ) {
		for (b = i; b <= i + 3; b++ ) {
			for (c = i; c <= i + 3; c++ ) {
				if ( a == c | a == b | b == c) {
					continue;
				}
				printf("%d%d%d ", a, b, c);
			}
		}
	}

	return 0;
}