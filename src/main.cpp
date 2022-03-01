#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string a, op, b;
	cin >> a >> op >> b;

	auto n1 = a.length();
	auto n2 = b.length();

	if ("+" == op) {
		if (n1 == n2) {
			a[0] = '2';
			cout << a;
			return 0;
		}

		if (n1 < n2) {
			b[n2 - n1] = '1';
			cout << b;
			return 0;
		}

		if (n2 < n1) {
			a[n1 - n2] = '1';
			cout << a;
			return 0;
		}
	}
	else {
		ostringstream oss{};
		oss << '1';
		const auto& n3 = (n1 - 1) + (n2 - 1);
		for (int i = 0; i < n3; ++i) {
			oss << '0';
		}

		cout << oss.str();
	}

	return 0;
}