#include <cstdio>

int main()
{
	//<B_9498> ���� ���ϱ�
	/*int a; 
	scanf("%d", &a); 
	printf("%c", "FFFFFFDCBAA"[a / 10]);*/

	//<B_2753> ���� ���ϱ�
	/*int a;
	
	scanf("%d", &a);

	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) {
		printf("1\n");
	}
	else {
		printf("0\n");
	}*/

	//<B_14681> ��и� ����
	/*int x, y;
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0) {
		printf("1");
	}
	else if (x < 0 && y > 0) {
		printf("2");
	}
	else if (x < 0 && y < 0) {
		printf("3");
	}
	else if (x > 0 && y < 0) {
		printf("4");
	}
	else {
		;
	}*/	//���1
	//printf("%d", x > 0 ? y > 0 ? 1 : 4 : y > 0 ? 2 : 3);	//���2
	//printf("%d", 1 + (y < 0) * 2 + (x * y < 0));	//���3

	//<B_2664> �˶��ð�
	int h, m, res_h, res_m;

	scanf("%d%d", &h, &m);

	res_h = h;
	res_m = m - 45;

	if (res_m < 0) {
		res_m += 60;
		res_h -= 1;
	}
	if (res_h < 0) {
		res_h += 24;
	}

	printf("%d %d\n", res_h, res_m);
	printf("%d %d\n", (h + 24 - (m < 45)) % 24, (m + 15) % 60);	//���2
}