//Question
//Write a program to compare if the two strings entered by user are equal or not without using predefined String functions.
//Solution
#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1,s2;
	cout<<"Enter the string s1 "<<endl;
	cin>>s1;
	cout<<"Enter the string s2 "<<endl;
	cin>>s2;
	bool equal=true;
	if(s1.length()!=s2.length()){
		equal=false;
	}
	else{
		for(int i=0;i<s1.length();i++){
			if(s1[i]!=s2[i]){
				equal=false;
				break;
			}
		}
	}
	if(equal==true){
		cout<<"The strings are equal "<<endl;
	}
	else{
		cout<<"Stings are not equal "<<endl;
	}
	
}
