#include <stdio.h>

int main() {
	printf("��ֱ�������ߵ�Ӣ������Ӣ������");

	double foot = 0;
	double inch = 0;

	scanf("%lf %lf", &foot, &inch);

	printf("�����%f�ס�\n", ((foot + inch / 12) * 0.3048));

	return 0;
}