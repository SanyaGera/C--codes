#include<iostream>
using namespace std;
void LeapOrNot(int year){
	if(year%4==0 && year%100!=0){
		cout<<"It is a leap year"<<endl;
		return ;
	}
	if (year%400==0 && year%100==0){
		cout<<"It is a leap year"<<endl;
		
	}
	else{
		cout<<"Its not a leap year"<<endl;
	}
}
int main(){
	int y;
	cout<<"enter the year"<<endl;
	cin>>y;
	LeapOrNot(y);
}
