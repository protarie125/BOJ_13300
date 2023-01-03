#include <iostream>
#include <vector>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	auto ma = vi(6);
	auto fm = vi(6);
	while (0 < (n--)) {
		int s, g;
		cin >> s >> g;
		if (0 == s) {
			++fm[g - 1];
		}
		else if (1 == s) {
			++ma[g - 1];
		}
	}

	auto ans = int{ 0 };
	for (const auto& x : ma) {
		ans += (x / k) + (0 < x % k ? 1 : 0);
	}
	for (const auto& x : fm) {
		ans += (x / k) + (0 < x % k ? 1 : 0);
	}

	cout << ans;

	return 0;
}