//Seán COMERFORD 15485892
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>
using namespace std;
void roll(int &d){
	d = rand() % 6 + 1;
}

int main() {
    srand(time(NULL));
    int r1, r2, rolls, total;
    cout << "How many times would you like the dice to roll?" << endl;
    cin >> rolls;
    cout <<"\nYou have selected " << rolls << " rolls of the 2 die, okay." << endl;
    double freq[] = {0,0,0,0,0,0,0,0,0,0,0,0};
    for(int i =0; i<rolls;i++){
	roll(r1);
	roll(r2);
	total = r1+r2;
	freq[total-2]++; 	
    }
    for(int i =0; i< 12;i++){
	cout << i+1 << ":" << (freq[i]/rolls)*100 << "%" << endl;
    }

	
}
