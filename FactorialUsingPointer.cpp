//Question
//Write a program to find the factorial of a number using pointers.
//Solution
#include<iostream>
using namespace std;
int FactorialUsingPointer(int num){
	int fac;
	if(num<=1){
		return 1;
	}
	fac=num*FactorialUsingPointer(num-1);
	return fac;
}
int main(){
	int a,*ptr;
	cout<<"Enter your number "<<endl;  //&a=ptr
	cin>>a;
	ptr=&a;
	int fac=FactorialUsingPointer(*ptr);
	cout<<"The factorial of the given number using pointer is "<<fac<<endl;
	
}
