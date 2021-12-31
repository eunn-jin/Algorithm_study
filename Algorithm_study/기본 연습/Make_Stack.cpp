#include <iostream>
#include <string>

using namespace std;
//<B_10828>
struct Stack {
	int data[10000];
	int size;

	Stack() {
		size = 0;
	}

	void push(int num) {
		data[size] = num;
		size += 1;
	}

	bool empty() {
		if (size == 0) {
			return 1;	//true
		}
		else {
			return 0;	//false
		}
	}

	int pop() {
		if (empty()) {
			return -1;
		}
		else {
			size -= 1;
			return data[size];
		}
	}

	int print_size() {
		return size;
	}

	int top() {
		if (empty()) {
			return -1;
		}
		else {
			return data[size - 1];
		}
	}
};

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	Stack s;

	while (n--) {
		string cmd;
		cin >> cmd;

		if (cmd == "push") {
			int num;
			cin >> num;
			s.push(num);
		}
		else if (cmd == "pop") {
			cout << s.pop() << "\n";
		}
		else if (cmd == "size") {
			cout << s.print_size() << "\n";
		}
		else if (cmd == "empty") {
			cout << s.empty() << "\n";
		}
		else if (cmd == "top") {
			cout << s.top() << "\n";
		}
		else { ; }
	}

	return 0;
}