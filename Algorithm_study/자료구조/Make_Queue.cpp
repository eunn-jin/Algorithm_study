#include <iostream>
#include <string>

using namespace std;
//<B_10845>
struct Queue {
	int data[10000];
	int begin, end;

	Queue() {
		begin = 0;
		end = 0;
	}

	void push(int n) {
		data[end] = n;
		end += 1;
	}

	bool empty() {
		if (begin == end) {
			return true; //queue가 비어있음
		}
		else {
			return false;
		}
	}

	int pop() {
		if (empty()) {
			return -1;
		}
		else {
			begin += 1;
			return data[begin - 1];
		}
	}

	int size() {
		return end - begin;
	}

	int front() {
		if (end == begin) return -1;
		return data[begin];
	}

	int back() {
		if (end == begin) return -1;
		return data[end - 1];
	}
};

int main()
{
	int n;
	cin >> n;

	Queue q;

	while (n--) {
		string cmd;
		cin >> cmd;

		if (cmd == "push") {
			int num;
			cin >> num;
			q.push(num);
		}
		else if (cmd == "pop") {
			printf("%d\n", q.pop());
		}
		else if (cmd == "size") {
			printf("%d\n", q.size());
		}
		else if (cmd == "empty") {
			printf("%d\n", q.empty());
		}
		else if (cmd == "front") {
			printf("%d\n", q.front());
		}
		else if (cmd == "back") {
			printf("%d\n", q.back());
		}
	}

	return 0;
}