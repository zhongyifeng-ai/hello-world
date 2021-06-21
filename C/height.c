#include <stdio.h>

int main() {
	printf("请分别输入身高的英尺数和英寸数：");

	double foot = 0;
	double inch = 0;

	scanf("%lf %lf", &foot, &inch);

	printf("身高是%f米。\n", ((foot + inch / 12) * 0.3048));

	return 0;
}