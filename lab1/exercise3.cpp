//Seán COMERFORD 15485892
#include <iostream>
using namespace std;
int main()
{
	int a;
	int digit;
	cout << "Please enter a five digit number!\n";
	cin >> a;
	
	int digit5 = a%10;
	int digit4 = a/10%10;
	int digit3 = a/100%10;
	int digit2 = a/1000%10;
	int digit1 = a/10000%10;
	cout << digit1 << "   " << digit2 << "   " << digit3 << "   " << digit4 << "   " << digit5 << endl; 
}
