//Question
//Define a program to find out whether a given number is even or odd.
//Solution
#include<iostream>
#include<cmath>

using namespace std;
void oddoreven(int n){
	if(n%2==0){
		cout<<"Your Number is Even"<<endl;
	}else{
		cout<<"Your Number is Odd"<<endl;
	}
}
int main(){
	int a;
	cout<<"Enter your number"<<endl;
	cin>>a;
	oddoreven(a);
	return 0; 
}
