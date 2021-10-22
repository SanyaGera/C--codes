//Problem
//Define a function named 'perfect' that determines if parameter number is a perfect number. Use this function in a program that determines and prints all the perfect numbers 
//between 1 and 1000.
//[An integer number is said to be "perfect number" if its factors, including 1(but not the number itself), sum to the number. E.g., 6 is a perfect number because 6=1+2+3].
//Solution
#include<iostream>
#include<cmath>

using namespace std;
int Perfect(int n){
	int i,sum;
	sum=0;
    for(i=1;i<n;i++){
    	if(n%i==0){
    		sum+=i;
		}
	}
	if(n==sum){
		return true;
	}
	return false;
}
int main(){
	int a;
	for(a=1;a<=1000;a++){
		if(Perfect(a)==true){
			cout<<a<<endl;
		}
	}

	return 0;    
}
