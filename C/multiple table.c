#include <stdio.h>

int main() {

	int b = 1, n = 1;
	int ret = 1;

	printf("请输入一个正整数来获取乘法口诀表吧！\n按回车键结束...\n");
	scanf("%d", &n);

	printf("为您生成的乘法口诀表如下：\n");

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
