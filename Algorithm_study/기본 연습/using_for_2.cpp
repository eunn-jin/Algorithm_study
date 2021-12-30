#include <iostream>

using namespace std;

int main()
{
	
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	//<B_15552> 빠른 A+B
	/*int a, b, n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		cout << a + b << "\n";
	}*/

	//<B_2742>
	/*int n;
	cin >> n;

	for (n; n > 0; n--) {
		cout << n << "\n";
	}*/
	
	//<B_2438>
	/*int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = i; j > 0; j--) {
			cout << "*";
		}
		cout << "\n";
	}*/

	//<B_2439>
	/*int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = n; j > i; j--) {
			cout << " ";
		}
		for (int j = i; j > 0; j--) {
			cout << "*";
		}
		cout << "\n";
	}*/

}