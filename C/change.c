# include <stdio.h>

int main() {

	const int AMOUNT = 100;  //����һ����������ֱ��ʹ��100���Ա��ں���ά����
	int price = 0;

	printf("�������Ԫ����");
	scanf("%d", &price);

	int change = AMOUNT - price;

	printf("����%dԪ��\n", change);

	return 0;
}
