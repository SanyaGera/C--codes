//Question
//Write a program to print the factorial of a number by defining a function named 'Factorial'.
//Factorial of any number n is represented by n! and is equal to 1*2*3*....*(n-1)*n. E.g.-
//4! = 1*2*3*4 = 24
//3! = 3*2*1 = 6
//2! = 2*1 = 2
//Also,
//1! = 1
//0! = 0
//Solution
#include<iostream>
#include<cmath>

using namespace std;
int Factorial(int n){
	int fac;
	fac=1;
	if(n<=1){
		return 1;
	}
	return n*Factorial(n-1);
}
int main(){
	int a;
	cout<<"Enter your number"<<endl;
	cin>>a;
	cout<<"Factorial of your number is :"<<Factorial(a);
	return 0;  
}
