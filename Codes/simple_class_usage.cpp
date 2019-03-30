#include <iostream>
#include <string>
using namespace std;

class BankAccount{
	private:
	 string depositorName;
	 string accountNumber;
	 double balanceValue; 
	
	public:
		BankAccount(){
			depositorName = "No depositor name given \n";
			accountNumber = "No account number given \n";
			balanceValue = 0;
		}
		~BankAccount(){};
		BankAccount(string name, string number, double balance = 0){ // contructur method
			depositorName = name;
			accountNumber = number;
			balanceValue = balance;
		}
		void getInfo(){
			cout << depositorName << endl;
			cout << accountNumber << endl;
			cout << balanceValue << "$" << endl;
		}
		void depose(double amount){
			balanceValue += amount;
			cout << "Your current balance: " << balanceValue << "$";
		}
		void withDraw(double amount){
			balanceValue -= amount;
			cout << "Your current balance: " << balanceValue << "$";
		}
	};

int main(void){
	int option = 0;
	double amount;
	BankAccount logio {"eskok", "1231412", 54232};
	cout << "Please choose option:\n 1. Display account informations\n2. Depose \n3. Withdraw\n 0. Quit\n";
	cin >> option;

	while(option){
		switch(option){
			case 1:
				logio.getInfo();
				break;
			case 2:
				cout << "Please enter depose amount: ";
				cin >> amount;
				logio.depose(amount);
				break;
			case 3:
				cout << "Please enter withdraw amount: ";
				cin >> amount;
				logio.withDraw(amount);
				break;
			default: break; 
		}
		cout << "\nPlease choose option:\n 1. Display account informations\n2. Depose \n3. Withdraw\n 0. Quit\n";		
		cin >> option;
	}
}
