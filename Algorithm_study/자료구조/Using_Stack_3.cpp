#include <cstdio>
#include <cstring>
#include <stack>

using namespace std;
//<B_1406>
int main()
{
	char max[600000];
	stack<char> ls, rs;
	scanf("%s", max);
	int n = strlen(max);
	for (int i = 0; i < n; i++) {
		ls.push(max[i]);
	}

	scanf("%d", &n);

	while (n--) {
		char edit;
		scanf(" %c", &edit);

		if (edit == 'L') {
			if (!ls.empty()) {
				rs.push(ls.top());
				ls.pop();
			}
		}
		else if (edit == 'D') {
			if (!rs.empty()) {
				ls.push(rs.top());
				rs.pop();
			}
		}
		else if (edit == 'B') {
			if (!ls.empty()) {
				ls.pop();
			}
		}
		else if (edit == 'P') {
			char c;
			scanf(" %c", &c);
			ls.push(c);
		}
	}

	while (!ls.empty()) {
		rs.push(ls.top());
		ls.pop();
	}

	while (!rs.empty()) {
		printf("%c", rs.top());
		rs.pop();
	}
	printf("\n");

	return 0;
}