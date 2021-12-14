//Question
//Input any number. Find the sum of the digits of the number using a recursive function.
//Solution
#include<iostream>
#include<cmath>
using namespace std;
int SumOfDigits(int n){
	if(n==0){
		return 0;
	}
	int sum=(n%10)+SumOfDigits( n/10);
	return sum;
}

int main(){
int l;
cout<<"Enter any number "<<endl;
cin>>l;
int sum=SumOfDigits( l);
cout<<"Sum of the Digits is :"<<sum;
	
}
