//Question
//Consider an integer array, the number of elements in which is determined by the user. The elements are also taken as input from the user. 
//Write a program to find those pair of elements that has the maximum and minimum difference among all element pairs.
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
	int min=abs(arr[1]-arr[0]);
	int max=abs(arr[1]-arr[0]);
	int el1=arr[0];
	int el2=arr[1];
	int el3=arr[0];
	int el4=arr[1];
	for(int i=1;i<l-1;i++){
		if(min>abs(arr[i+1]-arr[i])){
			min=abs(arr[i+1]-arr[i]);
			el1=arr[i];
			el2=arr[i+1];
		}
		if(max<abs(arr[i+1]-arr[i])){
			max=abs(arr[i+1]-arr[i]);
			el3=arr[i];
			el4=arr[i+1];
		}
	
	}
	cout<<"The minimum difference between the elements in the array is "<<min <<" and is found between the elements "<<
	el1<<" and "<<el2<<endl;
	cout<<"The maximum difference between the elements in the array is "<<max <<" and is found between the elements "<<
	el3<<" and "<<el4<<endl;
}
