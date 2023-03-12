#include<iostream>
using namespace std;

class Largest{
	private :
		int num1,num2,num3;
	public :
		void input(){
			cout<<"Enter First Number : ";
			cin>>num1;
			cout<<"Enter Second Number : ";
			cin>>num2;
			cout<<"Enter Third Number : ";
			cin>>num3;
		}
		int output(){
			int large;
			if(num1>num2){
				if(num1>num3){
					large=num1;
				}
				else{
					large=num3;
				}
			}
			else {
				if(num2>num3){
					large=num2;
				}
				else{
					large=num3;
				}
				
			}
			return large;
		}
};

int main()
{
	Largest obj;
	obj.input();
	int max=obj.output();
	cout<<"Max Value is : "<<max;
}
