//Question
//Print the multiplication table of a number using recursion.
//Solution
#include<iostream>
#include<cmath>

using namespace std;
int table(int n,int x){
	if(x==0){
		return 0;
	}
	cout<<n<<"*"<<x<<"="<<n*x<<endl;
	table(n,x-1);
}
int main(){
	int a,b;
	cout<<"Enter your number"<<endl;
	cin>>a;
	cout<<"Enter number till which you want the multiplication table"<<endl;
	cin>>b;
	table(a,b);
	return 0;    
}
