//Seán COMERFORD 15485892
#include <iostream>
using namespace std;
int main()
{	
	cout << "Please insert customer information" << endl;
	int account;
	int startbalance;
	int totalcharge;
	int totalcredits;
	int totalLimit;
	int newBalance;
	while(true) {
		cin >> account ;
				if(account==-1){	
		break;
	}
	


cin >> startbalance >> totalcharge >> totalcredits >> 			totalLimit;
		if(account==-1){	
		break;
	}
		newBalance = startbalance + totalcharge - totalcredits;
		if(newBalance>totalLimit){
			cout << "Credit limit exceeded\n" ;
					cout << "Account: " << account << "\nStart Balance:" << startbalance << "\nTotal Charge:" << totalcharge << "\nTotal Credits:" << totalcredits << "\nTotal Limit" << totalLimit << "\nNew Balance:" << newBalance << endl;
		}
		else{
			cout << "Account: " << account << "\nStart Balance:" << startbalance << "\nTotal Charge:" << totalcharge << "\nTotal Credits:" << totalcredits << "\nTotal Limit" << totalLimit << "\nNew Balance:" << newBalance << endl; 		
		}
	}

}
