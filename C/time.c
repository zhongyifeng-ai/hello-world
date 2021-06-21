#include <stdio.h>

int main() {

	int hour1, minute1;
	int hour2, minute2;

	printf("请输入时间1的小时数和分钟数：\n");
	scanf( "%d %d", &hour1, &minute1);

	printf("请输入时间2的小时数和分钟数：\n");
	scanf( "%d %d", &hour2, &minute2);

	int time1 = hour1 * 60 + minute1;
	int time2 = hour2 * 60 + minute2;

	printf("%d\n%d\n", time1, time2);

	int t = time2 - time1;

	printf("时间差为：%d小时%d分钟", t / 60, t % 60);

	return 0;
}