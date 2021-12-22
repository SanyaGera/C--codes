//Question
//Write the string after the first occurrence of ',' and the string after the last occurrence of ',' in the string "Hello, Good, Morning".
//Solution
#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1;
	s1="Hello,Good,Morning";
	int firstIndex=-1;
	int lastIndex=-1;
	for(int i=0;i<s1.length();i++){
		if(s1[i]==','){
			if(firstIndex==-1){
				firstIndex=i;
			}
			lastIndex=i;
		}
	}
	cout<<"Substring after first occurence of , : "<<s1.substr(firstIndex+1)<<endl;
	cout<<"Substring after last occurence of , : "<<s1.substr(lastIndex+1)<<endl;
	}
