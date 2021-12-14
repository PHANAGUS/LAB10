#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,rate,pay,balance,inrt;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	balance = loan;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	for(int i=1;;i++)
	{
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i;
		cout << setw(13) << left << balance;
		inrt = balance*(rate/100);
		cout << setw(13) << left << inrt;
		balance += inrt;
		cout << setw(13) << left << balance;
		if(balance <= pay)
		{
			pay = balance;
		}
		cout << setw(13) << left << pay;
		balance -= pay;
		cout << setw(13) << left << balance;
		cout << "\n";
		if(balance == 0) break;
	}
	
	return 0;
}
