//Seán COMERFORD 15485892
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Please enter three numbers!\n";
	cin >> a >> b >> c;
	cout << "a:" << a << ",b:" << b << ",c:" << c << "\n";
	int sum = a+b+c;
	cout << "Sum of the three numbers is: " << sum << "\n";
	int product = a*b*c;
	cout << "Product of the three numbers is: " << product << "\n";
	int d;
	if(a < b && b < c) {
	    d = a;
	}
	else {
	    if(b < a && b < c) {
		d = b;
	    }
	    else {
		d = c;
	    }
	}
	cout << "Smallest number is: " << d << endl;
}
