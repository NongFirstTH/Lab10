#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double a,b,c;
	cout << "Enter initial loan: ";
	cin >> a;
	cout << "Enter interest rate per year (%): ";
	cin >> b;
	cout << "Enter amount you can pay per year: ";
	cin >> c;
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
	double pre=a,inter,pay=c,total,newb=a;
	int i = 1;
	while(newb>0){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << pre;
	inter = pre*(b/100);
	cout << setw(13) << left << inter;
	total = pre + inter;
	cout << setw(13) << left << total;
	if(total<pay){
		pay = total;
	}
	cout << setw(13) << left << pay;
	newb = total-pay;
	cout << setw(13) << left << newb;
	cout << "\n";
	pre = newb;	
	i++;
	}
	return 0;
}