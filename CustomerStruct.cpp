//Question
//Write a structure to store the name, account number and balance of customers (more than 10) and store their information.
//1 - Write a function to print the names of all the customers having balance less than $200.
//2 - Write a function to add $100 in the balance of all the customers having more than $1000 in their balance and then print the incremented value of their balance.
//Solution
#include<iostream>
#include<string>
using namespace std;
struct Customer{
	string name;
	int AccountNo;
	int balance;
};
void Balanceless200(Customer C[], int l){
	cout<<"Customers whose balance is less than 200 dollars :"<<endl;
	for(int i=0;i<l;i++){
		 if(C[i].balance<200){
		 	cout<<C[i].name<<endl;
		 }
	}
}
void Add100(Customer C[], int l){
	cout<<"List of incremented balance "<<endl;
	for(int i=0;i<l;i++){
		if(C[i].balance>1000){
			C[i].balance+=100;
			cout<<C[i].name<<" : "<<C[i].balance<<endl;
		}
	}

}

int main(){
	int l;
	cout<<"Enter the number of Customers whose details you wanna enter "<<endl;
	cin>>l;
	Customer C[l];
	for(int i=0;i<l;i++){
		cout<<"Enter the name of the customer :"<<endl;
		cin>>C[i].name;
		cout<<"Enter the account number :"<<endl;
		cin>>C[i].AccountNo;
		cout<<"Enter the balance in their account :"<<endl;
		cin>>C[i].balance;
		
	}
	Balanceless200(C,l);
	Add100(C,l);
	return 0;
	
}
