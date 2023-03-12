#include<iostream>
#include<string>
using namespace std;
class Bank_Account{
	private :
		string name;
		int account_num;
		string type_of_acc;
		int balance;
		string username="Ashish";
		string password="A@SH123";
	public :
		void initial(){
			cout<<"Enter Account Holder Name : ";
			cin>>name;
			cout<<"Enter Account Number : ";
			cin>>account_num;
			cout<<"Enter Type of Account : ";
			cin>>type_of_acc;
			cout<<"Enter Account Balance : ";
			cin>>balance;
		}
		void deposit(int amt)
		{
			balance=balance+amt;
			cout<<amt<<" has been credited to your account. The available balance is "<<balance<<endl;
		}
		void withdraw(int amt){
			if(amt>balance){
				cout<<"Insuficient Balance "<<endl;
			}
			else{
				balance=balance-amt;
				cout<<amt<<" has debited from your account. The available balance is "<<balance<<endl;
			}
		}
		void display(){
			cout<<"Account Holder : "<<name<<endl;
			cout<<"Available Balance : "<<balance<<endl;

		}
		bool match(string user,string pass){
            if(user==username && pass==password){
                return true;
            }
            else{
                return false;
            }
		}
};
int main(){
    string user;
    string pass;
	Bank_Account UBI;
	cout<<"Enter Username : ";
	cin>>user;
	cout<<"Enter Password : ";
	cin>>pass;
	if(UBI.match(user,pass)){
        UBI.initial();
        UBI.deposit(100);
        UBI.withdraw(200);
        UBI.display();
	}
	else{
        cout<<"Invalid Username and Password...Retry..."<<endl;
        main();
	}
}
