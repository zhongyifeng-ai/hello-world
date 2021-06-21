#include <stdio.h>

int main() {

	//获取水仙花数的位数
	int n = 3;
	int a = 1;
	int b = 1;
	printf("请输入大于2的正整数：\n");
	scanf("%d", &n);

	//确定水仙花数的下限
	while ( a < n ) {
		b *= 10;
		a ++;
	}

	int g = b;
	int cnt = 0;

	do {
		int c, d;	//遍历数位为 n 的整数
		int sum = 0;
		d = g;
		while ( d > 0 ) {	//计算各个数位的幂的和
			c = d % 10;
			d /= 10;	//提取各个数位上的数
			int e = 1;
			int f = c;
			while ( e < n) {	//计算单个数位的幂
				f *= c;
				e ++;
			}
			sum += f;
		}
		if ( sum == g ) {	//判断整数 g 是否为水仙花数
			cnt ++;
			if ( cnt == 1 ) {
				printf("%d位数的水仙花数有：\n", n);
			}
			printf("%d\n", g);
		}
		g ++;
	} while ( g < b * 10);

	return 0;

}