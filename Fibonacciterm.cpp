//Question
//Using recursion, define a function to know nth term of a Fibonacci series.
//Solution
#include<iostream>
#include<cmath>

using namespace std;
int Fibonacci(int n){
	if(n==1){
		return 0;
	}
	if(n==2){
		return 1;
	}
	return Fibonacci(n-1)+Fibonacci(n-2);
}
int main(){
	int a;
	cout<<"Enter your number"<<endl;
	cin>>a;
	cout<<"The Fibonacci term is "<<Fibonacci(a);
	return 0;    
}
