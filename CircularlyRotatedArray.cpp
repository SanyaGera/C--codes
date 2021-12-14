//Question
//Write a program to shift every element of an array to circularly right. E.g.-
//INPUT : 1 2 3 4 5
//OUTPUT : 5 1 2 3 4
//Solution
#include<iostream>
#include<cmath>
using namespace std;

int main(){
int l;
	cout<<"Enter the length of the array "<<endl;
	cin>>l;
	int arr[l];
	cout<<"Enter the elements of the array "<<endl;
	for(int i=0;i<l;i++){
		cin>>arr[i];
	}
int x=arr[l-1];
for(int i=l-1;i>0;i--){
	arr[i]=arr[i-1];
	
}
arr[0]=x;
cout<<"Output is : "<<endl;
for(int i=0;i<l;i++){
	cout<<arr[i]<<" ";  
}
}
