# include <stdio.h>

int main() {

	const int AMOUNT = 100;  //定义一个常量而非直接使用100，以便于后续维护。
	int price = 0;

	printf("请输入金额（元）：");
	scanf("%d", &price);

	int change = AMOUNT - price;

	printf("找您%d元。\n", change);

	return 0;
}
