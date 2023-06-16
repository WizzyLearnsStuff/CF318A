#include<iostream>

using namespace std;

int main() {
	long long int n, k;

	cin >> n >> k;

	long long int t = ((n - 1) / 2 + 1);
	cout << ((k > t) ? 2 * (k - t) : 2 * k - 1);
}
