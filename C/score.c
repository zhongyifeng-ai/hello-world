#include <stdio.h>

int main() {
	const int PASS = 60;
	int score;

	printf("请输入您的成绩：");
	scanf("%d", &score);
	printf("\n您的成绩是：%d\n\n", score);

	if (score > PASS)
		printf("祝贺，您的成绩已通过！\n");
	else
		printf("很遗憾，您的成绩未通过！\n");

	printf("再见！");

	return 0;
}