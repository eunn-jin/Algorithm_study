#include <cstdio>

int main()
{
	//<B_2739> 구구단
	/*int n;
	scanf("%d", &n);

	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", n, i, n * i);
	}*/

	//<B_10950>
	/*int a, b, n;
	scanf("%d", &n);

	int *res = new int[n];

	for (int i = 0; i < n; i++) {
		scanf("%d%d", &a, &b);
		res[i] = a + b;
	}

	for (int i = 0; i < n; i++) {
		printf("%d\n", res[i]);
	}

	delete[] res;*/

	//<B_8393>
	//int n, res = 0;

	//scanf("%d", &n);

	//for (n; n > 0; n--) {
	//	res += n;
	//}

	//printf("%d", res);
	//printf("%d", n * (n + 1) / 2);	//방법2

	//<B_2741> 해당 코드는 속도가 느림(buffer에 저장했다가 한번에 출력하는 형태로 해야지 빨라짐)
	/*int n;

	scanf("%d", &n);

	for (int i=1; i <= n; i++) {
		printf("%d\n", i);
	}*/

}