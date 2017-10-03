//Seán COMERFORD 15485892
#include <iostream>
using namespace std;
void my_swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;

}

int main()
{
	int a, b;
	cout << "Please enter two numbers: " << endl;
	cin >> a >> b;
	cout << "\nYour numbers are: a-" << a << " and b-" << b << endl;
	my_swap(a,b);
	cout << "Now the numbers have swapped: a-" << a << " and b-" << b << endl;
}
