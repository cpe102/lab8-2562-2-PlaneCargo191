#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main()
{	
	float loan, rate, payment, interest, total, balance;
	int year = 0;

	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	while (loan > 0)
	{
		interest=loan*(rate/100);
		total=loan+interest;
		if (total<payment) payment=total;
		balance=total-payment;

		cout << fixed << setprecision(2); 
		cout << setw(13) << left << ++year; 
		cout << setw(13) << left << loan;
		cout << setw(13) << left << interest;
		cout << setw(13) << left << total;
		cout << setw(13) << left << payment;
		cout << setw(13) << left << balance;
		cout << "\n";
		
		loan=balance;
	}
	return 0;
}
