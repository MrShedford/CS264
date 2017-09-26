//Seán COMERFORD 15485892
#include <iostream>
#include <cmath>
using namespace std;
int main () 
{
	cout << "\n2" << " 3 ";
    for (int i=2; i<5000; i++) 
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0) 
                break;
            else if (j+1 > sqrt(i)) {
                cout << i << " ";

            }

        }   

    return 0;
}
