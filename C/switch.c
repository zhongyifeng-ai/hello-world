#include <stdio.h>

int main() {
	int type = 0;

	scanf("%d", &type);

	switch (type) {
		case 1:
			printf("Good moring!\n");
			break;
		case 2:
			printf("Good afternoon!\n");
			break;
		case 3:
			printf("Good evening!\n");
			break;
		default:
			break;
	}

	return 0;
}