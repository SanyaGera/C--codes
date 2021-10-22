//Problem
//Define a function to calculate power of a number raised to other i.e. ab using recursion where the numbers 'a' and 'b' are to be entered by the user
//Solution
#include<iostream>
#include<cmath>

using namespace std;
int PowerofaNum(int a,int b){
      if(b==1){
      	return a;
	  }	
	  return a*PowerofaNum(a,b-1);
}

int main(){
	int a,b;
	cout<<"Enter a"<<endl;
	cin>>a;
	cout<<"Enter b(Power)"<<endl;
	cin>>b;
	cout<<"Your result is "<<PowerofaNum(a,b)<<endl;

	

	return 0;    
}
