//Question
//Find the largest and smallest elements of an array.
//Solution
#include<iostream>
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
int max=arr[0];
int min=arr[0];
for(int i=1;i<l;i++){
	if(max<arr[i]){
		max=arr[i];
	}
	if(min>arr[i]){
		min=arr[i];
	}
}
cout<<"Largest element in the array :"<<max<<endl;
cout<<"Smallest element in the array :"<<min<<endl;


}
