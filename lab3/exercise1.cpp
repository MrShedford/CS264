//Sean Comerford 15485892
#include <iostream>

using namespace std;

int main() {

	cout << "Input how many numbers the sequence will contain:" << endl;

	int n;
	cin >> n;

	double ar[n];

	cout << "Input " << n << " doubles:" << endl;

	for (int i = 0; i < n; i++) {
		cin >> ar[i];
	}

	for (int i = n - 1; i >= 0; i--) {
		cout << ar[i] << " ";
	}

	cout << endl;

	return 0;
}
