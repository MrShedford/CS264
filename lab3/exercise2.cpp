//Sean Comerford 15485892
#include <iostream>

using namespace std;

int main() {

	int max = 10, i = 0;
	double* ar = new double[max];
	double n;

	cout << "Input some doubles to print backwards. To exit, type -1" << endl;

	while (true) {
		cin >> n;

		if (n == -1) {
			break;
		}

		if (i < max) {
			ar[i] = n;
			i++;
		} else {
			max += 10;
			double* temp = new double[max];

			for (int j = 0; j < i; j++) {
				temp[j] = ar[j];
			}

			delete [] ar;
			ar = temp;

			ar[i] = n;
			i++;
		}
	}

	for (int j = i - 1; j >= 0; j--) {
		cout << ar[j] << " ";
	}

	cout << endl;

	return 0;
}
