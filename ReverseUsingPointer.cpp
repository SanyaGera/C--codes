//Question
//Write a program to reverse the digits a number using pointers.
//Solution
#include<iostream>
using namespace std;

int main(){
	int a,*ptr, rev,*revptr,rem;
	cout<<"Enter your number "<<endl;
	cin>>a;
	ptr=&a;
	rev=0;
	revptr=&rev;
	while(*ptr!=0){
		rem=*ptr%10;
		*revptr=*revptr*10+rem;
		*ptr=*ptr/10;
	}
	cout<<"The reversed number is "<<*revptr<<endl;
}
