//Question
//Calculate the sum of digits of a number given by user. E.g.-
//INPUT : 123        OUTPUT : 6
//INPUT : 12345      OUTPUT : 15
//Solution
#include<iostream>
using namespace std;

int main(){
	int j,sum;
	sum=0;
	cout<<"Enter your number :"<<endl;
	cin>>j;
	while(j!=0){
		sum=sum+ j%10;
		j=j/10;
	}
	cout<<"Your result is :"<<sum;
    
}
