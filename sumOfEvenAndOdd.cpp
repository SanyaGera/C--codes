//Question
//Write a program to find the sum of the even and odd digits of the number which is given as input.
//Solution
#include<iostream>
#include<cmath>

using namespace std;
int sumOfEven(int n){
	int j,sum;
	sum=0;
	while(n!=0){
		j=n%10;
		if(j%2==0){
			sum=sum+j;
		}
		n=n/10;
	}
	return sum;
}
int sumOfOdd(int n){
	int j,sum;
	sum=0;
	while(n!=0){
		j=n%10;
		if(j%2!=0){
			sum=sum+j;
		}
		n=n/10;
	}
	return sum;
}
int main(){
	int i,j,k;
	cout<<"Enter your Number"<<endl;
	cin>>i;
	j=sumOfEven(i);
	k=sumOfOdd(i);
	cout<<"The sum of even digits of the number is : "<<j<<endl<<"The sum of odd digits of the number is : "<<k<<endl;
	

	return 0;
	
    
}
