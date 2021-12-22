//Question
//Write a program to check if the word 'orange' is present in the "This is orange juice".
//Solution
#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1;
	s1="This is orange juice";
	if(s1.find("orange")>=0 && s1.find("orange")<s1.length()){
		cout<<"Substring present"<<endl;
	}
	else{
		cout<<"Substring not present"<<endl;
	}}
