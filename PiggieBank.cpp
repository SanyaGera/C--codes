//Question
//Suppose you have a Piggie Bank with an initial amount of $50 and you have to add some more amount to it. Create a class 'AddAmount' with a data member named 'amount' with an initial value of $50. Now make two constructors of this class as follows:
//1 - without any parameter - no amount will be added to the Piggie Bank
//2 - having a parameter which is the amount that will be added to the Piggie Bank
//Create an object of the 'AddAmount' class and display the final amount in the Piggie Bank.
//Solution
#include<iostream>
#include<string>
using namespace std;
class AddAmount{
	int amount;
	public:
		AddAmount(){
			amount=50;
			
		}
		AddAmount(int a){
			amount=50;
			amount+=a;
		}
		void showAmount(void){
			cout<<"The total amount in the Piggie Bank is "<<amount<<endl;
		}
	
};
int main(){
    AddAmount a1;
    AddAmount a2(60);
    a1.showAmount();
    a2.showAmount();
    
    return 0;
}
