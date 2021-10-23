//Problem
//Write a program to print the address of a variable whose value is input from user.
//Solution
#include <iostream>
using namespace std;
int main(){
int x;
cout<<"Enter your integer"<<endl;
cin>>x;
cout<<"The address of the integer entered is "<<&x<<endl;
	return 0;
}
