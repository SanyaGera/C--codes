//Question
//Write a program to print the sum of two numbers entered by user by defining your own function.
//Solution
#include<iostream>
#include<cmath>

using namespace std;
int sum(int a,int b){
	int c;
	c=a+b;
	return c;
}
int main(){
	int i,j,k;
	cout<<"Enter your first Number"<<endl;
	cin>>i;
	cout<<"Enter your second number"<<endl;
	cin>>j;
	cout<<"The sum of the two number is : "<<sum(i,j);
	

	return 0;
	
    
}
