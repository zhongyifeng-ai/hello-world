#include <stdio.h>

int main() {

	int b = 1, n = 1;
	int ret = 1;

	printf("������һ������������ȡ�˷��ھ���ɣ�\n���س�������...\n");
	scanf("%d", &n);

	printf("Ϊ�����ɵĳ˷��ھ������£�\n");

	while ( b <= n ) {
		int a = 1;
		while ( a <= b ) {
			ret = a * b;
			printf("%d*%d=%d", a, b, ret);

			if ( a == b ) {
				printf("\n");
			} else {
				int cnt = 0;
				do {
					ret /= 10;
					cnt ++;
				} while ( ret > 0 );
				cnt = 4 - cnt;
				for ( cnt; cnt > 0; cnt --) {
					printf(" ");
				}
			}
			a ++;
		}
		b ++;
	}

	return 0;
}
