#include <iostream>
#include <string>

using namespace std;
//<B_9012>
string valid(string ps)
{
	int cnt = 0;
	for (int i = 0; i < ps.size(); i++) {
		if (ps[i] == '(') {
			cnt += 1;
		}
		else if (ps[i] == ')') {
			cnt -= 1;
		}
		else { return "ERROR"; }

		if (cnt < 0) {
			return "NO";
		}
	}

	if (cnt == 0) {
		return "YES";
	}
	else {
		return "NO";
	}
}

int main()
{
	int n;
	cin >> n;
	
	while (n--) {
		string ps;
		cin >> ps;
		cout << valid(ps) << '\n';
	}

	return 0;
}