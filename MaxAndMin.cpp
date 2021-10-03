//Question
//Define two functions to print the maximum and the minimum number respectively among three numbers entered by user.
//Solution
#include<iostream>
#include<cmath>

using namespace std;
int Max(int a,int b, int c){
	int max;
	if(a>b){
		max=a;
	}else{
		max=b;
	}
	if(max<c){
		max=c;
	}
	
	return max;

}
int Min(int a,int b,int c){
	int min;
	if(a<b){
		min=a;
	}else{
		min=b;
	}if(min>c){
		min=c;
	}
	return min;
}
int main(){
	int a,b,c;
	cout<<"Enter your first number"<<endl;
	cin>>a;
	cout<<"Enter your second number"<<endl;
	cin>>b;
	cout<<"Enter your third number"<<endl;
	cin>>c;
	cout<<"The maximum and minimum out of the three numbers are : "<< Max(a,b,c)<<" and "<<Min(a,b,c)<<" respectively";
	
	

	return 0;
	
    
}
