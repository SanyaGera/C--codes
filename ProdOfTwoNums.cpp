//Question
//Define a function that returns the product of two numbers entered by user.
//Solution
#include<iostream>
#include<cmath>

using namespace std;
int product(int a,int b){
	int c;
	c=a*b;
	return c;
}
int main(){
	int i,j,k;
	cout<<"Enter your first Number"<<endl;
	cin>>i;
	cout<<"Enter your second number"<<endl;
	cin>>j;
	cout<<"The product of the two number is : "<<product(i,j);
	

	return 0;
	
    
}
