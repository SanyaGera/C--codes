//Question
//Write a program to find out the greatest and the smallest among three numbers using pointers.
//Solution
#include<iostream>
#include<string>
using namespace std;

int main(){
	int a,b,c;
	int *p1,*p2,*p3;
	p1=&a;
	p2=&b;
	p3=&c;
	cout<<"Enter your first number"<<endl;
	cin>>a;	
	cout<<"Enter your second number"<<endl;
	cin>>b;
	cout<<"Enter your third number"<<endl;
	cin>>c;
	if(*p1>*p2){
		if(*p1>*p3){
			cout<<*p1<<" is the greatest number"<<endl;
		}
		else{
			cout<<*p3<<" is the greatest number "<<endl;
		}
	}
	else{
			if(*p2>*p3){
			cout<<*p2<<" is the greatest number"<<endl;
		}
		else{
			cout<<*p3<<" is the greatest number "<<endl;
		}
		
	}
	
	return 0;
}
