//Question
//Write a program to find greatest common divisor (GCD) or highest common factor (HCF) of given two numbers.
//Solution
#include<iostream>
using namespace std;
int HCF(int a,int b){
	while(a!=b){
		if(a>b){
			a=a-b;
		}else{
			b=b-a;
		}
	}return a;
}
int main(){
	int first,second,hcf;
	cout<<"Enter your first"<<endl;
	cin>>first;
	cout<<"Enter your second"<<endl;
	cin>>second;
	hcf=HCF(first,second);
	cout<<"Your result :"<<hcf;
    
}
