//Question
//Print the average of three numbers entered by the user by creating a class named 'Average' 
//having a function to calculate and print the average without creating any object of the Average class.
//Solution
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Average{
	public:
		static void getAvg(int a,int b,int c){
			float avg=(a+b+c)/3.0;
			cout<<"The average of the three numbers are "<<avg<<endl;
			
		}
};
int main(){
	int a,b,c;
	cout<<"Enter the first number "<<endl;
	cin>>a;
	cout<<"Enter the second number "<<endl;
	cin>>b;
	cout<<"Enter the third number "<<endl;
	cin>>c;
	Average::getAvg(a, b,c);
	
	
	return 0;
}
