#include <stdio.h>

int main() {

	//��ȡˮ�ɻ�����λ��
	int n = 3;
	int a = 1;
	int b = 1;
	printf("���������2����������\n");
	scanf("%d", &n);

	//ȷ��ˮ�ɻ���������
	while ( a < n ) {
		b *= 10;
		a ++;
	}

	int g = b;
	int cnt = 0;

	do {
		int c, d;	//������λΪ n ������
		int sum = 0;
		d = g;
		while ( d > 0 ) {	//���������λ���ݵĺ�
			c = d % 10;
			d /= 10;	//��ȡ������λ�ϵ���
			int e = 1;
			int f = c;
			while ( e < n) {	//���㵥����λ����
				f *= c;
				e ++;
			}
			sum += f;
		}
		if ( sum == g ) {	//�ж����� g �Ƿ�Ϊˮ�ɻ���
			cnt ++;
			if ( cnt == 1 ) {
				printf("%dλ����ˮ�ɻ����У�\n", n);
			}
			printf("%d\n", g);
		}
		g ++;
	} while ( g < b * 10);

	return 0;

}