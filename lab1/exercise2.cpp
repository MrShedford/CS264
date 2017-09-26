//Seán COMERFORD 15485892
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Please enter two numbers!\n";
	cin >> a >> b;

	if(a%b==0){
		cout << a << " is a multiple of " << b << endl ;
	}
	else{
		cout << "Not multiples" << endl;
	}
	
}
