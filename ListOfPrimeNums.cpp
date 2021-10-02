//Question
//Write a program to print all prime number in between 1 to 100.
//Solution
#include<iostream>
#include<cmath>

using namespace std;
int isPrime(int n){
	int i;
	if(n==1){
		return false;
	}
	for(i=2;i<=sqrt(n);i++){
		 
		 if(n%i==0){
			return false;
	}
	

	}
	
	return true;
}
int main(){
	int i;
	cout<<"The list of prime numbers between 1 to 100 is : "<<endl;
	for(i=1;i<=100;i++){
		
		if(isPrime(i)==true){
			cout<<i<<endl;
		}
	}

	return 0;
	
    
}
