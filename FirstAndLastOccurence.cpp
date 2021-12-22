//Question
//Write a program to find the first and the last occurence of the letter 'o' and character ',' in "Hello, World".
//Solution
#include<iostream>
#include<string>
using namespace std;
int main(){
	string s="Hello,World";
	int firstIndex_o=-1;
	int lastIndex_o=-1;
	int firstIndex_=-1;
	int lastIndex_=-1;
	
	for(int i=0;i<s.length();i++){
		if(s[i]=='o'){
			if(firstIndex_o==-1){
				 firstIndex_o=i;
			}
			lastIndex_o=i;
		}
		if(s[i]==','){
			if(firstIndex_==-1){
				 firstIndex_=i;
			}
			lastIndex_=i;
		}
	}
	cout<<"The first occurence of character o is at position :"<<firstIndex_o+1<<endl;
	cout<<"The last occurence of character o is at position :"<<lastIndex_o+1<<endl;
	cout<<"The first occurence of character , is at position :"<<firstIndex_+1<<endl;
	cout<<"The last occurence of character , is at position :"<<lastIndex_+1<<endl;
}
