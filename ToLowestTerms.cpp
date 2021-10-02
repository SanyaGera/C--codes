//Question//
//Take as input a fraction in the form a/b. Convert the same into lowest terms and print. (Lowest terms examples 3/12 = 1/4).//
//Solution//
#include<iostream>
using namespace std;
int HCF(int a,int b){
	while(a!=b){
		if(a>b){
			a=a-b;
		}else{
			b=b-a;
		}
	}return a;
}
int main(){
	int num,deno,hcf;
	cout<<"Enter your num"<<endl;
	cin>>num;
	cout<<"Enter your deno"<<endl;
	cin>>deno;
	hcf=HCF(num,deno);
	num=num/hcf;
	deno=deno/hcf;
	cout<<"Your result : "<<num<<"/"<<deno;
    
}
